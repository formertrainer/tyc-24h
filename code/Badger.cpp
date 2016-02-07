#include <iostream>

int main()
{
	int badger;
	std::cout << "How many badgers? ";
	std::cin >> badger;
	
	do
	{
		std::cout << "Badger: " << badger << "\n" ;
		badger--;
	} while (badger > 0);
	
	std::cout << "\n";
	return 0;
}
