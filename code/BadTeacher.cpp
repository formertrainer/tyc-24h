#include <iostream>

int main()
{
	char grade;
	std::cout << "Enter your letter grade (ABCDF): ";
	std::cin >> grade;
	switch (grade)
	{
	case 'A':
		std::cout << "Finally!\n";
		break;
	case 'B':
		std::cout << "Do better you can.\n";
		break;
	case 'C':
		std::cout << "I'm disappointed!\n";
		break;
	case 'D':
		std::cout << "You are dumb.\n";
		break;
	case 'F':
		std::cout << "Get out!\n";
		break;
	default:
		std::cout << "That's not even a grade\n";
		break;
	}
	return 0;
}	
