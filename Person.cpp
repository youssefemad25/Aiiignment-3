#include "Person.h"
using namespace std;
Person::Person() {
	Name=" ";
	ID = Age = 0;
}
void Person::set_Name(string) {
	cout << "Enter the person's name ";
		cin >> Name;
}
void Person::set_Age(int) {
	cout << "Enter the person's age ";
	cin >> Age;
}
void Person::set_ID(int) {
	cout << "Enter the person's id ";
	cin >> ID;
}
string Person::get_Name() {
	return Name;

}
int Person::get_ID() {
	return ID;
}
int Person::get_Age() {
	return Age;
}
void Person::printinfo() {
	cout << "The person's name is " << Name << endl << "The person's age is " << Age << endl << "The person's ID is " << ID << endl;

}
