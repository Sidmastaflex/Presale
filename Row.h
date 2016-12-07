#ifndef ROW_H
#define ROW_H
#include "Seat.h"
#include <vector>

using namespace std;

class Row {
	private:
		char row;
		vector<Seat> seats;
	public:
		Row();
		Row(char r, vector<Seat> s);
		int reserve(int s);
		void cancelRes(int s);
};
#endif