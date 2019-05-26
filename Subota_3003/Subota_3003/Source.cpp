#include <iostream>
#include <deque>



int main()
{
	int userEntry;

	std::cout << "Unesite broj: ";
	std::cin >> userEntry;

	std::cout << "Uneseni broj je: " << userEntry << std::endl;
	//std::cin.ignore(1000);

	std::cout << "Drugi unos broja je " << userEntry << std::endl;
	std::cin >> userEntry;

	//Napraviti program koji od korisnika zahtjeva unos 3 integer tipa podataka, te onda ispituje onoga koji je najveæi te ga ispisuje u konzoli
	int unos1, unos2, unos3;
	std::cout << "Unesite 3 broja: ";
	std::cin >> unos1;
	std::cin >> unos2;
	std::cin >> unos3;

	if (unos1 > unos2 && unos1 > unos3)
	{
		std::cout << "Najveæi broj je: " << unos1 << std::endl;
	}
	else if (unos2 > unos1 && unos2 > unos3)
	{
		std::cout << "Najveæi broj je: " << unos2 << std::endl;
	}
	else if (unos3 > unos1 && unos3 > unos2)
	{
		std::cout << "Najveæi broj je: " << unos3 << std::endl;
	}

	//napraviti jednostavan kalkulator

	system("pause");
}