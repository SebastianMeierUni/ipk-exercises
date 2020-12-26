#include <iostream>
#include <cmath>
#include <vector>
#include <cassert>
#include "polygon.hh"
#include <string>

int main (int argc, char** argv){
	
	std::vector<Point> p(4);
	
	//Punkte für das überschlagene Polygon (Sanduhr)
	Point punkte1 (0.0,0.0);
	p[0]=punkte1;

	Point punkte2 (4.0,0.0);
	p[1]=punkte2;

	Point punkte3 (2.0,2.0);
	p[2]=punkte3;

	Point punkte4 (2.0,-2.0);
	p[3]=punkte4;

	Polygon poly (p);
	
	//Ausgabe des Volumens
	std::cout <<"Das Volumen ist: " << poly.volume() << std::endl;

	//Beobachtung
	//Die gerichteten Teilflächen werden korrekt zusammenaddiert und ergeben 0.
}
