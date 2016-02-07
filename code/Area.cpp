#include <iostream>

int findArea(int length, int width);

int main()
{
	int length, width, area;
	
	std::cout << "How wide is your yard? ";
	std::cin >> width;
	std::cout << "How long is your yard? ";
	std::cin >> length;

	area = findArea(length, width);
	
	std::cout << "Your yard is: ";
	std::cout << area;
	std::cout << " square meters\n";

	return 0;
}

int findArea(int l, int w)
{
	return l * w ;
}
