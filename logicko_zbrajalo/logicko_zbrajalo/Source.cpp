#include <iostream>
#include <deque>

int zbroj (int a, int b)
{
	return a + b;
}

int main()
{
	int prviBroj = 1;
	int drugiBroj = 23;
	std::deque<int> binarniPrikaz1;
	std::deque<int> binarniPrikaz2;
	std::deque<int> zbrajanje;
	int i = 0;
	int a, b;
	bool test1,test2,carryOne = false;
	std::cout << "Prvi broj je: " << prviBroj << std::endl;
	std::cout << "Drugi broj je: " << drugiBroj << std::endl;
	std::cout << "Zbroj dva broja je: " << zbroj(prviBroj, drugiBroj) << std::endl;

	//pretvaranje u binarni prvog broja
	if (prviBroj > 0)
	{
		test1 = true;
	}
	for (i = 0; prviBroj > 0; ++i)
	{
		a = prviBroj % 2;
		binarniPrikaz1.push_front(a);
		prviBroj /= 2;
	}

	//pretvaranje u binarni drugog broja
	if (drugiBroj > 0)
	{
		test2 = true;
	}
	for (i = 0; drugiBroj > 0; ++i)
	{
		b = drugiBroj % 2;
		binarniPrikaz2.push_front(b);
		drugiBroj /= 2;
	}
	// idemo ih ispisati
	std::cout << "Prvi broj u binarnom prikazu je: " << std::endl;
	for (unsigned int j = 0; j < binarniPrikaz1.size(); ++j)
	{
		std::cout << binarniPrikaz1.at(j) << " ";
	}
	std::cout << " " << std::endl;
	std::cout << "Drugi broj u binarnom prikazu je: " << std::endl;
	for (unsigned int j = 0; j < binarniPrikaz2.size(); ++j)
	{
		std::cout << binarniPrikaz2.at(j) << " ";
	}
	std::cout << " " << std::endl;

	//da budemo sigurni da su iste velièine 
	binarniPrikaz1.shrink_to_fit();
	binarniPrikaz2.shrink_to_fit();

	if (binarniPrikaz1.size() < binarniPrikaz2.size())
	{
		for (unsigned int i = binarniPrikaz1.size(); i < binarniPrikaz2.size(); ++i)
		{
			binarniPrikaz1.push_front(0);
		}
	}
	else if (binarniPrikaz1.size() > binarniPrikaz2.size())
	{
		for (unsigned int i = binarniPrikaz2.size(); i < binarniPrikaz1.size(); ++i)
		{
			binarniPrikaz2.push_front(0);
		}
	}

	//stavimo nulu za pozitivni i jedinicu za negativni
	if (test1 == true)
	{
		binarniPrikaz1.push_front(0);
	}
	else
	{
		binarniPrikaz1.push_front(1);
	}
	if (test2 == true)
	{
		binarniPrikaz2.push_front(0);
	}
	else
	{
		binarniPrikaz2.push_front(1);
	}
	
	// idemo ih ispisati
	std::cout << "Prvi broj u binarnom prikazu je: " << std::endl;
	for (unsigned int j = 0; j < binarniPrikaz1.size(); ++j)
	{
		std::cout << binarniPrikaz1.at(j) << " ";
	}
	std::cout << " " << std::endl;
	std::cout << "Drugi broj u binarnom prikazu je: " << std::endl;
	for (unsigned int j = 0; j < binarniPrikaz2.size(); ++j)
	{
		std::cout << binarniPrikaz2.at(j) << " ";
	}
	std::cout << " " << std::endl;

	//napokon zbrajanje

	for (unsigned int i = binarniPrikaz1.size() - 1; i > 0; --i)
	{
		if (binarniPrikaz1.at(i) == 0 && binarniPrikaz2.at(i) == 0)
		{
			if (carryOne == true)
			{
				zbrajanje.push_front(1);
				carryOne = false;
			}
			else
			{
				zbrajanje.push_front(0);
				carryOne = false;
			}
		}
		else if((binarniPrikaz1.at(i) == 1 && binarniPrikaz2.at(i) == 0) || (binarniPrikaz1.at(i) == 0 && binarniPrikaz2.at(i) == 1))
		{
			if (carryOne == false)
			{
				zbrajanje.push_front(1);
				carryOne = false;
			}
			else
			{
				zbrajanje.push_front(0);
				carryOne = true;
			}
		}
		else if (binarniPrikaz1.at(i) == 1 && binarniPrikaz2.at(i) == 1)
		{
			zbrajanje.push_front(0);
			carryOne = true;
		}
	}
	std::cout << "Zbroj u binarnom prikazu je: " << std::endl;
	for (unsigned int j = 0; j < zbrajanje.size(); ++j)
	{
		std::cout << zbrajanje.at(j) << " ";
	}
	std::cout << " " << std::endl;
	std::cin.get();

	return 0;
}