#include <iostream>
using namespace std;
class Person
{
public:
	struct Appointment {
		int hours = 0;
		int min = 0;
	};

	Person();
	void set_Name(string Namw);
	void set_ID(int ID);
	void set_hours(int hours);
	void set_Age(int Age);
	string get_Name();
	int get_ID();
	int get_Age();
	void printinfo();
protected:

	string Name;
	int ID;
	int Age;
};

