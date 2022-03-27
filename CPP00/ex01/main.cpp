#include <iostream>
#include "PhoneBook.hpp"

int main()
{
	std::string	str;

	PhoneBook	phoneBook = PhoneBook();
	while (1)
	{
		std::cout << "Enter one of three commands: ADD, SEARCH, EXIT" << std::endl;
		std::cin >> str;
		if (str.compare("ADD") == 0)
			phoneBook.add();
		else if (str.compare("SEARCH") == 0)
			phoneBook.search();
		else if (str.compare("EXIT") == 0)
			phoneBook.exiting();
	}
	return (0);
}
