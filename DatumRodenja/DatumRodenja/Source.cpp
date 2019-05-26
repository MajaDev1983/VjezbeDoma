//1. Napisati program koji prima string od 8 znakova za datum rodenj npr "20.02.93" i ispisuje slijedece :
//
//Dan rodenja : 20
//Mjesec rodenja : 02
//Godina rodenja : 93
//
#include <iostream>
#include <string>
#include <sstream>

int main()
{
	std::string myString;

	std::cout << "Unesite dan svog rodjenja u obliku dd.mm.gg: " << std::endl;
	std::cin >> myString;
	std::cout << "Dan rodjenja: " << myString.at(0) << myString.at(1) << std::endl;
	std::cout << "Mjesec rodjenja: " << myString.at(3) << myString.at(4) << std::endl;
	std::cout << "Godina rodjenja: " << myString.at(6) << myString.at(7) << std::endl;

	system("pause");

}