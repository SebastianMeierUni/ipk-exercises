#include <iostream>

	int number;
	unsigned long vorehrigeStelle=0;
	unsigned long derzeitigeStelle=1;
	unsigned long speicher;
	unsigned long ausgabe;

unsigned long fibonacci(int number){
	if(number == 1){
		return vorehrigeStelle;
	}else if(number == 2){
		std::cout << vorehrigeStelle <<std::endl;
		return derzeitigeStelle;
	}else{
		std::cout << vorehrigeStelle <<std::endl;
		std::cout << derzeitigeStelle <<std::endl;

		for(int i=2;i<number-1;i=i+1){
			speicher=derzeitigeStelle;
			derzeitigeStelle=derzeitigeStelle+vorehrigeStelle;
			vorehrigeStelle=speicher;
			std::cout << derzeitigeStelle <<std::endl;
		}
		return derzeitigeStelle + vorehrigeStelle;
	}
}

int main (){
	std::cout << "n = " << std::flush;
	std::cin >> number;
	ausgabe=fibonacci(number);
	std::cout << ausgabe <<std::endl;
	
}