#include <iostream>
#include <vector>
//Napisati program koji ce dati korisniku da unese jedan broj i ispisati 30 brojeva Fibonacijevog niza, pocevsi od broja koji je korisnik unio.

int main()
{
	int num;
	std::vector<int> fibbo;
	std::cout << "Please enter a number: " << std::endl;
	std::cin >> num;
	fibbo.push_back(num);
	fibbo.push_back(num);

	for (size_t i = 2; i <= 30; i++)
	{
		num = fibbo[i - 1] + fibbo[i - 2];
		fibbo.push_back(num);
	}
	
	std::cout << "The first 30 numbers, starting from your number, of Fibbonacci sequence are: " << std::endl;

	for (size_t i = 0; i < fibbo.size(); i++)
	{
		std::cout << fibbo[i] << " ";
	}

	std::cout << "\n";
	system("pause");
}