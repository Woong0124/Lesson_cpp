#include <iostream>

int main()
{
	
	//Hello, World ���
	std::cout << "Hello, World" << std::endl;

	//cin �Է� ���
	int value;
	std::cin >> value;

	//value �� �Է��� ���� ���
	std::cout << "There are " << value << " ways I love you." << std::endl;

	//�Ȱ��� ���
	std::cout << "There are " << 219 << "\n" << " ways I love you." << std::endl;
	std::cout << "There are " << 219 << "\n ways I love you." << std::endl;

	//����
	std::cout << "A \nBC \nDEF \nGH" << std::endl;

	//��� �Ȱ��� 0 �� ���� ����
	int a = 0;
	int a1(0);
	int a2{ 0 };
	int a3 = { 0 };

	//
	a = 0b1010101;	// 2����
	a1 = 0x11;		// 16����
	std::cout << a << std::endl;
	std::cout << a1 << std::endl;

	//
	char c = 'A';
	char c1 = '\101';	//10���� �����ڵ� A
	std::cout << c << std::endl;
	std::cout << c1 << std::endl;

}