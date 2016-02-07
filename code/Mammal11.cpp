#include <iostream>

class Mammal
{
protected:
	int age;
public:
	Mammal():age(1) { std::cout << "Mammal constructor\n"; }
	virtual ~Mammal() { std::cout << "Mammal destructor\n"; }
	Mammal (const Mammal &rhs);
	virtual void speak() const { std:: cout << "Mammal speak\n"; }
	virtual Mammal* clone() { return new Mammal(*this); } // Copy constructor with itself as ref.
	int getAge() const { return age; }
};

Mammal::Mammal(const Mammal &rhs):age(rhs.getage())
{
	std::cout << "Mammal copy constructor...\n";
}

class Dog : public Mammal
{
public:
	Dog() { std::cout << "Dog constructor...\n"; }
	virtual ~Dog() { std::cout << "Dog destructor...\n"; }
	Dog (const Dog &rhs);
	void speak() const { std::cout << "Woof!\n"; }
	virtual Mammal* clone() { return new Dog(*this); }

// CBA.
	
