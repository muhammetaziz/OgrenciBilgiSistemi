#pragma once
#include <iostream>
using namespace std;
class Student
{
private:
	string Name;
	int Id, exam1, exam2, finalExam;
	double avarageScore;

public:
	Student(int Id, string Name, int exam1, int exam2, int finalExam, double avarageScore);
	~Student();

	void setId(int Id);
	void setName(string Name);
	void setScore1(int exam1);
	void setScore2(int exam2);
	void setScore3(int finalExam);

	void calculateAvarage();

	int getId();
	string getName();
	int getScore();

	void printAllMember();
};
