#pragma once

// ĸ��ȭ - ��ü�� �����ο� ����ںκ��� �и�

// ���ڸ� 1�� ����
// 0���� �ʱ�ȭ ����
// ���� ī������ �� ����
class Counter
{
private :
	int count;

public :
	// ������
	Counter()
	{
		count = 0;
	}

	// count >> 1�� ����
	void counting()
	{
		++count;
	}

	// count >> 0���� �ʱ�ȭ
	void reset()
	{
		count = 0;
	}

	// count >> �� �˷��ֱ�
	int getCount() const
	{
		return count;
	}
};