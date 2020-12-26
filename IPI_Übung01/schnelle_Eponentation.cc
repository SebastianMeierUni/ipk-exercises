#include "fcpp.hh"
 
int multsignal(int x, int y){
	print("Weitere Multiplikation.");
	return x*y;
}

int quadrat(int x){	
	return multsignal(x,x);
}

bool ungerade(int zahl){
	return cond(zahl%2==0, true, false);
}

/*
int exponentation(int basis, int exponent){
	return cond(exponent<0, 0, cond(exponent==0, 1, cond( exponent%2==0, quadrat(exponentation(basis,exponent/2)) , basis * exponentation(basis,exponent-1)) ) );	
}
*/
int exponentation(int basis, int exponent){
	return cond(exponent<0, 0, cond(exponent==0, 1, cond( ungerade(exponent), quadrat(exponentation(basis,exponent/2)) , multsignal(basis, exponentation(basis,exponent-1)) ) ) );	
}

int main(){
	//return print(ungerade(-3));
	return print(exponentation(2,15));
}