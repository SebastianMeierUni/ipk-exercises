#include <iostream>

int number;

void collatz(int number){
	std::cout << "Die Number ist: " << number <<std::endl;
	if(number == 1 or number == 0 or number == -1 or number == -5 or number == -17)	{
		std::cout << "Die Number war schon: " << number <<std::endl;
	}else {
		bool istnichtergebnis = true;
		do{
			if(number%2 == 0) {
				number = number/2;
			}else {
				number = (number * 3) + 1;  
			}
			if(number == 1 or number == 0 or number == -1 or number == -5 or number == -17)	{
				istnichtergebnis = false;
			}
		}while(istnichtergebnis);
		std::cout << "Das Ergebnis ist " << number <<std::endl;
	}
}

int main(){
	std::cout << "number = " << std::flush;
	std::cin >> number;

	collatz(number);	
}
