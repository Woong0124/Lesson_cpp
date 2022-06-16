#include <iostream>
#include <array>
#include <vector>

using namespace std;

int main()
{

	// �迭 ����, ������[�ε��� ����]
	int myArray[5] = { 0 };
	// �ε��� ������ ������ �ʾ��������� ���� ���� �Է� ������Ѵ�.
	int myArray[] = { 1,2,3,4 };
	// �Ϻ� ���� ���������� ������ 0���� �ʱ�ȭ
	int myArray[5] = { 1,2,3 };	// 4, 5�� �ε����� 0 ���� �ʱ�ȭ
	
	// 2���� �迭
	//	1	2	3	4
	//	5	6	7	8		<== �̷��� ǥ���
	int myArray1[2][4] = { {1,2,3,4},{5,6,7,8} };
	
	// ���� ǥ���
	int myArray2[3] = { 0 };
	array<int, 3> myArray2 = { 5,2,3 };	// ��ȣ ǥ���
	auto [a1, a2, a3] = myArray2;	// auto (���¿� �°� �ڵ� ��ȯ)	// 
	
	// ����
	vector<int> myVector = { 11, 22 };
	myVector.push_back(33);	// �ε����� 33�� ���� �ø�



	// for ����
	// myVector�� ��� ���� ���غ���.

	vector<int> myVector = { 11, 22, 33 };
	int sum = 0;
	
	for (int i = 0; i < myVector.size(); ++i)
	{
		sum += myVector[i];
	}
	cout << sum << endl;

	//���� ����
	for (auto i = myVector.begin(); i < myVector.end(); ++i)	// ������
	{
		sum += *i;	// ���� �������� �ּҰ��� ���������� * �� ����
	}
	cout << sum << endl;

	// ���� ����
	for (int i : myVector)	// for(���� : ����)	// myVector�� ���� i ������ �ϳ��� �����ؼ�	������ ������ ���� �ݺ�
	{
		sum += i;
	}
	cout << sum << endl;

	// & �����ָ� �����Ǿ� �� ������ ������ �ش�
	// ������ 12,23,34	// �Ⱥ����� 11,22,33
	for (int& i : myVector)
	{
		++i;
	}

	for (int i = 0; i < myVector.size(); ++i)
	{
		cout << "myVector[ " << i << " ] = " << myVector[i] << endl;
	}

	//myVector(11,22,33) -> (12,23,34)�� �ٲ㺸��
	for (int i = 0; i < myVector.size(); ++i)
	{
		++myVector[i];
	}

	for (int i = 0; i < myVector.size(); ++i)
	{
		cout << "myVector[ " << i << " ] = " << myVector[i] << endl;
	}



	// while ����			// �� ����üũ, �� ����
	vector<int> myVector = { 11, 22, 33 };

	int vectorSize = myVector.size();
	cout << "VectorSize = " << vectorSize << endl;

	int sum = 0;
	int i = 0;

	while (i < 3)
	{
		sum += myVector[i];
		++i;
	}

	// do / while ����		// �� ����, �� ����üũ
	int sum2 = 0;
	int j = 0;
	do {
		sum2 += myVector[j];
		++j;
	} while (j > 3);



	//
	int selection = 0;

	do {
		system("cls");	// â�� ������ ���� ��������
		cout << "What do you like? : \n";
		cout << "1) Red\n";
		cout << "2) Blue\n";
		cout << "3) Black\n";
		cout << "4) White\n";
		cin >> selection;
	} while (4 < selection || selection < 1);

	cout << "You like " << selection << endl;

	
	do {
		system("cls");

		int a, b = { 0 };
		cout << "put number [A B] : \n";
		cin >> a >> b;

		cout << "A + B = " << a + b << endl;
		cout << "Quit ? ( Y / N ) : ";

		char q = ' ';
		cin >> q;

		if (q == 'Y')
		{
			break;
		}
	} while (1);
}