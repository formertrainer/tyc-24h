// this is the real thing: operator overloading.

#include <iostream>

class Counter
{
private:
	int value;
public:
	Counter();
	Counter(int initialValue);
	~Counter() {};
	int getValue() const { return value; };
	void setValue(int newValue) { value = newValue; };
	const Counter& operator++();   //prefix
	const Counter operator++(int); //postfix
	Counter operator+(const Counter&);
	Counter operator-(const Counter&);
	operator int();
};

Counter::Counter():
value(0) // it is better/faster to initialize values here than within braces  
{}

Counter::Counter(int initialValue):
value(initialValue)
{}

const Counter& Counter::operator++() // prefix
{
	++value;
	return *this; // 'this' is a pointer, '*this" dereferences the pointer.
}

const Counter Counter::operator++(int) // postfix
{
	Counter temp(*this);
	++value;
	return temp;
}

Counter::operator int()
{
	return value;
}

// two operands: the object whose method is called, and the parameter.
Counter Counter::operator+(const Counter &rhs)
{
	return Counter(value + rhs.getValue());
}

Counter Counter::operator-(const Counter &rhs)
{
	return Counter(value - rhs.getValue());
}

int main()
{

	std::cout << "operators ++i and i++\n";
	Counter c;
	std::cout << "c is " << c.getValue() << "\n";
	++c;
	std::cout << "c is " << c.getValue() << "\n";
	++c;
	std::cout << "c is " << c.getValue() << "\n";
	Counter a = ++c; 
	std::cout << "a is " << a.getValue() << "\n";
	std::cout << "c is " << c.getValue() << "\n";
	a = c++; 
	std::cout << "a is " << a.getValue() << "\n";
	std::cout << "c is " << c.getValue() << "\n";

	std::cout << "operator +\n";
	Counter alpha(4), beta(7), gamma;
	gamma = alpha + beta;
	std::cout << "alpha: " << alpha.getValue() << "\n";
	std::cout << "beta: "  << beta.getValue() << "\n";
	std::cout << "gamma: " << gamma.getValue() << "\n";

	std::cout << "operator -\n";
	Counter zeta = gamma - beta;
	std::cout << "zeta: " << zeta.getValue() << "\n";	
	
	std::cout << "operator int\n";
	int i;
	i = gamma;
	std::cout << "i: " << i << "\n";

	return 0;
}
