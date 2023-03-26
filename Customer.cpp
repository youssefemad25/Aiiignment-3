#include "Customer.h"
Customer::Customer() {
	MechanicID = 0;
}
void Customer::set_MechanicID(int) {
	cout << "Enter the mechanic id";
	cin >> MechanicID;
}
int Customer::get_MechanicID() {
	return MechanicID;
}
bool operator<(const Customer& c, const Customer &b) {
	
	if (c.app.hours < b.app.hours && c.app.min < b.app.min) {
		return true;
			
	}
}
bool operator>(const Customer& c, const Customer &b) {
	if (c.app.hours > b.app.hours && c.app.min > b.app.min) {
		return true;

	}

	}
bool operator==(const Customer& c, const Customer &b) {
	if (c.app.hours == b.app.hours && c.app.min == b.app.min) {
		return true;

	}

}
