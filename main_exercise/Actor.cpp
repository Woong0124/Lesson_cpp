#include "Actor.h"
#include <iostream>
#include <Windows.h>

using namespace std;

Actor::Actor() // : mType(MoveType::Right), x(0), z(0), startPoint(0), endPoint(30)
{
	mType = MoveType::Right;
	x = 0;
	z = 0;
	startPoint = 0;
	endPoint = 20;
}

void Actor::Tick()
{
	// enum class �� Ȱ���� switch ����
	switch (mType)
	{
	case MoveType::Right:
		++x;
		if (x >= endPoint)
		{
			mType = MoveType::Up;
		}
		break;
	case MoveType::Up:
		++z;
		if (z >= endPoint)
		{
			mType = MoveType::Left;
		}
		break;
	case MoveType::Left:
		--x;
		if (x <= startPoint)
		{
			mType = MoveType::Down;
		}
		break;
	case MoveType::Down:
		--z;
		if (z <= startPoint)
		{
			mType = MoveType::Right;
		}
		break;
	}
}

// ��¹� �Լ�
void Actor::PrintLocation()
{
	cout << "( x = " << x << ", z = " << z << " )" << endl;
}