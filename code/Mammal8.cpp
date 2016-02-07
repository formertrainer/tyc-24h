// polymorphism

#include <iostream>

class Mammal
{
protected:
	int age;
public:
	Mammal():age(1)   { std::cout << "Mammal constructor...\n"; }
	~Mammal()         { std::cout << "Mammal destructor...\n"; }
	void move() const { std::cout << "Mammal, move one step\n"; }
	virtual void speak() const { std::cout << "Mammal speak!\n"; }
};

class Dog : public Mammal
{
public:
	Dog()  { std::cout << "Dog constructor...\n"; }
	~Dog() { std::cout << "Dog destructor...\n"; }
	void wagTail() const { std::cout << "Wagging tail...\n"; }
	void speak() const { std::cout << "Woof!\n"; }
	void move() const { std::cout << "Dog moves 5 steps...\n"; }
};

int main()
{
	Mammal *pDog = new Dog;
	pDog->move(); // pDog is a Mammal pointer. The mammal method gets called.
	pDog->speak(); // ... but the Mammal.speak() method is virtual, so the Dog.speak() method is used instead.
	return 0;
}
