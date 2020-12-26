#include <iostream>
#include "namespace.hh"

int n,q;

double q_w;
int n_w;
int steps;

void test_root(double q, int n, int steps){
	double a, a_n;
	a = power::root_iterative(q, n, steps);
	a_n = power::root_recursive(a,n);	
	std::cout << a <<std::endl;
	std::cout << q << " " << n << " " << steps << " " << q-a_n <<std::endl;
}
int main (){
	/*
	std::cout << "n = " << std::flush;
	std::cin >> n;

	std::cout << "q = " << std::flush;
	std::cin >> q;
	*/
	
	std::cout << "n_w = " << std::flush;
	std::cin >> n_w;

	std::cout << "q_w = " << std::flush;
	std::cin >> q_w;

	std::cout << "steps = " << std::flush;
	std::cin >> steps;
	
	//std::cout << power::iterative(q,n) <<std::endl;
	//std::cout << power::recursive(q,n) <<std::endl;
	//std::cout << power::naive(q,n) <<std::endl;
	//std::cout << power::root_iterative( q_w, n_w,  steps) <<std::endl;
	test_root(q_w, n_w, steps);
	
}