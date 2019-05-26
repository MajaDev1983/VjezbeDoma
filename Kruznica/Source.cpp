#include<iostream>
#define PI 3.141592653589793f
// Napisati program koji trazi unos od korisnika za radius kruznice, te ispisati povrsinu kruznice
float area(float r)
{
	return (PI * r * r);
}

int main()
{
	float radiusf;
	std::cout << "This is the program that computes the area of a circle.\nPlease enter the circumference of a circle (in mm): " << std::endl;
	std::cin >> radiusf;
	std::cout << "The area of a circle is: " << std::endl;
	std::cout << area(radiusf) << " mm^2";

	std::cout << "\n";
	system("pause");
}