#include <iostream>
#include "CircleClass.h"

using namespace std;

CircleClass::CircleClass() : circle({ 0 })
{

}

CircleClass::CircleClass(double x, double y, double radius)
{
	initialize(x, y, radius);
}

CircleClass::~CircleClass()
{

}

void CircleClass::initialize(double x, double y, double radius)
{
	circle.center.x = x;
	circle.center.y = y;
	circle.radius = radius;
}

// ���� ���� ���ϱ�
double CircleClass::circleArea()
{
	return circle.radius * circle.radius * PI;
}

// ��Ÿ��� ����
double CircleClass::getDistance(CircleType target)
{
	double dx = circle.center.x - target.center.x;
	double dy = circle.center.y - target.center.y;
	double dCntr = sqrt(dx * dx + dy * dy);		// sqrt = ������
	return dCntr;
}

// �� ���� �����ִ��� Ȯ��
bool CircleClass::IsOverlapped(CircleType target)
{
	double distance = getDistance(target);
	return (distance < circle.radius + circle.radius);
}
