#include <iostream>

using namespace std;

void Time(int num);	// �ʸ� �Է¹޾� �ð� ���
float StandardWeight(int height, int weight);	// ǥ�� ������
float FattyLevel(int height, int weight);	// �񸸵�
void FattyLevelPrint(float fattyLevel);

int main()
{
	float result = 0;
	result = FattyLevel(180, 100);
	FattyLevelPrint(result);
}

void Time(int num)
{
	int h, m, s = { 0 };
	h = num / 3600;
	m = (num % 3600) / 60;
	s = (num % 3600) % 60;
	cout << h << "�ð� " << m << "�� " << s << "�� " << endl;
}


float StandardWeight(int height, int weight)
{
	float result = 0;
	result = (height - 100) * 0.9;
	return result;
}

float FattyLevel(int height, int weight)
{
	float result = 0;
	float standardWeight = StandardWeight(height, weight);
	result = (weight - standardWeight) * 100 / standardWeight;
	return result;
}

void FattyLevelPrint(float fattyLevel)
{
	if (fattyLevel <= 10)
	{
		cout << fattyLevel << "  �����Դϴ�... " << endl;
	}
	else if (fattyLevel > 10 && fattyLevel <= 20)
	{
		cout << fattyLevel << "  ��ü���Դϴ�... " << endl;
	}
	else if (fattyLevel > 20)
	{
		cout << fattyLevel << "  ���Դϴ�... " << endl;
	}
}