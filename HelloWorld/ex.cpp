#include <iostream>

using namespace std;

struct Point	//����ü ����
{
	int x;
	int y;
}P1, P2;	//Point ����ü P1, P2 ���� ����

enum Color	//������ ����
{
	Red, Blue, Write, Black
};

int main()
{
	//����ü ����
	P1 = { 11, 22 };	//Point ����ü P1 �� �ֱ�
	P2 = { 21, 12 };
	P1.x = 20;			//Point ����ü P1�� x �� �ֱ�
	P1 = { };			//Point ����ü P1�� �� �ʱ�ȭ

	cout << endl;

	cin >> P1.x;		//P1�� x, y�� �Է¹ޱ�
	cin >> P1.y;
	cout << P1.x << " " << P1.y << endl;

	// if / else ����
	int a, b, c = 0;

	cout << "������ ���ʷ� �Է����ּ���. = " << endl;
	cin >> a >> b >> c;
	
	int result = (a + b + c) / 3;

	if (result >= 60)
	{
		cout << "�հ�" << endl;
	}
	else
	{
		cout << "���հ�" << endl;
	}

	// if / else ���� 2
	int buy = 0;
	
	cout << "�� ���ž��� �Է����ּ��� : " << endl;
	cin >> buy;

	if (buy >= 10000 && buy < 50000)
	{
		buy *= 0.95;
		cout << "���� �������� " << buy << " �Դϴ�." << endl;
	}
	else if (buy >= 50000 && buy < 100000)
	{
		buy *= 0.90;
		cout << "���� �������� " << buy << " �Դϴ�." << endl;
	}
	else if (buy >= 100000)
	{
		buy *= 0.80;
		cout << "���� �������� " << buy << " �Դϴ�." << endl;
	}
	else
	{
		cout << "���� �������� " << buy << " �Դϴ�." << endl;
	}
}