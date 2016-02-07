#include <iostream>

class SimpleCat
{
private:
	int *itsAge;
	int *itsWeight;
public:
	SimpleCat();
	~SimpleCat();
	int GetAge() const { return *itsAge; }
	int GetWeight() const { return *itsWeight; }
	void SetAge(int age) { *itsAge = age; }
	void SetWeight(int weight) { *itsWeight = weight; }
};

SimpleCat::SimpleCat()
{
	itsAge = new int(2);
	itsWeight = new int(5);
}

SimpleCat::~SimpleCat()
{
	delete itsAge;
	delete itsWeight;
}

int main()
{
	SimpleCat *Frisky = new SimpleCat;
	std::cout << "Frisky is " << Frisky->GetAge() << " years old\n";
	
	Frisky->SetAge(5);
	std::cout << "Frisky is " << Frisky->GetAge() << " years old\n";
	
	delete Frisky;
	return 0;
}
