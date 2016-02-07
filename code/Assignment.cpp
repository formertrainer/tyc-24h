#include <iostream>

int main()
{
	int intOne;
	int &rSomeRef = intOne; // references MUST be initialized at creation time
	
	intOne = 5;
	
	std::cout << "intOne:\t" << intOne << "\n";
	std::cout << "rSomeRef:\t" << rSomeRef << "\n";
	std::cout << "&intOne:\t" << &intOne << "\n";
	std::cout << "&rSomeRef:\t" << &rSomeRef << "\n";
	
	int intTwo = 8;
	
	rSomeRef = intTwo;
	// confusing: references _always_ point to the original object.
	// so this should be read:
	// intOne = intTwo;
	std::cout << "intOne:\t" << intOne << "\n";
	std::cout << "intTwo:\t" << intTwo << "\n";
	std::cout << "rSomeRef:\t" << rSomeRef << "\n";
	std::cout << "&intOne:\t" << &intOne << "\n";
	std::cout << "&intTwo:\t" << &intTwo << "\n";
	std::cout << "&rSomeRef:\t" << &rSomeRef << "\n";
	return 0;
}
	
