#include "fcpp.hh"

bool prim( int zahl){
	if(zahl==1){
		return false;
	}
	double wurzelVonZahl = sqrt(zahl);
	int i=1;
	while(i<=wurzelVonZahl){
		i++;
		if(zahl%i == 0){
			return false;
		}
	}
	return true;
}

int prim_anzahl_while(int untere, int obere){
	int j=0;
	int anzahl=0;
	while(untere+j<=obere){
		if(prim(untere+j))	{
			anzahl++;
		}
		j++;
	}
	return anzahl;
}

int prim_anzahl_for(int untere, int obere){
	int anzahl=0;
	for(int j=0;untere+j<=obere; j++){
		if(prim(untere+j))	{
			anzahl++;
		}
	}
	return anzahl;
}

int prim_anzahl_goto(int untere, int obere){
	int j=0;
	int anzahl=0;
	anfang:	if(untere+j>obere){ return anzahl;}

		if(prim(untere+j)==1)	{
			anzahl++;
		}
		j++;
	goto anfang;
}

int main(int argc, char** argv){ // Das man dem Programm seine obere und untere Schranke übergibt
	//print(prim(readarg_int(argc, argv, 1)));
	print(prim_anzahl_while(readarg_int(argc, argv, 1), readarg_int(argc, argv, 2)));
	print(prim_anzahl_for(readarg_int(argc, argv, 1), readarg_int(argc, argv, 2)));
	print(prim_anzahl_goto(readarg_int(argc, argv, 1), readarg_int(argc, argv, 2)));
}