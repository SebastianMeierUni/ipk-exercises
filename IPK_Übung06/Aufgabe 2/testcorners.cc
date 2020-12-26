#include "canvas.hh"
#include <iostream>
#include "point.hh"
#include <cassert>

int main (int argc, char** argv){

	int horPixels = 4000;
	int vertPixels = 3000;
	double height = 3;
	double width = 4;
	
	Canvas Leinwand(Point(0,0), width,height,horPixels,vertPixels);

	Point p2;
	Point mittel (0, 0);

	p2 = Leinwand.coord(0.0, 0.0);

	assert(p2.x() == (mittel.x()-width/2) and p2.y() == (mittel.y()-height/2)  );
	

	p2 = Leinwand.coord(horPixels  , 0);

	assert(p2.x() == mittel.x()+width/2 and p2.y() == mittel.y()-height/2);
	

	p2 = Leinwand.coord(0, vertPixels);

	assert(p2.x() == mittel.x()-width/2 and p2.y() == mittel.y()+height/2);
	

	p2 = Leinwand.coord(horPixels , vertPixels);

	assert(p2.x() == mittel.x()+width/2 and p2.y() == mittel.y()+height/2);
		
}