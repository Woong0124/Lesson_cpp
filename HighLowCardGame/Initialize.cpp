#include <iostream>
#include "Initialize.h"

void Initialize()
{
	// ī�� ����
	for (int i = 0; i < 52; ++i)
	{
		cards[i].number = (i % 13) + 1;
		if (i / 13 == 0)
		{
			cards[i].mark = Clover;
		}
		else if (i / 13 == 1)
		{
			cards[i].mark = Heart;
		}
		else if (i / 13 == 2)
		{
			cards[i].mark = Dia;
		}
		else if (i / 13 == 3)
		{
			cards[i].mark = Spade;
		}
	}
}

void Shuffle()
{
	// ī�� ����
	srand((unsigned int)time(NULL));	// srand(time) - rand �Լ��� ���� ���� �Ź� �ٲ�� �ð����� �ʱ�ȭ
	for (int i = 0; i < 52; ++i)
	{
		int FirstNumber = rand() % 52;	// rand - ������ ���� ��ȯ���� (�ݺ��ص� ����� �Ź� �Ȱ���)
		int SecoundNumber = rand() % 52;

		StCard temp = cards[FirstNumber];
		cards[FirstNumber] = cards[SecoundNumber];
		cards[SecoundNumber] = temp;
	}

}

int Betting(int money)
{
	int betting = 0;
	cout << "�󸶸� �����Ͻðڽ��ϱ�? " << endl;
	cout << "���� �ݾ� : " << money << endl;
	cin >> betting;
	while (betting > money)
	{
		cout << "���ñݾ��� ���� �ӴϺ��� �����ϴ�. �ٽ� �������ּ���... " << endl;
		cout << "���� �ݾ� : " << money << endl;
		cin >> betting;
	}
	return betting;
}

bool CompareCard(const StCard& CardA, const StCard& CardB)
{
	if (CardA.number > CardB.number)
	{
		cout << "ù��° ī�尡 ũ�� " << endl;
		cout << endl;
		return true;
	}
	else if (CardA.number < CardB.number)
	{
		cout << "�ι�° ī�尡 ũ�� " << endl;
		cout << endl;
		return false;
	}
	else if (CardA.number == CardB.number)
	{
		if (CardA.mark > CardB.mark)
		{
			cout << "ù��° ī�尡 ũ�� " << endl;
			cout << endl;
			return true;
		}
		else if (CardA.mark < CardB.mark)
		{
			cout << "�ι�° ī�尡 ũ�� " << endl;
			cout << endl;
			return false;
		}
	}
}

void ResultCard(bool& result, char c, int& count)
{
	if (result == true)
	{
		if (c == 'h')
		{
			cout << "����" << endl;
			cout << "�� " << count << " �� ���� " << endl;
			cout << endl;
			result = false;
		}
		if (c == 'l')
		{
			++count;
			cout << count << " �� ����" << endl;
			cout << endl;
			result = true;
		}
	}
	else if (result == false)
	{
		if (c == 'h')
		{
			++count;
			cout << count << " �� ����" << endl;
			cout << endl;
			result = true;
		}
		if (c == 'l')
		{
			cout << "����" << endl;
			cout << "�� " << count << " �� ���� " << endl;
			cout << endl;
			result = false;
		}
	}
}

void BettingResult(const bool result, int& betting, int& money)
{
	if (result == true)	// ���� ���
	{
		money += betting;
		cout << betting << " ���� ���� �ݾ��� ȹ���ϼ̽��ϴ�..." << endl;
		cout << "���� �ݾ� : " << money << endl;
		cout << endl;
	}
	if (result == false)
	{
		money -= betting;
		cout << betting << " ���� �ݾ��� �Ҿ���Ƚ��ϴ�..." << endl;
		cout << "���� �ݾ� : " << money << endl;
		cout << endl;
	}
}

bool ContinueCard(bool result)
{
	char c = 0;
	if (result == true)
	{
		cout << "��� �Ͻðڽ��ϱ� ?" << endl;
		while (!(c == 'y' || c == 'n'))
		{
			cout << "y Ȥ�� n �� �Է����ּ���..." << endl;
			cin >> c;
		}
		if (c == 'n')
		{
			return false;
		}
	}
	else if (result == false)
	{
		cout << "�ٽ� �Ͻðڽ��ϱ� ?" << endl;
		while (!(c == 'y' || c == 'n'))
		{
			cout << "y Ȥ�� n �� �Է����ּ���..." << endl;
			cin >> c;
		}
		if (c == 'n')
		{
			return false;
		}
	}
}