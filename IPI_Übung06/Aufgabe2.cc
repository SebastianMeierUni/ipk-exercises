#include "fcpp.hh"

	float zins(float z, int n){
		float ergebnis=1;
		
		if(n<0){
			return 0;
		}else if(n==0){
			return 1;
		}else{
			for(int i=0; i<n;i++){
				ergebnis = ergebnis*(1+(z/n));;
			}
			return ergebnis;
		}
			
	}
	
	double zins(double z, int n){
		double ergebnis=1;
		
		if(n<0){
			return 0;
		}else if(n==0){
			return 1;
		}else{
			for(int i=0; i<n;i++){
				ergebnis = ergebnis*(1+(z/n));;
			}
			return ergebnis;
		}
			
	}	
	
main(int argc, char** argv){ //z und n müssen dem Programm übergegeben werden
	//Einlesen von n
	int n=readarg_int(argc,argv,2);
	
	//Berechnung von (1 + z/n)^n für float und double
	float fzins = zins( (float) readarg_double(argc,argv,1) , n ) - 1;
	double dzins =  zins(readarg_double(argc,argv,1), n) - 1;
	
	//Ausgabe

	print("n: ",n,"");
	print("float Berechnung: ",fzins,"");
	print("Differenz von float und tatsächlichen Wert: ",  (exp((float) readarg_double(argc,argv,1))-1)-(fzins), "");
	print("Double Berechnung: ",dzins,"");
	print("Differenz von double und tatsächlichen Wert: ",  (exp(readarg_double(argc,argv,1))-1)-(dzins), "");

}