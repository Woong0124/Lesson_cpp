#include <iostream>
#include <vector>
#include <map>
#include "Student.h"

using namespace std;

int main()
{
	vector<Student> vecStudent;
	string name = "";
	map<string, Student> mapStudent;
	int classNum = 0;
	int score = 0;
	int mgrType = 0;

	Student aaa = { "�л�1", 1, 100 };
	Student bbb = { "�л�2", 2, 60 };
	Student ccc = { "�л�3", 1, 50 };
	vecStudent.push_back(aaa);
	vecStudent.push_back(bbb);
	vecStudent.push_back(ccc);

	while (true)
	{
		cout << " [Student Manager] " << endl;
		cout << "1. �л� �߰� " << endl;
		cout << "2. �л� ���� " << endl;
		cout << "3. ��� �л� ���� ���� " << endl;
		cout << "4. �л� ã�� " << endl;
		cout << endl;
		cin >> mgrType;
		if (!(mgrType == 1 || mgrType == 2 || mgrType == 3 || mgrType == 4))
		{
			cout << "�ٽ� �Է��� �ּ���... " << endl;
			cin >> mgrType;
		}

		switch (mgrType)
		{
		case 1: {
			cout << "�߰��� �л��� ������ �Է��մϴ�..." << endl;
			cout << "�̸�, ��, ������ �Է����ּ���..." << endl;
			cin >> name;
			cin >> classNum;
			cin >> score;
			cout << endl;
			Student s = { name,classNum,score };
			vecStudent.push_back(s);
		} break;

		case 2: {
			int index = 0;
			cout << "������ �л��� Index�� �Է����ּ���... " << endl;
			cin >> index;
			vecStudent.erase(vecStudent.begin() + index);
			cout << "���Ű� �Ϸ�Ǿ����ϴ�..." << endl;
			cout << endl;
		} break;

		case 3: {
			cout << " - �л� ���� - " << endl;
			for (Student s : vecStudent)
			{
				s.PrintInfo();
			}
			cout << endl;
		} break;

		case 4: {
			string cName = "";
			cout << "ã�� �л��� �̸��� �Է����ּ���..." << endl;
			cin >> cName;
			for (int i = 0; i < vecStudent.size(); ++i)
			{
				string n = "";
				if (vecStudent[i].GetName() == cName)
				{
					vecStudent[i].PrintInfo();
					cout << "�ش� �л��� Index�� " << i << " �Դϴ�..." << endl;
					cout << endl;
				}
			}
		} break;
		}

		char c = NULL;
		cout << "�߰� �Է� �Ͻðڽ��ϱ�? " << endl;
		cin >> c;
		if (c == 'n')
		{
			break;
		}
		while (!(c == 'y' || c == 'n'))
		{
			cout << "�ٽ� �Է����ּ���..." << endl;
			cin >> c;
		}
	}
}