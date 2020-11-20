#ifndef _Square_h
#define _Square_h
#include "Rectangle.h"

class Square : public Rectangle {
public:
	Square();
	Square(float a);
	void Input(istream& inDevice);
};


#endif
