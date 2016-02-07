// polymorphism at its best!
// Abstract Base Classes
// Pure Virtual Functions - with default implementation

#include <iostream>

// abstract base class: one of its methods is purely virtual (=0).
//  as such, no objects can be instanciated.
//  the class has to be derived.
class Shape
{
public:
	Shape() {}
	virtual ~Shape() {}
	virtual long getArea() = 0; // virtual
	virtual long getPerim() = 0;
	virtual void draw() = 0;
private:
};

void Shape::draw()
{
	std::cout << "Abstract drawing implementation\n";
}

class Circle : public Shape
{
private:
	int radius;
	int circumference;
public:
	Circle(int newRadius):radius(newRadius) {}
	~Circle() {}
    long getArea() { return 3 * radius * radius; }
    long getPerim() { return 6 * radius; }
    void draw();
};

void Circle::draw()
{
	std::cout << "Circle drawing implementation\n";
	Shape::draw(); // calling the base - yet virtual - base, shared code
}

class Rectangle : public Shape
{
private:
	int width;
	int length;
public:
	Rectangle(int newLen, int newWidth): length(newLen), width(newWidth) {}
	virtual ~Rectangle() {}
	long getArea() { return length * width; }
	long getPerim() {return 2 * length + 2 * width; }
	virtual int getLength() const { return length; }
	virtual int getWidth() const { return width; } // still virtual
	void draw();
};

void Rectangle::draw()
{
	for (int i = 0 ; i < length ; i++)
	{
		for (int j =0 ; j < width ; j++)
		{
			std::cout << "x ";
		}
		std::cout << "\n";
	}
	Shape::draw();
}

class Square : public Rectangle
{
public:
	Square(int len);
	Square(int len, int width); // WTF?
	~Square() {}
	long getPerim() { return 4 * getLength(); }
};

Square::Square(int newLen):
	Rectangle(newLen, newLen)
{}

Square::Square(int newLen, int newWidth):
	Rectangle(newLen, newWidth)
{
	if (getLength() != getWidth())
	{
		std::cout << "Not a square!\n";
	}
}

int main()
{
	int choice;
	bool fQuit = false;
	Shape * sp;
	
	while (1)
	{
		std::cout << "(1) Circle, (2) Rectangle, (3) Square, (4) Quit: ";
		std::cin >> choice;
		
		switch(choice)
		{
		case 1:
			sp = new Circle(5);
			break;
		case 2:
			sp = new Rectangle(4, 6);
			break;
		case 3:
			sp = new Square(5);
			break;
		default:
			fQuit = true;
			break;
		}
		if (fQuit)
			break;
		sp->draw();
		std::cout << "\n";
	}
	return 0;
}



	
	
