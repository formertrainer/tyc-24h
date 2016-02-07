#include <iostream>
int main()
{
	int x=5, y=72, z=0;
	std::cout << "Before:\nx: " << x << " y: " << y;
	std::cout << " z: " << z << "\n\n";
	z = x = y + 13;
	std::cout << "After:\nx: " << x << " y: " << y;
	std::cout << " z: " << z << "\n\n";
	return 0;
}
