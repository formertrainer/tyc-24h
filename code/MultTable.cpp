#include <iostream>

int main()
{
	int number;
	std::cout << "Enter a number: ";
	std::cin >> number;
	
	std::cout << "First 10 Multiples of " << number << ": ";
	
	for (int counter = 1 ; counter < 11 ; counter++)
	{
		std::cout << number * counter << " ";
	}
	std::cout << "\n";
	
	return 0;
}

