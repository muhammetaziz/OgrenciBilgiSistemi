#include <iostream>
#include "Student.h"
#include <list>
using namespace std;

void showMenu() {
	cout << "********************************************" << endl;
	cout << "****************** -MENU- ******************" << endl;
	cout << "********************************************" << endl;
	cout << "1- Add New Member" << endl;
	cout << "2- Show List" << endl;
	cout << "3- Remove Selected " << endl;
	cout << "4- Search Student" << endl;
	cout << "5- Exit" << endl;
	cout << endl;
}

void addStudent(list<Student>* lst) {
	int id;
	string ad;
	int snot;
	cout << "ID giriniz: " << endl;
	cin >> id;
	cout << "İsim giriniz: " << endl;
	cin >> ad;
	cout << "Sinav notunu giriniz: " << endl;
	cin >> snot;
	Student std(id, ad, snot);
	lst->push_back(std);
	cout << "Ogrenci bilgileri basarili bir sekilde eklendi." << endl;
}
void showList(list<Student>* lst) {

}
void deleteStudent() {}
void Search() {}

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
			deleteStudent();
			break;
		}
		case 4:
		{
			Search();
			break;
		}
		default:
			cout << "You made the wrong choice" << endl;
			break;
		}

	} while (secim != 5);








}
