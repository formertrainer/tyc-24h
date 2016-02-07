// This is the real thing: copying objects with heap-allocated properties.
#include <iostream>

class Tricycle
{
private:
	int *speed;
public:
	Tricycle(); // default constructor
	Tricycle(const Tricycle&); // (deep) copy constructor (book example)
	Tricycle(const Tricycle*); // (deep) copy constructor using pointers (mine)
	~Tricycle();	//destructor
	int getSpeed() const { return *speed; }
	void setSpeed(int newSpeed) { *speed = newSpeed; }
	void pedal();
	void brake();
};

Tricycle::Tricycle()
{
	speed = new int;
	*speed = 5;
}

Tricycle::Tricycle(const Tricycle& rhs)
{
	speed = new int;
	*speed = rhs.getSpeed();
}

Tricycle::Tricycle(const Tricycle* phs)
{
	speed = new int;
	*speed = phs->getSpeed(); // note -> syntax instead of "."
}


Tricycle::~Tricycle()
{
	delete speed;
	speed = NULL;
}

void Tricycle::pedal()
{
	setSpeed(*speed + 1);
	std::cout << "\nPedaling " << getSpeed() << " kph\n";
}

void Tricycle::brake()
{
	setSpeed(*speed - 1);
	std::cout << "\nBraking " << getSpeed() << " kph\n";
}

int main()
{
	std::cout << "Creating trike named wichita ...";
	Tricycle wichita;
	wichita.pedal();
	std::cout << "Creating trike named dallas ...\n";
	Tricycle dallas(wichita);
	std::cout << "Creating trike named sf ...\n";
	Tricycle sf(&wichita);
	std::cout << "wichita's speed: " << wichita.getSpeed() << "\n";
	std::cout << "dallas' speed: " << dallas.getSpeed() << "\n";
	std::cout << "setting wichita to 10...\n";
	wichita.setSpeed(10);
	std::cout << "setting sf to 8...\n";
	sf.setSpeed(8);
	std::cout << "wichita's speed: " << wichita.getSpeed() << "\n";
	std::cout << "dallas' speed: " << dallas.getSpeed() << "\n";
	std::cout << "sf' speed: " << sf.getSpeed() << "\n";
	return 0;
}
