#include "Row.h"
#include "Seat.h"
#include <vector>
#include <iostream>

using namespace std;

Row::Row(){
	row = 'a';
	seats = vector<Seat>(1);
}

Row::Row(char r, vector<Seat> s) {
	row = r;
	seats = s;
}

void Row::reserve(unsigned s) { 
	if(s == 0) s = 1;

	seats.at(s - 1).reserve();
	cout << "\nSeat " << s << " has been reserved." << endl;
	cout << "Seat 1 Reservation Number is: ****" << seats.at(s - 1).getResNum() << "****" << endl;
}

void Row::cancelRes(unsigned s, int rn) { 
	if(s == 0) s = 1;
	if(seats.at(s - 1).getResNum() != rn) {
		cout << "\nError: Incorrect Reservation Number" << endl;
		return; 
	}

	seats.at(s - 1).cancel();
	cout << "\nReservation for Seat " << s << " has been canceled." << endl; 
}

ostream& operator<<(ostream & out, const Row& rhs) {
	for(unsigned i = 0; i < rhs.seats.size(); ++i)
		out << "| Seat " << (i + 1) << rhs.seats.at(i) << " | ";

	out << endl;
	return out;
}