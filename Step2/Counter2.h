#pragma once

class Counter2
{
private:
	int value;

public:
	Counter2(int num);	// ����Ʈ ������ - �Ű����� ����
	Counter2(const Counter2& c);	// ���� ������ - ���� ��ü�� �����ؼ� ����
	void Reset();
	void Count();
	int GetValue() const;
};