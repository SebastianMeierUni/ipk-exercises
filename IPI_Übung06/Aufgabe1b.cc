#include "fcpp.hh"

main(int argc, char** argv){ //Man muss seine Basis dem Programm übergebn
	//interne Darstellung von a,b,c in float?
	float a;
	float b;
	float c;

	//Positive Basis und positiver Exponnent
	float basisHochExponent;

	int basis = readarg_int(argc, argv, 1);

	for(int i= 1; i<15; i++){
		basisHochExponent = pow(basis, i); 
		
		a=basisHochExponent;
		if(i%2==1){ //Exponent ungerade oder gerade
			b=basisHochExponent*-1;
		}else{
			b=basisHochExponent;
		}
		c=1/basisHochExponent;

		//Ausgabe
		print("Für n=" , i ,""  );
		print((a+b)+c);
		print(a+(b+c));
		print("");	
	}
	
}