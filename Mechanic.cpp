#include "Mechanic.h"
Mechanic::Mechanic() {
	counter = 0;
}
bool Mechanic::IsAvailble(Customer c) {
	for (int i = 0; i < 4; i++) {
		if (app1[i].hours == c.app.hours && app1[i].min == c.app.min) {
			app1[i].hours = app1[i].min = 0;
			return true;
		}
	}return false;

}
void Mechanic::set_counter() {
	counter++;
}

int Mechanic::get_counter() {
	return counter;
}