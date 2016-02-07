#include <iostream>

int main()
{
	char name[50];
	char quest[80];
	char velocity[80];
	
	std::cout << "What is your name? ";
	std::cin.getline(name, sizeof(name)-1);
	
	std::cout << "What is your quest? ";
	std::cin.getline(quest, sizeof(quest)-1);
	
	std::cout << "What is the velocity of an unladen swallow? ";
	std::cin.getline(velocity, sizeof(velocity)-1);
	
	std::cout << "Name: " << name << "\n";
	std::cout << "Quest: " << quest << "\n";
	std::cout << "Velocity: " << velocity << "\n";
	
	return 0;
}
