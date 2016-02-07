#include <iostream>

int main()
{
	int localVariable = 5;
	int *pLocal = &localVariable;
	int *pHeap = new int; // declaration and heap allocation in a single line!
	if (pHeap == NULL) // modern compilers throw an exception instead of returning a NULL pointer
	{
		std::cout << "Error no free memory!\n";
		return 1;
	}
	*pHeap = 7;
	std::cout << "localVariable: " << localVariable << "\n";
	std::cout << "*pLocal: " << *pLocal << "\n";
	std::cout << "*pHeap: " << *pHeap << "\n";
	std::cout << "pHeap: " << pHeap << "\n";
	delete pHeap;
	
	pHeap = new int;
	if (pHeap == NULL)
	{
		std::cout << "Error no free memory!\n";
		return 1;
	}
	*pHeap = 9;
	std::cout << "*pHeap: " << *pHeap << "\n";
	std::cout << "pHeap: " << pHeap << "\n";
	delete pHeap;
	return 0;
}
