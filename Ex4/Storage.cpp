#include "Storage.h"

int SelectStorage()
{
	while (true)
	{
		int targetStorage = 0;
		cout << "â�� �������ּ���... " << endl;
		cout << "1. 1�� â�� " << endl;
		cout << "2. 2�� â�� " << endl;
		cin >> targetStorage;

		if (targetStorage == 1 || targetStorage == 2)
		{
			return targetStorage;
		}
		else
		{
			cout << "�ٽ� �Է��� �ּ���... " << endl;
		}
	}
}