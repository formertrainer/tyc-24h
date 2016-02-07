#include <iostream>

void swap(int &rx, int &ry);

int main()
{
	int x=5, y=10;
	int &rx = x;
	int &ry = y;
	
	std::cout << "Main, before swap, x: "<< x << " y: " << y << "\n";
	
	swap(rx,ry);
	
	std::cout << "Main, after swap, x: " << x << " y: " << y << "\n";
	
	return 0;
}

void swap (int &rx, int &ry)
{
	int temp;
	
	std::cout << "Swap, before swap, x: "<< rx << " y: " << ry << "\n";
	
	temp = rx;
	rx = ry;
	ry = temp;
	
	std::cout << "Swap, after swap, x: "<< rx << " y: " << ry << "\n";

}
	
