// all mine, compiled on first try except for a missing ';'
// Yeah me.
// activity 2, page 79.

#include <iostream>

int average(int, int);
long average(long, long);
float average(float, float);

int main()
{
	int x = 17, y = 29;
	long xl = 987374, yl = 34987374;
	float xf = 87.93, yf = 32.45;

	std::cout << "Integer: ";
	std::cout << average(x, y) << "\n";
	std::cout << "Long: ";
	std::cout << average(xl, yl) << "\n";
	std::cout << "Float: ";
	std::cout << average(xf, yf) << "\n";
	
	return 0;
	
}

int average(int x, int y)
{
	return (x + y) / 2;
}

long average(long x, long y)
{
	return (x + y) / 2;
}

float average(float x, float y)
{
	return (x + y) / 2;
}

