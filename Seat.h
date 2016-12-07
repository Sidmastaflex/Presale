#ifndef SEAT_H
#define SEAT_H
#include <stdlib.h>

using namespace std;

class Seat {
	private:
		int seat;
		bool vacant;
		int resNum;
	public:
		Seat();
		Seat(int s, bool v);
		bool isVacant() { return vacant; }
		int getResNum() { return resNum; }
		void reserve() { vacant = false; }
		void cancel() { vacant = true; }
}
#endif