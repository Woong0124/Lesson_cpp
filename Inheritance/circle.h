#pragma once
#include <iostream>

using namespace std;

class Circle
{
public:

	Circle();
	~Circle();

	// ���� �Լ�
	virtual void printName() {
		cout << name << mX << endl;
	}

	char name[100];
	int mX, mY;
	double mRadius;
};