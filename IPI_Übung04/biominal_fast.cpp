#include "fcpp.hh"

int mult_intervall(int a, int b){
	return cond(a==b,
			 b,
			 a*mult_intervall(a+1,b) 
	);
}

int biominal(int n, int k){
	return cond( n==k || (n>=0 and k==0),
						1,
						cond( 0<k and k<n,
							 mult_intervall(1, n)/(mult_intervall(1, k) * mult_intervall(1, n-k)),
							 0 
						) 
	);
}

int main (int argc, char** argv){
	return print(biominal(
				readarg_int(argc,argv,1),
				readarg_int(argc,argv,2)
			     )
	);
}