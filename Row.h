#ifndef ROW_H
#define ROW_H
#include "Seat.h"
#include <vector>
#include <iostream>

using namespace std;

class Row {
	private:
		char row;
		vector<Seat> seats;
	public:
		Row();
		Row(char r, vector<Seat> s);
		void reserve(unsigned s);
		void cancelRes(unsigned s, int rn);

		friend ostream& operator<<(ostream &, const Row&);
};
#endif