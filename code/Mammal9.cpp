// more function polymorphism, with multiple objects.
// NB: this only works with pointers, not references.

#include <iostream>

class Mammal
{
protected:
	int age;
public:
	Mammal():age(1) {}
	~Mammal() {}
	virtual void speak() const { std::cout << "Mammal speak!\n"; }
};

class Dog : public Mammal
{
public:
	void speak() const { std::cout << "WOOF!\n"; }
};

class Cat : public Mammal
{
public:
	void speak() const { std::cout << "Meow();\n"; }
};

class Horse : public Mammal
{
public:
	void speak() const { std::cout << "Whinny!\n"; }
};

int main()
{
	Mammal* array[4];
	Mammal* ptr;
	int choice, i;
	for (i = 0; i < 4 ; i++)
	{
		std::cout << "(0) base, (1) dog, (2) cat, (3) horse: ";
		std::cin >> choice;
		switch (choice)
		{
		case 1:
			ptr = new Dog;
			break;
		case 2:
			ptr = new Cat;
			break;
		case 3:
			ptr = new Horse;
			break;
		default:
			ptr = new Mammal;
			break;
		}
		array[i] = ptr;
	}
	for ( i = 0; i < 4 ; i++ )
	{
		array[i]->speak();
	}
	return 0;
}	
	
