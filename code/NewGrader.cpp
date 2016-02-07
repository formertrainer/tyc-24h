#include <iostream>

int main()
{
	int grade;
	std::cout << "Enter a grade (1-100): ";
	std::cin >> grade;
	
	if (grade >= 70)
	{
		if (grade >= 90)
		{
			std::cout << "Pass with an A grade\n";
		}
		else if (grade >= 80)
		{
			std::cout << "Pass with a B grade\n";
		}
		else
		{
			std::cout << "Pass with a C grade\n";
		}
	}
	else
	{
		std::cout << "Fail\n";
	}

	return 0;
}
