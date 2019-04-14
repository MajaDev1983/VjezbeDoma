#include <iostream>

int fibonacci(int a)
{
	if (a == 0 || a == 1)
	{
		return a;
	}
	return (fibonacci(a - 1) + fibonacci(a - 2));
}



int main()
{
	// zadatak pomocu rekurzije napraviti program koji æe ispisati prvih 20 brojeva fibonnacijevog niza
// da vidimo

	for (size_t i = 0; i < 20; i++)
	{
		std::cout << " " << fibonacci(i);
	};
}