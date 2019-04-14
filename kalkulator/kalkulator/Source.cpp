#include <iostream>

int zbrajanje(int a, int b)
{
	return a + b;
}

int oduzimanje(int a, int b)
{
	return a - b;
}

int mnozenje(int a, int b)
{
	return a * b;
}

double dijeljenje(double a, double b)
{
	if (b != 0)
	{
		return a / b;
	}
	else
	{
		std::cout << "ERROR! Dijeljenje sa nulom nije definirano!" << std::endl;
		return 99999;
	}
}

//dodaj modulo

//function overload
void ispisZbrajanja(int a, int b)
{
	std::cout << a + b << std::endl;
}

//void ispisZbrajanja(int a, int b)
//{
//	std::cout << a + b << std::endl;
//}

//rekurzivna funkcija - funkcija koja poziva samu sebe
int rekurzija(int a)
{
	std::cout << a << std::endl;
	if (a == 20)
	{
		return a;
	}
	return rekurzija(a + 1);
}

//kalkulator
int main()
{
	int a, b;
	char operacija;
	char izlaz = 'n';
	std::cout << "Ovo je jednostavan kalkulator: " << std::endl;

	while ( izlaz == 'n')
	{
		std::cout << "Unesite dva broja" << std::endl;
		std::cin >> a;
		std::cin >> b;
		std::cout << "Unesite operaciju koju zelite napraviti na ta dva broja(+,-,*,/): " << std::endl;
		std::cin >> operacija;
		if (operacija == '+')
		{
			std::cout << zbrajanje(a, b) << std::endl;
		}
		else if (operacija == '+')
		{
			std::cout << zbrajanje(a, b) << std::endl;
		}
		else if (operacija == '-')
		{
			std::cout << oduzimanje(a, b) << std::endl;
		}
		else if (operacija == '*')
		{
			std::cout << mnozenje(a, b) << std::endl;
		}
		else if (operacija == '/')
		{
			std::cout << dijeljenje(a, b) << std::endl;
		}
		else
		{
			std::cout << "Nije unesena podrzana operacija!" << std::endl;
		}
		std::cout << "Zelite li izaci iz programa? [y/n]" << std::endl;
		std::cin >> izlaz;
	}
}