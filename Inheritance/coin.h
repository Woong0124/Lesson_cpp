#pragma once
#include "circle.h"

class Coin : public Circle
{
public :

	Coin();
	~Coin();

	// �������̵�
	virtual void printName() override
	{
		__super::printName();	// �θ� �Լ� ���� ����
		cout << "price = " << price << " color = " << color << endl;
	}

	int price;
	int color;
};