#include <iostream>
#include "Employeestruct.h"

using namespace std;

int main()
{
	//���� ���ڵ� ���� �� �� ä���
	Employee anEmployee;
	anEmployee.firstInitial = 'M';
	anEmployee.lastInitial = '6';
	anEmployee.employeeNumber = 42;
	anEmployee.salary = 80000;

	//���� ���ڵ忡 ����� �� ����ϱ�
	cout << "Employee: " << anEmployee.firstInitial << anEmployee.lastInitial << endl;
	cout << "Number: " << anEmployee.employeeNumber << endl;
	cout << "Salary: " << anEmployee.salary << endl;
	return 0;
}