// all mine, compiled on first try. Yeah me.
// activity 1, page 79.

#include <iostream>

float convertCtoF(float celsius);

int main()
{
	float celsiusT, fahrenheitT;
	
	std::cout << "Enter temperature in Celsius: ";
	std::cin >> celsiusT;
	fahrenheitT = convertCtoF(celsiusT);
	
	std::cout << "Converted to F: " << fahrenheitT << "\n";
	
	return 0;
}

float convertCtoF(float celsius)
{
	float fahrenheit;
	fahrenheit = ( ( celsius * 9 ) / 5 ) + 32 ;
	return fahrenheit;
}
