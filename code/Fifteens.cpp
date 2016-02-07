#include <iostream>

int main()
{
	int counter = 0;
	int multiples = 0;
	
	while (multiples < 19)
	{
		counter++;
		if (counter % 15 != 0)
		{
			continue; // stops executing the instructions in the loop
		}
		std::cout << counter << " ";
		multiples++;
	}
	
	std::cout << "\n";
	return 0;
	
}
