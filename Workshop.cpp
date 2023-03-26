#include <iostream>
#include <string>
#include "Person.h"
#include "Customer.h"
#include "Mechanic.h"
#include "Queue.h"
using namespace std;
int main() {
	int n, n1;
	cout << "Enter the number of mechanics" << endl;
	cin >> n;
	cout << "Enter the number of customers" << endl;
	cin >> n1;
	Mechanic a, b, c, d;
	Customer a1, b1, c1, d1;
	string name_a, name_b, name_c, name_d, name_a1, name_b1, name_c1, name_d1;
	int age_a, age_b, age_c, age_d, id_a, id_b, id_c, id_d, age_a1, age_b1, age_c1, age_d1, id_a1, id_b1, id_c1, id_d1;

	if (n == 1) {
		a.set_Name(name_a);
		a.set_Age(age_a);
		a.set_ID(id_a);
		for (int i = 0; i < 4; i++)
		{
			cout << "Enter the time in Hours then the mins" << endl;
			cin >> a.app1[i].hours >> a.app1[i].min;

		}
	}
	else if (n == 2) {
		a.set_Name(name_a);
		a.set_Age(age_a);
		a.set_ID(id_a);
		for (int i = 0; i < 4; i++)
		{
			cout << "Enter the time in Hours then the mins" << endl;
			cin >> a.app1[i].hours >> a.app1[i].min;

		}
		b.set_Name(name_b);
		b.set_Age(age_b);
		b.set_ID(id_b);
		for (int i = 0; i < 4; i++)
		{
			cout << "Enter the time in Hours then the mins" << endl;
			cin >> b.app1[i].hours >> b.app1[i].min;

		}
	}
	else if (n == 3) {
		a.set_Name(name_a);
		a.set_Age(age_a);
		a.set_ID(id_a);
		for (int i = 0; i < 4; i++)
		{
			cout << "Enter the time in Hours then the mins" << endl;
			cin >> a.app1[i].hours >> a.app1[i].min;

		}
		b.set_Name(name_b);
		b.set_Age(age_b);
		b.set_ID(id_b);
		for (int i = 0; i < 4; i++)
		{
			cout << "Enter the time in Hours then the mins" << endl;
			cin >> b.app1[i].hours >> b.app1[i].min;

		}
		c.set_Name(name_c);
		c.set_Age(age_c);
		c.set_ID(id_c);
		for (int i = 0; i < 4; i++)
		{
			cout << "Enter the time in Hours then the mins" << endl;
			cin >> c.app1[i].hours >> c.app1[i].min;

		}
	}
	else
	{
		a.set_Name(name_a);
		a.set_Age(age_a);
		a.set_ID(id_a);
		for (int i = 0; i < 4; i++)
		{
			cout << "Enter the time in Hours then the mins" << endl;
			cin >> a.app1[i].hours >> a.app1[i].min;

		}
		b.set_Name(name_b);
		b.set_Age(age_b);
		b.set_ID(id_b);
		for (int i = 0; i < 4; i++)
		{
			cout << "Enter the time in Hours then the mins" << endl;
			cin >> b.app1[i].hours >> b.app1[i].min;

		}
		c.set_Name(name_c);
		c.set_Age(age_c);
		c.set_ID(id_c);
		for (int i = 0; i < 4; i++)
		{
			cout << "Enter the time in Hours then the mins" << endl;
			cin >> c.app1[i].hours >> c.app1[i].min;

		}
		d.set_Name(name_d);
		d.set_Age(age_d);
		d.set_ID(id_d);
		for (int i = 0; i < 4; i++)
		{
			cout << "Enter the time in Hours then the mins" << endl;
			cin >> d.app1[i].hours >> d.app1[i].min;

		}
	}
	if (n1 == 1) {
		a1.set_Name(name_a1);
		a1.set_Age(age_a1);
		a1.set_ID(id_a1);
		cout << "Enter the time in Hours then the mins" << endl;
		cin >> a1.app.hours >> a1.app.min;


	}
	else if (n1 == 2) {
		a1.set_Name(name_a1);
		a1.set_Age(age_a1);
		a1.set_ID(id_a1);
		cout << "Enter the time in Hours then the mins" << endl;
		cin >> a1.app.hours >> a1.app.min;
		b1.set_Name(name_b1);
		b1.set_Age(age_b1);
		b1.set_ID(id_b1);
		cout << "Enter the time in Hours then the mins" << endl;
		cin >> b1.app.hours >> b1.app.min;


	}
	else if (n1 == 3) {
		a1.set_Name(name_a1);
		a1.set_Age(age_a1);
		a1.set_ID(id_a1);
		cout << "Enter the time in Hours then the mins" << endl;
		cin >> a1.app.hours >> a1.app.min;
		b1.set_Name(name_b1);
		b1.set_Age(age_b1);
		b1.set_ID(id_b1); cout << "Enter the time in Hours then the mins" << endl;
		cin >> b1.app.hours >> b1.app.min;
		c1.set_Name(name_c1);
		c1.set_Age(age_c1);
		c1.set_ID(id_c1);
		cout << "Enter the time in Hours then the mins" << endl;
		cin >> c1.app.hours >> c1.app.min;
	}
	else
	{
		a1.set_Name(name_a1);
		a1.set_Age(age_a1);
		a1.set_ID(id_a1);
		cout << "Enter the time in Hours then the mins" << endl;
		cin >> a1.app.hours >> a1.app.min;
		b1.set_Name(name_b1);
		b1.set_Age(age_b1);
		b1.set_ID(id_b1);
		cout << "Enter the time in Hours then the mins" << endl;
		cin >> b1.app.hours >> b1.app.min;
		c1.set_Name(name_c1);
		c1.set_Age(age_c1);
		c1.set_ID(id_c1);
		cout << "Enter the time in Hours then the mins" << endl;
		cin >> c1.app.hours >> c1.app.min;
		d1.set_Name(name_d1);
		d1.set_Age(age_d1);
		d1.set_ID(id_d1);
		cout << "Enter the time in Hours then the mins" << endl;
		cin >> d1.app.hours >> d1.app.min;
	}
	if (a.IsAvailble(a1)) {
		cout << "Mr. " << a1.get_Name() << " should be assigned to " << a.get_Name() << " at " << a1.app.hours << ":" << a1.app.min << endl;
	}
	else if (b.IsAvailble(a1)) {
		cout << "Mr. " << a1.get_Name() << " should be assigned to " << b.get_Name() << " at " << a1.app.hours << ":" << a1.app.min << endl;
	}
	else if (c.IsAvailble(a1)) {
		cout << "Mr. " << a1.get_Name() << " should be assigned to " << c.get_Name() << " at " << a1.app.hours << ":" << a1.app.min << endl;
	}
	else if (d.IsAvailble(a1)) {
		cout << "Mr. " << a1.get_Name() << " should be assigned to " << d.get_Name() << " at " << a1.app.hours << ":" << a1.app.min << endl;
	}
	if (a.IsAvailble(b1)) {
		cout << "Mr. " << b1.get_Name() << " should be assigned to " << a.get_Name() << " at " << b1.app.hours << ":" << b1.app.min << endl;
	}
	else if (b.IsAvailble(b1)) {
		cout << "Mr. " << b1.get_Name() << " should be assigned to " << b.get_Name() << " at " << b1.app.hours << ":" << b1.app.min << endl;
	}
	else if (c.IsAvailble(b1)) {
		cout << "Mr. " << b1.get_Name() << " should be assigned to " << c.get_Name() << " at " << b1.app.hours << ":" << b1.app.min << endl;
	}
	else if (d.IsAvailble(b1)) {
		cout << "Mr. " << b1.get_Name() << " should be assigned to " << d.get_Name() << " at " << b1.app.hours << ":" << b1.app.min << endl;
	}
	if (a.IsAvailble(c1)) {
		cout << "Mr. " << c1.get_Name() << " should be assigned to " << a.get_Name() << " at " << c1.app.hours << ":" << c1.app.min << endl;
	}
	else if (b.IsAvailble(c1)) {
		cout << "Mr. " << c1.get_Name() << " should be assigned to " << b.get_Name() << " at " << c1.app.hours << ":" << c1.app.min << endl;
	}
	else if (c.IsAvailble(c1)) {
		cout << "Mr. " << c1.get_Name() << " should be assigned to " << c.get_Name() << " at " << c1.app.hours << ":" << c1.app.min << endl;
	}
	else if (d.IsAvailble(c1)) {
		cout << "Mr. " << c1.get_Name() << " should be assigned to " << d.get_Name() << " at " << c1.app.hours << ":" << c1.app.min << endl;
	}
	if (a.IsAvailble(d1)) {
		cout << "Mr. " << d1.get_Name() << " should be assigned to " << a.get_Name() << " at " << d1.app.hours << ":" << d1.app.min << endl;
	}
	else if (b.IsAvailble(d1)) {
		cout << "Mr. " << d1.get_Name() << " should be assigned to " << b.get_Name() << " at " << d1.app.hours << ":" << d1.app.min << endl;
	}
	else if (c.IsAvailble(d1)) {
		cout << "Mr. " << d1.get_Name() << " should be assigned to " << c.get_Name() << " at " << d1.app.hours << ":" << d1.app.min << endl;
	}
	else if (d.IsAvailble(d1)) {
		cout << "Mr. " << d1.get_Name() << " should be assigned to " << d.get_Name() << " at " << d1.app.hours << ":" << d1.app.min << endl;
	}
}