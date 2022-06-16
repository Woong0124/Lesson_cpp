#pragma once
#include <iostream>

//public = ��� ������ ������ �� ����
//private = �ٸ� ������ ������ �� ����
//protected = �ڽı����� ������ �� ����

const double PI = 3.141592;

// 2D �� ��ǥ
struct C2dType
{
	double x, y;
};

struct CircleType
{
	C2dType center;
	double radius;
};

class CircleClass
{
public:
	CircleClass();	// ������
	CircleClass(double x, double y, double radius);

	~CircleClass();	// �ı���

	void initialize(double x, double y , double radius);
	double circleArea();	// ���� ���� ���ϱ�
	double getDistance(CircleType target);	// ��Ÿ��� ����				// target���� �Ÿ� ���ϱ�
	bool IsOverlapped(CircleType target);	// �� ���� �����ִ��� Ȯ��		// target�� ������ �Ǿ� �ִ��� üũ

	CircleType circle;	// �Ӽ�
};