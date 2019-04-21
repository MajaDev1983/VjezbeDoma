#include<iostream>

//5. Napisati program koji prima unos 3 broja koji ce simulirati kuteve.Ispisati korisniku jel moguce da se napravi trokut od tih kuteva.

int main()
{
	float kut1f, kut2f, kut3f;
	std::cout << "Let's see if you know your triangles. \n Please enter three numbers, one by one, that represent the degrees of angles in that triangle:" << std::endl;
	std::cin >> kut1f;
	std::cin >> kut2f;
	std::cin >> kut3f;

	if (kut1f + kut2f + kut3f == 180)
	{
		std::cout << "You can make a triangle!" << std::endl;
	}
	else
	{
		std::cout << "You cannot make a triangle, you fool!" << std::endl;
	}

	system("pause");
}