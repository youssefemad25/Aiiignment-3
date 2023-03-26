#include "Person.h"
#include"Customer.h"
class Mechanic :  public Customer
{
public:
	Mechanic();
	Appointment app1[4];
	bool IsAvailble(Customer c);
	void set_counter();
	int get_counter();
private:
	int counter;

};

