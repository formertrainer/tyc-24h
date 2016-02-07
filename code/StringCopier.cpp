#include <iostream>
#include <string.h>

// adapted from StringCopier.cpp
int main()
{
	const int meslength = 100;
	char message[meslength+1];
	char message2[meslength+1];

	std::cout << "What is your message? ";	
	std::cin.getline(message, sizeof(message));
	
	// target, source, len
	strncpy(message2, message, meslength);
	
	std::cout << "Your message is: " << message2 << std::endl ;
	
	return 0;
}
	
