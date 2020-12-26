#include "fcpp.hh"

int biominal(int n, int k){
	return cond(n==k || (n>=0 and k==0),
			1,
			cond(0<k and k<n,
				 biominal(n-1,k-1) + biominal(n-1,k),
				 0 
			) 
		);
}

int main (int argc, char** argv){
	return print(
			biominal(
				 readarg_int(argc,argv,1),
				 readarg_int(argc,argv,2) 
			)
		);
}