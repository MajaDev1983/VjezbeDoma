#include<iostream>
#include<string>
#include<stdio.h>

//6. Napisati program koji prima text i character od strane korisnika, te ispisuje taj text bez tog charactera.
int main()
{
	int i;
	char c;
	std::string str1, str2;
	std::cout << "Please enter some text: " << std::endl;
	std::getline(std::cin, str1);
	std::cout << "Tell me which character do you want to exclude: " << std::endl;
	std::cin >> c;

	i = str1.length() - 1;
	std::cout << "Same text, but without the chosen character: " << std::endl;
	
	for (size_t j = 0; j <= i; j++)
	{
		if (str1.at(j) != c)
		{
			str2.push_back(str1.at(j));
		}
	}
	
	std::cout << str2;
	std::cout << "\n";
	system("pause");
}