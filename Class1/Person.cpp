#include "Person.h"
#include <iostream>

using namespace std;

Person::Person(const char* name, const char* addr)
{
	this->name = new char[strlen(name) + 1];	// this->������ : ���� Ŭ���� ���� ������ ����Ű�� ����
	strcpy_s(this->name, strlen(name) + 1, name);	// strlen(name) + 1 : ������ ���ڴ� \n �� �߰� ǥ���
													// \n : ���ڿ��� �������� �˸��� ǥ��
	this->addr = new char[strlen(addr) + 1];
	strcpy_s(this->addr, strlen(addr) + 1, addr);

	cout << "Person ��ü ���� ( " << name << ", " << addr << " )" << endl;
}

Person::~Person()
{
	cout << "Person ��ü ���� ( " << name << ", " << addr << " )" << endl;
	delete[] name;
	delete[] addr;
	name = nullptr;
	addr = nullptr;
}

void Person::changeAddr(const char* newAddr)
{
	delete[] addr;
	addr = new char[strlen(newAddr) + 1];
	strcpy_s(addr, strlen(newAddr) + 1, newAddr);
}

void Person::printAddr()
{
	cout << "�ּҴ� " << addr << " �Դϴ�." << endl;
}

void Person::changeName(const char* newName)
{
	delete[] name;
	name = new char[strlen(newName) + 1];
	strcpy_s(name, strlen(newName) + 1, newName);
}

void Person::printName()
{
	cout << "�̸��� " << name << " �Դϴ�." << endl;
}
