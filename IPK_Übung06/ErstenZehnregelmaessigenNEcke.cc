#include <iostream>
#include <cmath>
#include <vector>
#include <cassert>
#include "polygon.hh"
#include "point.hh"

int main (int argc, char** argv){
	int n_Eck= 7;

	const double pi = M_PI;

	//a ist der Flächeninhalt, der mit der Formel berechnet wurde.
	double a = (n_Eck/2) * sin((2*pi)/n_Eck);	
	
	//Es wird ein Vektor aus Punkten erstellt	
	std::vector<Point> points(n_Eck);

	//In der Schleife werden dem Vektor aus Punkten "points" an der Ecke i seine x,y Koordinaten berechnet und initialisiert
	for(int i=0; i<n_Eck; i++){ 
		Point p(    cos( (static_cast<double>(i)/n_Eck)*2*pi)  , sin( (static_cast<double>(i)/n_Eck)*2*pi ) );
		points[i]=p;
	}

	Polygon poly (points);

	//Ausgabe
	std::cout << "Mit der Formel: " <<  a << std::endl;
	std::cout << "Mit unserem Programm: " << poly.volume() << std::endl;

	//Beobachtung
	//Scheinbar ist die Volumenberechnung für gerade n nicht genau.
}