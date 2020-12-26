#include "fcpp.hh"

bool teiler(int teiler, int zahl){
	return zahl%teiler; //1==false 0==true
}

int teileranzahl(int index, int anzahl, int zahl){
	return cond(index==zahl , anzahl , cond( teiler(index,zahl)==1 , teileranzahl(index+1,anzahl,zahl) , teileranzahl(index+1 , anzahl+1 , zahl)));
}

int teilersumme (int index, int summe, int zahl){
	return cond(index == zahl, summe , cond( teiler(index,zahl)==1 , teilersumme(index+1, summe, zahl) , teilersumme(index+1 , summe+index , zahl))) ;
}

bool vollkommen (int zahl){
	return cond(zahl==teilersumme(1,0,zahl) , 0 , 1 ); 
}

int suchevollkommen (int zahl){
	return cond(vollkommen(zahl)==0, zahl , suchevollkommen(zahl + 1) );
}

int main(){
	print(suchevollkommen(497)); //496 //8128
} 