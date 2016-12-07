#include "Seat.h"
#include <stdlib.h>

using namespace std;

Seat::Seat() {
	seat = 1;
	vacant = true;
	resNum = rand() * 100000;
}
Seat::Seat(int s, bool v) {
	seat = s;
	vacant = v;
	resNum = rand() * 100000;
}