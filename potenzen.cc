#include <iostream>
#include <namespace.cc>

int n,q;


int main (){
	std::cout << "n = " << std::flush;
	std::cin >> n;

	std::cout << "q = " << std::flush;
	std::cin >> q;
	
	std::cout << power::iterative(q,n) <<std::endl;
	//std::cout << power::recursive(q,n) <<std::endl;
}