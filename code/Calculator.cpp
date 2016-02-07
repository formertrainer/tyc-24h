#include <iostream>

int add(int x, int y)
{
	std::cout << "Running calculator...\n";
	return (x+y);
}

int main()
{
	std::cout << "867+5098?\n" ;
	std::cout << "= " << add(867,5098) << "\n" ;
	return 0;
}
