#include "VecF.h"

VecF::VecF(int d, float* a) : n{ d }
{
	arr = new float[d];	// d�� ����ŭ float arr �迭 ����
	if (a) memcpy(arr, a, sizeof(float) * n);	// arr�� a���� sizeof(float)*n ��ŭ ����
}

VecF::VecF(const VecF& fv) : n{ fv.n }
{
	arr = new float[n];
	memcpy(arr, fv.arr, sizeof(float) * n);
}

VecF::~VecF()
{
	delete[] arr;
}

VecF VecF::add(const VecF& fv) const
{
	VecF tmp{ n };
	for (int i = 0; i < n; ++i)
	{
		tmp.arr[i] = arr[i] + fv.arr[i];
	}
	return tmp;
}

void VecF::Print() const
{
	cout << "[ ";
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
		cout << " ]";
	}
}
