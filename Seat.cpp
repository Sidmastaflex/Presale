#include "Seat.h"
#include <stdlib.h>
#include <iostream>

using namespace std;

Seat::Seat() {
	vacant = true;
	resNum = 111111 + rand() % 100000;
}

Seat::Seat(bool v) {
	vacant = v;
	resNum = 111111 + rand() % 100000;
}

ostream& operator<<(ostream& out, const Seat& rhs) {
	if(rhs.isVacant())
		out << " is vacant";
	else
		out << " is not vacant";

	return out;
}