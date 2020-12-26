#include <vector>
#include "statistics.hh"


#include <vector>
#include "statistics.hh"
#include <iostream>
#include <cmath>

int main(){
	std::vector<double> a;
	std::vector<double> b = {1,2,3,4};
	std::vector<double> c= {1,2,3,4,5};
	
	double wa=0;
	double wb=3;
	double wc=3;

	if(std::abs( wa- median(a)) < 1e-10){

		if(std::abs(wb - median(b)) < 1e-10){
			
			if(std::abs(wc - median(c)) < 1e-10){
				return 0;
			}else{
				return 1;
			}
		}else{
			return 2;		
		}
	}else{
		return 3;
	}
}