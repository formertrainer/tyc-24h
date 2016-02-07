#include <iostream>

int main()
{
	unsigned short int myAge = 5, yourAge = 10;
	unsigned short int *pAge = &myAge ;
	
	std::cout << "myAge:\t" << myAge;
	std::cout << "\t\tyourAge:\t" << yourAge << "\n";
	std::cout << "&myAge:\t" << &myAge;
	std::cout << "\t&yourAge:\t" << &yourAge << "\n";
	
	std::cout << "pAge:\t" << pAge << "\n";
	std::cout << "*pAge:\t" << *pAge << "\n\n";
	
	pAge = &yourAge;
	
	std::cout << "myAge:\t" << myAge ;
	std::cout << "\t\tyourAge:\t" << yourAge << "\n";
	std::cout << "&myAge:\t" << &myAge;
	std::cout << "\t&yourAge:\t" << &yourAge << "\n";
	
	std::cout << "pAge:\t" << pAge << "\n";
	std::cout << "*pAge:\t" << *pAge << "\n\n";

	std::cout << "&pAge:\t" << &pAge << "\n\n";
	return 0;
}
