#include <iostream>

using namespace std;

int main()
{
	
	//����ȯ ����
	int someInteger = 256;
	short someShort;
	long someLong;
	float someFloat;
	double someDouble;

	someInteger++;	//257
	someInteger *= 2;	//514
	someShort = short(someInteger);	//514
	someLong = someShort * 10000;	//5140000
	someFloat = someLong + 0.785f;	//5140000.785
	someDouble = double(someFloat) / 100000;	//51.40000785
	cout << someDouble << endl;

	//�� ���� ���� ����
	int firstNum = 0;
	cout << "ù��° ���� : ";
	cin >> firstNum;
	int secondNum = 0;
	cout << "�ι�° ���� : ";
	cin >> secondNum;
	cout << "����� " << firstNum + secondNum << " �Դϴ�." << endl;

	//const  //����Ұ� ���
	const int i = 1;

	//�ڷ��� ũ�� ����
	int x = 2999999999;
	unsigned int y = 2999999999;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;

}