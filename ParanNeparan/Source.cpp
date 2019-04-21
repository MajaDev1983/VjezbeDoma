#include<iostream>
#include<vector>

//7. Napisati program koji æe primiti vector brojeva, i ispisati korisniku koji brojevi su parni, a koji neparni

int main()
{
	int broj = 1;
	std::vector<int> brojevi;
	std::cout << "Enter as many integers you want (to end enter 0): " << std::endl;
	
	while (broj != 0)
	{
		std::cin >> broj;
		brojevi.push_back(broj);
	}
	
	for (size_t i = 0; i < brojevi.size(); i++)
	{
		if (brojevi.at(i) % 2 == 0)
		{
			std::cout << "Number " << brojevi.at(i) << " is even." << std::endl;
		}
		else
		{
			std::cout << "Number " << brojevi.at(i) << " is odd." << std::endl;
		}
	}
	
	std::cout << "\n";

	system("pause");
}