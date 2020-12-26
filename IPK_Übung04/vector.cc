#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>

void ausgabe (std::vector<double> v){
	for (long unsigned int i = 0; i<v.size();i++){
		std::cout << v[i] <<std::endl;
	}

}

std::pair<int, int> sortieren (std::vector<double> v){
	long unsigned int zaehler=0;
	do{
		double speicher;
		zaehler=0;
		for(long unsigned int i = 0; i<v.size()-1;i++){
			if(v[i] < v[i+1]){
				zaehler = zaehler + 1; 
			}else{
				speicher=v[i+1];
				v[i+1]=v[i];
				v[i]=speicher;
			}
		}
	}while(zaehler != v.size()-1);
	ausgabe(v);
	return std::make_pair(v[0],v[v.size()-1]);
}

std::vector<double> reversed(const std::vector<double>& v){
	std::vector<double> vc;
	vc.resize(v.size());
	for (long unsigned int i= 0;i<v.size(); i++ ){
		vc[v.size()-i-1] = v[i];
	}
	return vc;
}	

void vector_round(std::vector<double>& v){
	for (long unsigned int i= 0;i<v.size(); i++ ){
		v[i] = round(v[i]);
	}
}

void vector_reveresed(std::vector<double>& v){
	for(long unsigned int i= 0;i<v.size(); i++ ){
		if(v.size()-i-1 > i){
			std::swap( v[v.size()-i-1] , v[i] );
		}else{
			break;
		}
	}
}

int main(){
	/*
	//Aufgabe a
	std::vector<double> v1;
	ausgabe(v1);
	
	std::vector<double> v2(10);
	ausgabe(v2);

	std::vector<double> v3 = {{ 3, 8, 7, 5, 9, 2 }};
	ausgabe(v3);
	*/

	/*
	//Aufgabe b
	std::vector<double> v3 = {{ 3, 8, 7, 5, 9, 2 }};
	std::pair<int, int> p = sortieren(v3);
	std::cout << p.first << " "  << p.second <<std::endl;
	*/	

	/*
	//Aufagbe c
	std::vector<double> v3 = {{ 3, 8, 7, 5, 9, 2 }};
	ausgabe(v3);
	std::cout << " " <<std::endl;
	ausgabe(reversed(v3));
	*/
	
	/*
	//Aufgabe d
	std::vector<double> v3 = {{ 3.5, 8.123, 7.234, 5.799, 9.999, 2.15 }};
	std::vector<double>& v = v3;
	vector_round(v);
	ausgabe(v3);
	*/

	/*
	//Aufgabe e
	std::vector<double> v3 = {{ 3, 8, 7, 5, 9, 2 }};
	ausgabe(v3);
	vector_reveresed(v3);
	ausgabe(v3);
	*/	
}