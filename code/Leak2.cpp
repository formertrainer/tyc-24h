#include <iostream>

class SimpleCat
{
public:
	SimpleCat (int age, int weight);
	~SimpleCat(){}
	const int GetAge() { return itsAge; }
	const int GetWeight() { return itsWeight; }
	int SetAge(int age) { itsAge = age; }
	int SetWeight(int weight) { itsWeight = weight; }	
private:
	int itsAge;
	int itsWeight;
};

SimpleCat::SimpleCat(int age, int weight):
itsAge(age), itsWeight(weight){}

void TheFunction(SimpleCat *pFrisky);

int main()
{
	SimpleCat *pCat = new SimpleCat (0,0);
	TheFunction(pCat);
	int age = pCat->GetAge();
	std::cout << "pCat is " << age << " years old.\n";
	delete pCat;
	return 0;
}

void TheFunction(SimpleCat *pFrisky)
{
	std::cout << "pFrisky: " << pFrisky << "\n";
	pFrisky->SetAge(5);
	pFrisky->SetWeight(9);	
}

