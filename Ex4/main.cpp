#include <iostream>
#include "Storage.h"

using namespace std;

int main()
{
	// �ΰ��� â�� ���� �ְ� ����
	Storage s1 = { 10,20,30 };
	Storage s2 = { 100,100,100 };

	int targetStorage;	// â�� ���� ����
	bool targetInStorage = true;	// �ش� â���� �� �ൿ ����

	targetStorage = SelectStorage();	// â�� ����

	if (targetStorage == 1)	// ���� â�� ���� �ൿ ����
	{
		targetInStorage = s1.SelectInStorage(targetStorage);	// �ش� â�� ���� �ൿ ����
		s1.DoItStorage(targetInStorage);	// �ൿ ����
	}
	else if (targetStorage == 2)
	{
		targetInStorage = s2.SelectInStorage(targetStorage);	// �ش� â�� ���� �ൿ ����
		s2.DoItStorage(targetInStorage);	// �ൿ ����
	}

	cout << "potato = " << s1.potato << endl;
	cout << "onion = " << s1.onion << endl;
	cout << "carrot = " << s1.carrot << endl;
	cout << endl;
	
	cout << "potato = " << s2.potato << endl;
	cout << "onion = " << s2.onion << endl;
	cout << "carrot = " << s2.carrot << endl;
}