#include <iostream>

float convert(float);

int main()
{
	float fahrenheit, celsius;
	
	std::cout << "Enter value in F: ";
	std::cin >> fahrenheit;
	celsius = convert(fahrenheit);
	std::cout << "Value in C: " << celsius << "\n";
	return 0;
}

float convert(float fh)
{
	float cel;
	cel = (( fh - 32 ) * 5 ) / 9;
	return cel;
}
