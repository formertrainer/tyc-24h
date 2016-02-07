#include <iostream>

int main()
{
	int myAge;
	int *pAge = NULL; // nullptr is C++0x (-std=gnu++11 || -std=gnu++0x)+. eq 0 or NULL. 
	
	myAge = 5;
	
	pAge = &myAge;
	
	std::cout << "myAge: " << myAge << "\n";
	std::cout << "*pAge: " << *pAge << "\n\n";
	
	std::cout << "*pAge = 7\n";
	*pAge = 7;
	std::cout << "*pAge: " << *pAge << "\n";
	std::cout << "myAge: " << myAge << "\n\n";
	
	std::cout << "myAge = 9\n";
	myAge =9;
	std::cout << "*pAge: " << *pAge << "\n";
	std::cout << "myAge: " << myAge << "\n\n";

	return 0;
}
