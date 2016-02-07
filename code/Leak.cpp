#include <iostream>

class SimpleCat
{
public:
	SimpleCat (int age, int weight);
	~SimpleCat(){}
	int GetAge() { return itsAge; }
	int GetWeight() { return itsWeight; }
private:
	int itsAge;
	int itsWeight;
};

SimpleCat::SimpleCat(int age, int weight):
itsAge(age), itsWeight(weight){}

SimpleCat & TheFunction();

int main()
{
	SimpleCat &rCat = TheFunction();
	int age = rCat.GetAge();
	std::cout << "rCat is " << age << " years old.\n";
	std::cout << "&rCat: " << &rCat << "\n";
	
	SimpleCat *pCat = &rCat;
	delete pCat;
	age = 0;
	std::cout << "&rCat: " << &rCat << "\n"; // ouch.
	age = rCat.GetAge(); // behaviour is undefined
	std::cout << "rCat is " << age << " years old.\n";	// still 0.
	return 0;
}

SimpleCat &TheFunction()
{
	SimpleCat *pFrisky = new SimpleCat (5,9);
	std::cout << "pFrisky: " << pFrisky << "\n";
	return *pFrisky; // returns a dereferenced pointer e.g. the object itself
}

