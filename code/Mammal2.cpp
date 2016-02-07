#include <iostream>

enum BREED { YORKIE, CAIRN, DANDIE, SHETLAND, DOBERMAN, LAB };

class Mammal
{
protected:
	int age;
	int weight;
public:
	Mammal(): age(2), weight(5) {}
	~Mammal() {}
	
	int getAge() const { return age; }
	void setAge(int newAge) { age = newAge; }
	int getWeight() const { return weight; }
	void setWeight(int newWeight) { weight = newWeight; }

	void speak() const { std::cout << "Mammal sound\n"; }
	void sleep() const { std::cout << "Shhh. I'm sleeping.\n"; }
};

class Dog : public Mammal
{
private:
	BREED breed;
public:
	Dog(): breed(YORKIE) {}
	~Dog() {}
	BREED getBreed() const { return breed; }
	void setBreed(BREED newBreed) { breed = newBreed; }
	
	void wagTail() const { std::cout << "Tail wagging\n"; }
	void begForFood() const { std::cout << "Begging for food\n"; }
};

int main()
{
	Dog fido;
	fido.speak();
	fido.wagTail();
	std::cout << "Fido is " << fido.getAge() << " years old\n";
	return 0;
}
	
	
	
