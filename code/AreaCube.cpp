#include <iostream>

int findArea(int length, int width = 20, int height = 12 );

int main()
{
	int length = 100 ;
	int width = 50 ;
	int height = 2;
	int area;
	
	area = findArea(length, width, height);
	std::cout << "First area: " << area << "\n";
	
	area = findArea(length, width);
	std::cout << "First area: " << area << "\n";
	
	area = findArea(length);
	std::cout << "First area: " << area << "\n";
	
	return 0;
}

// should be volume, not area. WTF.
int findArea(int length, int width, int height)
{
	return ( length * width * height);
}
