#include <iostream>
#include "Counter.h"
#include "User.h"
#include "Person.h"

using namespace std;

void g(const Counter& c)
{
	// const class�� �����Ϸ��� class �Լ��� ���µ� const ���� �Ѵ�
	cout << "Counter = " << c.getCount() << endl;
}

int main()
{
	Counter c1;
	c1.counting();
	c1.counting();
	c1.counting();
	cout << "c1 Count = " << c1.getCount() << endl;
	g(c1);

	char a[11] = { "����" };
	Person* p1 = new Person(a, "����");
	Person* p2 = new Person("����", "��⵵");
	p2->printAddr();
	p2->changeAddr("�������ý���");
	p2->printAddr();
	cout << endl;
	p2->changeName("�ϴ�");
	p2->printName();
	delete p1;
	delete p2;



	//int a = 10;
	//int* ptr;	// int* ����ų ��ü �ڷ��� ������
	//ptr = &a;	// ptr�� a�� �ּҰ��� ����	// & : �ּҰ� ��� ������
	//*ptr = 20;	// ptr�� ����Ű�� ���� 20�� ����	// *ptr : ����Ű�� �ִ� ���� ����
	//cout << "a = " << a << endl;
	//cout << &ptr << "  " << &a << endl;	// &ptr : �ּҰ��� �����ϴ� ptr�� ������ �ּҰ�



	//// �����Ҵ�
	//// ������ �޸𸮿� ���� �Ҵ�
	//int* intPtr;
	//intPtr = new int;	// new : ���� �޸� �Ҵ� ������
	//*intPtr = 10;		// intPtr�� ����Ű�� �ּҿ� �����Ͱ� 10�� ����
	//cout << intPtr << endl;
	//delete intPtr;		// delete : ���� �޸� ��ȯ ������
	//intPtr = nullptr;	// nullptr : ���� ��
	//cout << intPtr << endl;

	//int* intArrPtr;
	//intArrPtr = new int[4];	// �迭�� ���� �޸𸮿� �Ҵ�
	//*intArrPtr = 10;
	//cout << *intArrPtr << "   " << intArrPtr << endl;
	//*(intArrPtr + 1) = 20;	// �Ʒ��� ������ ����
	//intArrPtr[2] = 30;		// ���� ������ ����
	//cout << *intArrPtr << "   " << intArrPtr[1] << "   " << *(intArrPtr + 2) << endl;
	//delete[] intArrPtr;
	//intArrPtr = nullptr;



	//// L-value ������
	//int x = 10;
	//int y = 20;
	//int& xRef = x;	// xRef : x�� ���ο� ����, �� ����
	//xRef = 100;	// xRef�� x�� ���ο� �����̱� ������ x���� �ٲ��
	//cout << x << "   " << y << endl;
	//xRef = y;	// y�� ���� xRef�� �ִ´�
	//cout << x << "   " << y << endl;
	//xRef = 50;	// ������ xRef = y ��� ������ y�� ���� xRef�� ���� �ϰ��ִ� x���� �ִ´� ��� �ǹ�
	//cout << x << "   " << y << endl;

	//// ���� ���������� �� ������ ����
	//{
	//	int x = 10, y = 20;
	//	int* xRef = &x;
	//	*xRef = 100;
	//	*xRef = y;
	//}
}