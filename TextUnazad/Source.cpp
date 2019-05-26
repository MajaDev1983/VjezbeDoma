#include<iostream>
#include<string>
#include<stdio.h>

//4. Napisati program koji ce primiti unos texta i ispisati isti unazad.
int main()
{
	int i;
	std::string str;
	std::cout << "Please enter some text: " << std::endl;
	std::getline(std::cin, str);
	//std::cin >> str;
 
	i = str.length() - 1;
	std::cout << "Same text, only backwards: " << std::endl;
	while (i >= 0)
	{
		std::cout << str.at(i);
		--i;
	}
	
	std::cout << "\n";
	system("pause");
}