#include <iostream>

class Tricycle
{
public:
	Tricycle(int initialSpeed);
	~Tricycle();
	int getSpeed() const;
	void setSpeed(int speed);
	void pedal();
	void brake();
private:
	int speed;
};

Tricycle::Tricycle(int initialSpeed)
{
	setSpeed(initialSpeed);
}

Tricycle::~Tricycle()
{
}

int Tricycle::getSpeed() const
{
	return speed;
}

void Tricycle::setSpeed(int newSpeed)
{
	if (newSpeed >= 0)
    {
		speed = newSpeed;
	}
}

void Tricycle::pedal()
{
	setSpeed(speed+1);
	std::cout << "Pedaling; tricycle speed: " << getSpeed() << " kph\n";
}

void Tricycle::brake()
{
	setSpeed(speed - 1);
	std::cout << "Braking; tricycle speed " << getSpeed() << "kph\n";
}

int main()
{
	Tricycle wichita(7);
	wichita.pedal();
	wichita.pedal();
	wichita.pedal();
	wichita.brake();
	wichita.brake();
	wichita.brake();
	wichita.brake();
	return 0;
}
