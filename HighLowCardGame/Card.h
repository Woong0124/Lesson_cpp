#pragma once
#include <iostream>
#define Max 52
using namespace std;

// ī�忡 ���� ���� ���

enum CardMark
{
	Clover = 0,
	Heart = 1,
	Dia = 2,
	Spade = 3
};

struct StCard
{
	CardMark mark;
	int number;

	void printCard()
	{
		// ī�� ���
		cout << "Mark = " << GetStrMark() << " , Number = " << number << endl;
	}

	string GetStrMark()
	{
		switch (mark)
		{
		case 0:
			return "Clover";
			break;
		case 1:
			return "Hart";
			break;
		case 2:
			return "Dia";
			break;
		case 3:
			return "Spade";
			break;
		default:
			break;
		}
	}
};