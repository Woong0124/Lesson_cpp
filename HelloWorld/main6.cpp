#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	// if / else ��
	int a, b = 0;
	cout << "A is ? ";
	cin >> a;
	cout << "B is ? ";
	cin >> b;
	if (a > b)
	{
		cout << "A�� ũ��. " << endl;
	}
	else
	{
		cout << "B�� ũ��. " << endl;
	}

	if (a < b)	//a �� b ���� �ٲٴ� ����
	{
		int temp = a;
		a = b;
		b = temp;
		cout <<  "a = " << a << endl << "b = " << b << endl;
	}
}