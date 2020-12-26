#include "fcpp.hh"

float determinante_float(float a, float b, float c, float d){
	return a*d - b*c;
}

double determinante_double(double a, double b, double c, double d){
	return a*d - b*c;
}

main(int argc, char** argv){  //a,b,c,d müssen dem Programm übergeben werden
	print(determinante_float( (float) readarg_double(argc,argv,1), (float) readarg_double(argc,argv,2), (float) readarg_double(argc,argv,3), (float) readarg_double(argc,argv,4) ));
	print(determinante_double(readarg_double(argc,argv,1), readarg_double(argc,argv,2), readarg_double(argc,argv,3), readarg_double(argc,argv,4) ));
}