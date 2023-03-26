#include "Person.h"
class Customer: public Person
{
public:
	Customer();
	Appointment app;
	void set_MechanicID(int);
	int get_MechanicID();
	bool operator<(const Customer& c);
	bool operator>(const Customer& c);
	bool operator==(const Customer& c);


private:
	int MechanicID ;
};

