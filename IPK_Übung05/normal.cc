#include <iostream>
#include "io.hh"
#include <vector>
#include "statistics.hh"

int main(){
	std::vector<double> result;
	result=normal_distribution(random_seed(), 20, 10.0, 20.0);

	//Ausgabe

	//Die Ausgabe des Mittelwerts
	std::cout << "Der Mittelwert ist " << mean(result) << std::endl;
	//Die Ausgabe des Median
	std::cout << "Der Median ist " << median(result) << std::endl;
	//Die Ausgabe des Moment
	std::cout << "Der Moment ist " << moment(result,2) << std::endl;
	//Die Ausgabe derStandardabweichung
	std::cout << "Die Standardabweichung ist " << standard_deviation(result) << std::endl;
	/*
	for (double entry : result){
		std::cout << entry << std::endl;
	}
	return 0;
	*/
}