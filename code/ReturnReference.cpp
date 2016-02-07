#include <iostream>

enum ERR_CODE { SUCCESS, ERROR };

// original, square, cube - by references (not pointers)
ERR_CODE factor(int, int&, int&);

int main()
{
	int number, squared, cubed;
	ERR_CODE result;
	
	std::cout << "Enter a number (0 - 20): ";
	std::cin >> number;
	
	result = factor(number, squared, cubed);
	
	if (result == SUCCESS)
	{
		std::cout << "number: " << number << "\n";
		std::cout << "square: " << squared << "\n";
		std::cout << "cube:   " << cubed << "\n";
		return 0;
	}
	else
	{
		std::cout << "Error!\n";
		return 1;
	}

}

ERR_CODE factor(int n, int &rSquared, int &rCubed)
{
	if (n>20)
	{
		return ERROR;
	}
	else
	{
		rSquared = n*n;
		rCubed = rSquared*n;
		return SUCCESS;
	}
}

		
	
