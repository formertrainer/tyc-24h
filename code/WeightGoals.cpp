#include <iostream>

int main()
{
	float goal[] = { 0.1, 0.25, 0.5, 0.75 };
	// equivalent to the code within comments:
/*
	float goal[4];
	goal[1] = 0.75;
	goal[2] = 0.5;
	goal[3] = 0.25;
*/
	float weight, target;
	
	std::cout << "Enter current weight: ";
	std::cin >> weight;
	std::cout << "Enter goal weight: ";
	std::cin >> target;
	
	for (int i=0; i<4; i++)
	{
		float loss = (weight - target) * goal[i];
		std::cout << "Goal " << i << ": ";
		std::cout  << weight - loss << '\n';
	}
	
	return 0;
}
