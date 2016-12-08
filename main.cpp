#include "Row.h"
#include "Seat.h"
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
	srand(time(0));
	Seat s1;
	Seat s2;
	Seat s3;
	Seat s4;
	vector<Seat> seats;
	seats.push_back(s1);
	seats.push_back(s2);
	seats.push_back(s3);
	seats.push_back(s4);

	cout << "\n\nRN OF S1: " << s1.getResNum() << endl;
	cout << "RN OF S1: " << s1.getResNum() << endl;
	cout << "RN OF S1: " << s1.getResNum() << endl;
	cout << "RN OF S1: " << s1.getResNum() << endl;

	Row row1();
	Row row2('b', seats);

	cout << "\n" << row2 << endl;

	row2.reserve(1);
	row2.reserve(4);
	cout << "\nSeats 1 and 4 Reserved:  " << row2 << endl;

	row2.cancelRes(1, 12345);
	cout << "\nSeat 1 not canceled:  " << row2 << endl;

	row2.cancelRes(1, seats.at(0).getResNum());
	cout << "\nSeat 1 canceled:  " << row2 << endl;

	return 0;
}