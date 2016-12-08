#ifndef SEAT_H
#define SEAT_H
#include <stdlib.h>
#include <iostream>

using namespace std;

class Seat {
	private:
		bool vacant;
		int resNum;
	public:
		Seat();
		Seat(bool v);
		bool isVacant() const { return vacant; }
		int getResNum() const { return resNum; }
		void reserve() { vacant = false; }
		void cancel() { vacant = true; }

		friend ostream& operator<<(ostream&, const Seat&);
};
#endif