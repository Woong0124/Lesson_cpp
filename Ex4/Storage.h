#pragma once
#include <iostream>

using namespace std;

// â�� ����
int SelectStorage();

struct Storage
{
	int potato;
	int onion;
	int carrot;

	// ����, ����, ��� ����
	void AddVege(int a, int b, int c)
	{
		potato += a;
		onion += b;
		carrot += c;
	}

	// ����, ����, ��� ����
	void MinusVege(int a, int b, int c)
	{
		potato -= a;
		onion -= b;
		carrot -= c;
		if (potato <= 0)
		{
			potato = 0;
		}
		if (onion <= 0)
		{
			onion = 0;
		}
		if (carrot <= 0)
		{
			carrot = 0;
		}
	}

	// ���丮���� ���� �޾ƿ��� �Ѱ��� ���丮���� �ʱ�ȭ
	void MoveStorage(Storage& target)
	{
		potato += target.potato;
		onion += target.onion;
		carrot += target.carrot;
		target = { 0 };
	}

	// â���� ���� �ൿ ����
	bool SelectInStorage(int target)
	{
		switch (target)
		{
		case 1:
			cout << "1�� â���Դϴ�. �ൿ�� �������ּ���..." << endl;
			break;
		case 2:
			cout << "2�� â���Դϴ�. �ൿ�� �������ּ���..." << endl;
			break;
		}

		while (true)
		{
			int order = 0;
			cout << "0. â�� �������� ���ư��ϴ�..." << endl;
			cout << "1. â�� ä�Ҹ� �ֽ��ϴ�..." << endl;
			cout << "2. â�� ä�Ҹ� �����ϴ�..." << endl;
			cin >> order;

			switch (order)
			{
			case 0:
				target = SelectStorage();
				break;
			case 1:
				return true;
			case 2:
				return false;
			default:
				cout << "�ٽ� �������ּ���..." << endl;
				break;
			}
		}
	}

	// �ൿ ����
	void DoItStorage(bool targetIn)
	{
		int num1 = 0;
		int num2 = 0;
		int num3 = 0;
		if (targetIn == true)
		{
			cout << "����, ����, ��� ������ ���� ������ �Է����ּ���..." << endl;
			cin >> num1 >> num2 >> num3;
			AddVege(num1, num2, num3);
		}
		else if (targetIn == false)
		{
			cout << "����, ����, ��� ������ �� ������ �Է����ּ���..." << endl;
			cin >> num1 >> num2 >> num3;
			MinusVege(num1, num2, num3);
		}
	}
};