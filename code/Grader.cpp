#include <iostream>

int main()
{
	int grade;
	std::cout << "Enter a grade (1-100): ";
	std::cin >> grade;
	
	if (grade >= 70)
		std::cout << "Pass\n";
	else
		std::cout << "Fail\n";

	return 0;
}
