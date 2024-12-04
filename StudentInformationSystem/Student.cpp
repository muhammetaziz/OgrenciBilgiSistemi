#include "Student.h"
#include <iostream>
using namespace std;


Student::Student(int Id = 0, string Name = "No Data", int exam1 = 0, int exam2 = 0, int finalExam = 0, double avarageScore = 0.0) {
	this->Id = Id;
	this->Name = Name;
	this->exam1 = exam1;
	this->exam2 = exam2;
	this->finalExam = finalExam;
	this->avarageScore = avarageScore;
}
Student::~Student() {}

void Student::setId(int Id) { this->Id = Id; }
void Student::setName(string Name) { this->Name = Name; }
void Student::setScore1(int exam1) { this->exam1 = exam1; }
void Student::setScore2(int exam2) { this->exam2 = exam2; }
void Student::setScore3(int finalExam) { this->finalExam = finalExam; }


void Student::calculateAvarage() {
	cout << "Vize 1 Notunu Giriniz: " << endl;
	cin >> exam1;
	cout << "Vize 2 Notunu Giriniz: " << endl;
	cin >> exam2;
	cout << "Final Notunu Giriniz: " << endl;
	cin >> finalExam;
	double ortalama = ((exam1 * 0.2) + (exam2 * 0.2) + (finalExam * 0.6));
	this->avarageScore = ortalama;
}
int Student::getId() { return Id; }
string Student::getName() { return Name; }
int Student::getScore() { return exam1; }
void Student::printAllMember() {
	cout << "Id: " << Id << ",  Isim: " << Name << ",  Vize 1: " << exam1 << ",  Vize 2: " << exam2 << ", Final: " << finalExam << ", Ortalama: " << avarageScore << endl;
}
