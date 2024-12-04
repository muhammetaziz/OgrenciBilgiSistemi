#pragma once
#include <iostream>
using namespace std;
class Student
{
private:
	string Name;
	int Id, examScore;

public:
	Student(int Id,string Name,int examScore);
	~Student();

	void setId(int Id);
	void setName(string Name);
	void setScore(int examScore);
	
	int getId();
	string getName();
	int getScore();

	void printAllMember();
};
