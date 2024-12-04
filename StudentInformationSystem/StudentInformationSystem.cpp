#include <iostream>
#include "Student.h"
#include <list>
#include <algorithm>
using namespace std;

void showMenu() {
	cout << endl;
	cout << "********************************************" << endl;
	cout << "****************** -MENU- ******************" << endl;
	cout << "********************************************" << endl;
	cout << endl;
	cout << "1- Add New Member" << endl;
	cout << "2- Show List" << endl;
	cout << "3- Remove Selected " << endl;
	cout << "4- Search Student" << endl;
	cout << "5- New exam input" << endl;
	cout << "6- Exit" << endl;
	cout << endl;
}
void addStudent(list<Student>* lst) {
	int id;
	string ad, soyad;
	int firstExam, secondExam, fExam;
	cout << "ID giriniz: " << endl;
	cin >> id;
	cout << "Isim giriniz: " << endl;
	cin >> ad;
	cout << "Vize 1 notunu giriniz: " << endl;
	cin >> firstExam;
	cout << "Vize 2 notunu giriniz: " << endl;
	cin >> secondExam;
	cout << "Final notunu giriniz: " << endl;
	cin >> fExam;
	double ortalama = ((firstExam * 0.2) + (secondExam * 0.2) + (fExam * 0.6));
	Student std(id, ad, firstExam, secondExam, fExam, ortalama);
	lst->push_back(std);
	cout << "Ogrenci bilgileri basarili bir sekilde eklendi." << endl;
}
void showList(list<Student>* lst) {
	cout << "---OGRENCI LİSTESİ---" << endl;
	list<Student>::iterator it;
	for (it = lst->begin(); it != lst->end(); it++)
	{
		it->printAllMember();
	}
}
void deleteStudent(list<Student>* lst) {
	cout << "---OGRENCI SILME---" << endl;
	bool found = false;
	int idNo;
	cout << "Silmek istediginiz ogrencinin ID numarasını giriniz." << endl;
	cin >> idNo;
	list<Student>::iterator it;
	for (it = lst->begin(); it != lst->end(); it++)
	{
		if (it->getId() == idNo)
		{
			lst->erase(it);
			cout << "Ogrenci kaydi basarili bir sekide silindi" << endl;
			break;
		}
	}if (!found)
	{
		cout << "Aranan ogrenci bulunamadi" << endl;
	}

}
void Search(list<Student>* lst) {
	cout << "---OGRENCI ARAMA---" << endl;
	bool found = false;
	int idNo;
	cout << "Aramak istediginiz ogrencinin ID numarasını giriniz." << endl;
	cin >> idNo;
	list<Student>::iterator it;
	for (it = lst->begin(); it != lst->end(); it++)
	{
		if (it->getId() == idNo)
		{
			it->printAllMember();
			found = true;
			break;
		}
	}
	if (!found)
	{
		cout << "Aranan ogrenci bulunamadi" << endl;
	}
}
void newExamScore(list<Student>* lst) {
	int idNo;
	bool found = false;
	cout << "Notunu Degistirmek istediginiz ogrenci ID sini giriniz." << endl;
	cin >> idNo;
	list<Student>::iterator  it;
	for (it = lst->begin(); it != lst->end(); it++)
	{
		if (it->getId() == idNo)
		{
			it->printAllMember();
			it->calculateAvarage();
			cout << "Notlar basariyla degistirildi." << endl;
			it->printAllMember();
		}
	}
	if (!found)
	{
		cout << "Aranan ogrenci bulunamadi" << endl;
	}
}

int main()
{
	list<Student>* studentList = new list<Student>();

	int secim = 0;
	do
	{
		showMenu();
		cout << "Make your choice:";
		cin >> secim;
		switch (secim)
		{
		case 1:
		{
			addStudent(studentList);
			break;
		}
		case 2:
		{
			showList(studentList);
			break;
		}
		case 3:
		{
			deleteStudent(studentList);
			break;
		}
		case 4:
		{
			Search(studentList);
			break;
		}
		case 5:
		{
			newExamScore(studentList);
			break;
		}
		default:
			cout << "You made the wrong choice" << endl;
			break;
		}
	} while (secim != 6);
}