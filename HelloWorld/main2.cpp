#include <iostream>

using namespace std;

namespace myNS1 { int n = 10; }
namespace myNS2 { int n = 20; }
int n = 30; //��������

int main()
{

	int n = 40; //��������

	cout << myNS1::n << endl;
	cout << myNS2::n << endl;
	cout << ::n << endl;
	cout << n << endl;

	cout << endl;

	//����ȯ ��� //���� ����ȯ�� �����Ͱ� �ҽǵ� �� �ִ�.
	float myFloat = 3.14f;
	int i1 = (int)myFloat;
	int i2 = int(myFloat);
	int i3 = static_cast<int>(myFloat);

	//�Ǽ����� ǥ�� ���
	double d1 = 1200.;
	double d2 = 1200.0;
	double d3 = 12e2;	//e �� 10, 2 �� ����
	double d4 = 12e+2;	//�� ����� ����

	cout << d1 << endl;
	cout << d2 << endl;
	cout << d3 << endl;
	cout << d4 << endl;

}