#include "Student.h"
#include <iostream>
using namespace std;


Student::Student(int Id = 0, string Name = "No Data", int examScore = 0) {
	this->examScore = examScore;
	this->Id = Id;
	this->Name = Name;
}
Student::~Student() {}

void Student::setId(int Id) { this->Id = Id; }
void Student::setName(string Name) { this->Name = Name; }
void Student::setScore(int examScore) { this->examScore = examScore; }

int Student::getId() { return Id; }
string Student::getName() { return Name; }
int Student::getScore() { return examScore; }
void Student::printAllMember() {
	cout << "Id: " << Id << ",  Isim: " << Name << ",  Sinav not: " << examScore << endl;
}
