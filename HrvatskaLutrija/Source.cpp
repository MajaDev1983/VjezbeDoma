#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>

//Napisati program za hrvatsku lutriju.Korisnik radi unos od 7 brojeva u rasponu od 1 - 49, nakon toga program radi "izvlacenje" 
//tj.radnom generira 7 brojeva od 1 - 49, te ispisuje korisnikov unos, zatim izvucene brojeve te na kraju koliko pogodataka korisnik ima.

int main()
{
	std::vector<int> userNrs, lotteryNrs;
	int nr, lot;
	int a = 0;

	std::cout << "Please enter your 7 lucky numbers, in the range of 1 to 49, one by one: " << std::endl;
	for (size_t i = 0; i <= 6; i++)
	{
		std::cin >> nr;
		if (nr > 49 || nr < 1)
		{
			std::cout << "You fool! You cannot cheat the gods of fortune! " << std::endl;
			break;
		}
		else
		{
			userNrs.push_back(nr);
		}
	}
	
	//Lutrija poèinje
	std::cout << "The lottery numbers are: (drumroll)" << std::endl;

	srand(time(NULL));
	for (size_t i = 0; i <= 6; i++)
	{
		lot = rand() % 49 + 1;
		std::cout << "The " << i + 1 << ". is: " << lot << std::endl;
		lotteryNrs.push_back(lot);
	}

	std::cout << "Your numbers are: " << std::endl;
	for (size_t  i = 0 ;  i < userNrs.size(); i++)
	{
		std::cout << userNrs[i] << " ";
	}
	std::cout << "\n";

	for (size_t i = 0; i < userNrs.size(); i++)
	{
		for (size_t j = 0; j < lotteryNrs.size(); j++)
		{
			if (userNrs[i] == lotteryNrs[j])
			{
				a++;
			}
		}
	}

	std::cout << "You have " << a << " hits!" << std::endl;
	if (a >= 5)
	{
		std::cout << "If this was real, you could have won some money!" << std::endl;
	}
	else
	{
		std::cout << "The gods of fortune have not been with you today :(" << std::endl;
	}

	system("pause");
}