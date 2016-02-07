#include <iostream>

int main()
{
	typedef unsigned short USHORT;
	
//	const USHORT width=7, length=11;
	enum Size { width=7, length=11 }; // enum contains a list of constants
	
	USHORT area=width*length;
	
	std::cout << "Width: " << width << ", Length: " << length << ", Area: " << area << "\n";
	
	return 0;
}
