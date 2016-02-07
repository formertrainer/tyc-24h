// this is the real thing, as in, a real error.
// a base class method is going to be overriden, but since it exists in two versions,
// two versions are now unavailable to the derived class.
// That's either an oversight or an error OR because the derived class should never call
// that function: the base class function is therefore hidden on purpose.
// NB: gcc does NOT produce a warning, even with -Wall.

#include <iostream>

class Mammal
{
protected:
	int age;
	int weight;
public:
	void move() const { std::cout << "Mammal moves one step\n"; }
	void move(int distance) const { std::cout << "Mammal moves " << distance << " steps\n"; }
};

class Dog : public Mammal
{
public:
	void move() const { std::cout << "Dog moves 5 steps\n"; }
};

int main()
{
	Mammal bigAnimal;
	Dog fido;
	bigAnimal.move();
	bigAnimal.move(3);
	fido.move();
//	fido.move(4); // This cannot work, the base method is overriden.
	fido.Mammal::move(7); // UBER KLUDGE...
	return 0;
}
