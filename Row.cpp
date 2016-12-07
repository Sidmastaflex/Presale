#include "Row.h"

using namespace std;

Row::Row(){
	row = 'a';
	seats = vector<Seat>(1);
}

Row::Row(char r, vector<Seat> s) {
	row = r;
	seats = s;
}

int Row::reserve(int s) { 
	seats.at(s).reserve();
	return seats.at(s).getResNum(); 
}

void Row::cancelRes(int s) { seats.at(s).cancel(); }