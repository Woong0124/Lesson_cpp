#include "Student.h"

Student::Student(string name, int classNum, int score) : mName(name), mClassNum(classNum), mScore(score) {}

void Student::PrintInfo()
{
	cout << "�̸� : " << mName << ", �� : " << mClassNum << ", ���� : " << mScore << endl;
}

string Student::GetName()
{
	return mName;
}