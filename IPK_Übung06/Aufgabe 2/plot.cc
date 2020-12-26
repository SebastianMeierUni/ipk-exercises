#include "canvas.hh"
#include <iostream>
#include <cmath>
#include <algorithm>


int main(){
	int horPixels= 4000;
	int vertPixels=3000;
	int height=3;
	int width=4;
	
	Point p(0,0);

	Canvas Leinwand(p, width,height,horPixels,vertPixels);
	
	Point p2;

	for(int j = 0; j<vertPixels;j++){
		for(int i = 0; i<horPixels;i++){
			p2 = Leinwand.coord(i, j);
			Leinwand.setBrightness(i,j, std::max( 0.0 , 100.0 * ( sin(1.0/p2.x()) * sin(1.0/p2.y()) +1 ) ) );
		}
	}	
	Leinwand.write("Bild.pgm");
}