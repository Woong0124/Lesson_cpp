#include <iostream>

using namespace std;

//void func(int a);
//void func(float a);
//
//func(10);			void func(int a);		// �Լ� ȣ��
//func(10.f);		void func(float a);		// �Լ� ȣ��
//func(10.0);								// ���� �߻�

// ����ü ������ �׻� �� ó���� !!
struct salesRec
{
	char pID[10];
	int dYear;
	int dMonth;
	int dData;
	char deliverAddr[40];
};

struct timeRec
{
	int hours;
	int minutes;
	int seconds;
};

// �Լ� ����
double getArraySum(double arr[], int n);	// �迭�� ���� ��� �����ִ� �Լ�
void printSum(double sum);					// ����Ʈ �Լ�	// void�� ��ȯ���� ����
double variance(double arr[], int n);		// �л� ���ϱ� �Լ�
void swapValues(int& x, int& y);			// �� ���� ���� �ٲٴ� �Լ�
void prSalesRec(salesRec srec);

// ���� Ÿ��, ���� ������, �ٸ� �Ű�����	 ����
// �ٸ� Ÿ��, ���� ������, ���� �Ű�����	�Ұ���
void addTime(timeRec& t1, const timeRec& t2);	// �ð� t1�� t2�� ���Ѵ�
void addTime(timeRec& t1, int minutes);			// �ð� t1�� minutes ���� ���Ѵ�

int main()
{
	////�Լ��� ���� �� �ڵ�
	//double a[50], b[100];
	//double sum = 0;
	//sum = getArraySum(a, 50);
	//printSum(sum);
	//sum = getArraySum(b, 100);
	//printSum(sum);

	//���� ����		//�Լ��� ���� �ʾ��� ���� �ڵ�
	//for (int i = 0; i < 50; ++i)
	//{
	//	a[i] = i;
	//	sum += a[i];
	//}
	//cout << "sum = " << sum << endl;
	//for (int i = 0; i < 100; ++i)
	//{
	//	b[i] = i;
	//	sum += b[i];
	//}
	//cout << "sum = " << sum << endl;

	////
	//int a, b = { 0 };
	//cout << "�ΰ��� ���� �Է��� �ּ���. \n";
	//cin >> a >> b;
	//swapValues(a, b);
	//cout << "a = " << a << " b = " << b << endl;

	////
	//salesRec stRec;
	//strcpy_s(stRec.pID, "123456789");
	//stRec.dYear = 2022;
	//stRec.dMonth = 6;
	//stRec.dData = 8;
	//strcpy_s(stRec.deliverAddr, "��⵵");
	//prSalesRec(stRec);

	//
	timeRec time1 = { 2, 20, 30 };
	timeRec time2 = { 1, 55, 11 };

	cout << time1.hours << "�ð� " << time1.minutes << "�� " << time1.seconds << "�� + ";
	cout << time2.hours << "�ð� " << time2.minutes << "�� " << time2.seconds << "�� = ";
	addTime(time1, time2);
	cout << time1.hours << "�ð� " << time1.minutes << "�� " << time1.seconds << "��";

	//cout << time1.hours << "�ð� " << time1.minutes << "�� + ";
	//cout << time2.hours << "�ð� " << time2.minutes << "�� = ";
	//addTime(time1, 210);
	//cout << time1.hours << "�ð� " << time1.minutes << "��";
}

// �迭�� ���� ��� �����ִ� �Լ�
double getArraySum(double arr[], int n)		// �ڷ��� �Լ��� (�ŰԺ���)
{
	double sum = 0;

	for (int i = 0; i < n; ++i)
	{
		arr[i] = i;
		sum += arr[i];
	}

	return sum;
}

// ����Ʈ �Լ�	// void�� ��ȯ���� ����
void printSum(double sum)
{
	cout << "sum = " << sum << endl;
}

// �л� ���ϱ� �Լ�
double variance(double arr[], int n)
{
	double sum = 0, sqSum = 0;

	for (int i = 0; i < n; ++i)
	{
		sum += arr[i];
		sqSum += arr[i] * arr[i];
	}
	double result = sqSum / n - sum / (n * n);
	return result;
}

// �� ���� ���� �ٲٴ� �Լ�
void swapValues(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}

//
void prSalesRec(salesRec srec)
{
	cout << "ǰ���ڵ� : " << srec.pID << endl;
	cout << "������� : " << srec.dYear << "�� " << srec.dMonth << "�� " << srec.dData << "�� " << endl;
	cout << "����ּ� : " << srec.deliverAddr << endl;
}

// �ð� t1�� t2�� ���Ѵ�
void addTime(timeRec& t1, const timeRec& t2)
{
	t1.seconds += t2.seconds;
	t1.minutes += t2.minutes + (t1.seconds / 60);
	t1.seconds %= 60;
	t1.hours += t2.hours + (t1.minutes / 60);
	t1.minutes %= 60;
}

// �ð� t1�� minutes ���� ���Ѵ�
void addTime(timeRec& t1, int minutes)
{
	t1.minutes += minutes;
	t1.hours += (t1.minutes / 60);
	t1.minutes %= 60;
}