#pragma once

class Counter
{
private:
	int value;

public:
	Counter();	// ����Ʈ ������ - �Ű����� ����
	void Reset();
	void Count();
	int GetValue() const;
};