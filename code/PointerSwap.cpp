#include <iostream>

void swap(int *px, int *py);

int main()
{
	int x=5, y=10;
	
	std::cout << "Main, before swap, x: "<< x << " y: " << y << "\n";
	
	swap(&x,&y);
	
	std::cout << "Main, after swap, x: " << x << " y: " << y << "\n";
	
	return 0;
}

void swap (int *px, int *py)
{
	int temp;
	
	std::cout << "Swap, before swap, x: "<< *px << " y: " << *py << "\n";
	
	temp = *px;
	*px = *py;
	*py = temp;
	
	std::cout << "Swap, after swap, x: "<< *px << " y: " << *py << "\n";

}
	
	
