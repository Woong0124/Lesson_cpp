#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	{
		int a = 10;
		int b = 0;
		
		//���� ������
		b = a++;
		cout << "a = " << a << "b = " << b << endl;
	}

	{
		int a = 10;
		int b = -5;
		bool result = false;
		result = (a > b) ? true : false;
		result = (a == b) ? true : false;
		result = (a > 0 && b > 0) ? true : false;	//����, �Ѵ� ���̸� ��
		result = (a > 0 || b > 0) ? true : false;	//����, �ϳ��� ���̸� ��
		result = (a > 0 && --b > 0) ? true : false;		//���� �����̸� ���� �� ������� ���� ����
		result = !(a > 0) ? true : false;
		cout << "result = " << boolalpha << result << " b = " << b << endl;
														//boolalpha ����ϸ� ��/�������� ���� ����
	}
	
	{ 
		int num = 10;
		cout << bitset<32>(num) << endl;	//2���� ���
		cout << oct << num << endl;			//8���� ���
		cout << dec << num << endl;			//10���� ���
		cout << hex << num << endl;			//16���� ���

		//0 = false, 0�� �ƴ� �� = true < ex)1 > 
		//��Ʈ���� ���� ����
		int x = 0x35;
		int y = 0xf0;
		cout << "x = " << bitset<8>(x) << endl;
		cout << "y = " << bitset<8>(y) << endl;
		cout << "x & y = " << bitset<8>(x & y) << endl;
		cout << "x | y = " << bitset<8>(x | y) << endl;
		cout << "x ^ y = " << bitset<8>(x ^ y) << endl;
		cout << "~x = " << bitset<8>(~x) << endl;
		
		cout << '\n' << endl;
		
		//��Ʈ ���� ����Ʈ
		int x1 = x << 2;
		cout << "x  = " << bitset<8>(x) << endl;
		cout << "x1 = " << bitset<8>(x1) << endl;

		char cX = 0b00010100;
		cout << "cX = " << bitset<8>(cX) << endl;	//����Ʈ ��
		cX = cX >> 2;
		cout << "cX = " << bitset<8>(cX) << endl;	//����Ʈ ��
	}
	
	{
		//�� ��ȯ
		int intVar = 7;
		double doubleVar = 1.5;
		float floatVar = 3.7f;

		intVar = doubleVar;
		floatVar = intVar;

		//�ڷ��� ��ȯ �켱����, ����� ũ�� �Ǽ��� ���°� �켱
		//char > int > long > float > double > longdouble
		intVar = doubleVar + intVar * floatVar;		//float > double > int �� �� ��ȯ�� ��ħ

	}
	
	{
		//static cast = �����߿� �� �˻縦 ���� ������, ������ �Ҷ� ���Ŀ� ������ �״�� ��ȯ��
		//dynamic_cast =  ���� Ŭ������ �Ļ� Ŭ���� ���� ������ �Ǵ� ���� �� ��ȯ�� ���α׷� ���� �߿� �Ͼ���� ������
		//reinterpret_cast = �����͸� �ٸ� �ڷ����� �����ͳ� ���� �ڷ�������, �Ǵ� �׿����� ��ȯ��
		//const_cast = const ������ �Ͻ� ������

		double d = 10.5;
		int a = static_cast<int>(d);
	}
}