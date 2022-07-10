#include <iostream>
#include <vector>
#include <string>

using namespace std;



struct student
{
	string name = "";
	float score = 0;
	int age = 0;

	void printInfo()
	{
		cout << "name = " << name << " / score = " << score << " / age = " << age << endl;
	}
};



// source�� key�� �����Ͽ� ���� = leftStr, ������ = rightStr �� ���� ����
void StringCutHalfwithKey(const string& source, char key, string& leftStr, string& rightStr);

// source�� key�� �����Ͽ� ���� ���� ���Ϳ� ��� ����
vector<string> StringCutbyKey(const string& source, char key);



int main()
{
	//string str = "123+4+5+6";
	//int point = str.find("+");
	//cout << point << endl;
	//string leftStr = str.substr(1, point+1);
	//cout << leftStr << endl;
	//string rightStr = str.substr(point , 50);
	//cout << rightStr << endl;
	//int leftNum = stoi(leftStr);
	//cout << leftNum << endl;

	//cout << "Num1 + Num2 �Է�..." << endl;
	//string str = "";
	//cin >> str;
	//int plus = str.find("+");
	//string leftStr = str.substr(0, plus);
	//string rightStr = str.substr(plus + 1, str.length());
	//int leftNum = stoi(leftStr);
	//int rightNum = stoi(rightStr);
	//cout << leftNum + rightNum;

	//vector<string> vecStr;
	//string str = "AAA BBB CCC DDD EEE F GGG HHH III JJJ KK LL M";
	//
	//int i = 0;
	//while (true)
	//{
	//	int temp = str.find(" ");	// ���� ã�� (ã�� ���ϸ� -1 ��ȯ)
	//	vecStr.push_back(str.substr(0, temp));	// #substr(�ε�����ȣ, ����(-1 �̶�� �ε��� ��ȣ���� ���� ǥ��))  #����ã�Ƽ� Ǫ�ù�
	//	str = str.substr(temp + 1);	// Ǫ�ù�κ� ���� ��Ʈ�� ������
	//	cout << vecStr[i] << endl;	// ���
	//	++i;
	//	if (temp == string::npos)	// temp�� ������ ã�� �������� Ż��
	//	{
	//		break;
	//	}
	//}
	//// +a) int index = find(vecStr.begin(), vecStr.end(), "AAA") - vecStr.begin();	// ���Ϳ��� ã�� ���� �ε���

	//vector<string> vecStr;
	//vector<int> vecInt;
	//string str = "AAA=111 BBB=222 CCC=333 DDD=444";
	//int findKey = 0;
	//
	//while (true)
	//{
	//	int temp = str.find(" ", findKey);
	//	if (temp == string::npos)
	//	{
	//		break;
	//	}
	//
	//	string subStr;
	//	string strNum;
	//	StringCutHalfwithKey(str.substr(findKey, temp - findKey), '=', subStr, strNum);
	//	vecStr.push_back(subStr);
	//	vecInt.push_back(stoi(strNum));
	//	findKey = temp + 1;
	//}
	//
	//for (int i = 0; i < vecStr.size(); ++i)
	//{
	//	cout << vecStr[i] << " " << vecInt[i] << endl;
	//}

	//string str = "1 2 33 44 555 6 777";
	//vector<string> vecStr;
	//vecStr = StringCutbyKey(str, ' ');
	//
	//for (int i = 0; i < vecStr.size(); ++i)
	//{
	//	cout << vecStr[i] << endl;
	//}

	student st1;
	string strData = "name=jonh score=3.6 age=20";

	//int key = 0;
	//int temp = strData.find("=", key);
	//int space = strData.find(" ", temp) - temp;
	//st1.name = strData.substr(temp + 1, space - 1);
	//
	//key = temp + 1;
	//temp = strData.find("=", key);
	//space = strData.find(" ", temp) - temp;
	//st1.score = stof(strData.substr(temp + 1, space - 1));
	//
	//key = temp + 1;
	//temp = strData.find("=", key);
	//space = strData.find(" ", temp) - temp;
	//st1.age = stoi(strData.substr(temp + 1, space - 1));

	vector<string> vecStr;
	vecStr = StringCutbyKey(strData, ' ');
	for (string s : vecStr)
	{
		cout << s << endl;
	}
	cout << endl;
	for (string s : vecStr)
	{
		string leftStr = "";
		string rightStr = "";
		StringCutHalfwithKey(s, '=', leftStr, rightStr);
		if (leftStr == "name")
		{
			st1.name = rightStr;
		}
		else if (leftStr == "score")
		{
			st1.score = stoi(rightStr);
		}
		else if (leftStr == "age")
		{
			st1.age = stoi(rightStr);
		}
	}

	st1.printInfo();
}



void StringCutHalfwithKey(const string& source, char key, string& leftStr, string& rightStr)
{
	int temp = source.find(key);
	leftStr = source.substr(0, temp);
	rightStr = source.substr(temp + 1, source.length());
}
	
vector<string> StringCutbyKey(const string& source, char key)
{
	vector<string> vec;
	int findKey = 0;
	while (true)
	{
		int temp = source.find(key, findKey);	// findKey��°���� key�� ã�ƶ�
		vec.push_back(source.substr(findKey, temp - findKey));	// findKey��°���� temp - findKey�� ���� ã�ƶ�
		if (temp == string::npos)	// temp�� ���� ������ �극��ũ
		{
			break;
		}
		findKey = temp + 1; 
	}
	return vec;
}