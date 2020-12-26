#include "io.hh"
#include <vector>
#include "statistics.hh"
#include <iostream>

int main(int argc, char** argv){
	std::vector<double> result;
	result=read_vector();
	
	//Ausgabe

	//Die Ausgabe des Mittelwerts
	std::cout << "Der Mittelwert ist " << mean(result) << std::endl;
	//Die Ausgabe des Median
	std::cout << "Der Median ist " << median(result) << std::endl;
	//Die Ausgabe des Moment
	std::cout << "Der Moment ist " << moment(result,2) << std::endl;
	//Die Ausgabe derStandardabweichung
	std::cout << "Die Standardabweichung ist " << standard_deviation(result) << std::endl;

}