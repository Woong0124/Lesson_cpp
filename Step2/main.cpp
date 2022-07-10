#include <iostream>
#include "Counter.h"
#include "Counter2.h"
#include "VecF.h"

using namespace std;

int main()
{
	// ����Ʈ ������ - �Ű����� ����
	Counter cnt1;
	Counter* pCnt = new Counter[10];
	delete[] pCnt;

	// ����Ʈ ������ - �Ű����� ����
	Counter2 cnt2{ 999 };
	Counter2 cnt3[3] = { Counter2(9), Counter2(9), Counter2(9) };

	// ���� ������ - ���� ��ü�� �����ؼ� ����
	Counter2 cnt4{ cnt2 };
	Counter2 cnt5 = cnt2;

	// ���� ������ - ���� ����
	float a[3] = { 1,2,3 };
	VecF v1(3, a);
	VecF v2(v1);

	// ���� ������ - �޸� ����
	float p1[3] = { 1,2,3 };
	float p2[3] = { 2,4,6 };
	VecF v3(3, p1);
	VecF v4(3, p2);
	VecF v5(v3.add(v4));

	// L-value : �ٽ� ��밡���� ��
	// R-value : �ѹ��� ��밡���� ��
	// & : L-value ���� ��ȣ
	// && : R-value ���� ��ȣ
	int a1 = 10;
	int& aRef = a1;
	const int& bb = 20;
	int&& c = 30;
	
	VecF v6(3);
	VecF v7(3);
	VecF&& vRef1 = v6.add(v7);
}