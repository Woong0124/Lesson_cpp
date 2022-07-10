#pragma once
#include <iostream>

using namespace std;

class VecF
{
private:
	int n;	// ������ ũ��
	float* arr;	// ������ float���� ���� ������

public:
	VecF(int d, float* a = nullptr);
	VecF(const VecF& fv);
	~VecF();

	VecF add(const VecF& fv) const;
	void Print() const;
};