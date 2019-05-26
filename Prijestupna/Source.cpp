#include<iostream>
#include<vector>

// Napisati program koji uzima unos 2 godine, te ispisuje sve prijestupne godine u tom intervalu.

int main()
{
	int godina1, godina2;
	std::vector<int> prijestupna, nijePrijest;
	
	std::cout << "Lets see which are the leap years in an interval of years you enter.\nEnter the first year: " << std::endl;
	std::cin >> godina1;
	std::cout << "Enter the second year: " << std::endl;
	std::cin >> godina2;

	if (godina1 < godina2)
	{
		for (size_t i = godina1; i <= godina2; i++)
		{
			if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
			{
				std::cout << "Year " << i << " is a leap year." << std::endl;
			}
		}
	}
	else
	{
		for (size_t i = godina2; i <= godina1; i++)
		{
			if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
			{
				std::cout << "Year " << i << " is a leap year." << std::endl;
			}
		}
	}


	std::cout << "\n";

	system("pause");
}