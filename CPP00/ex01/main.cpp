#include <iostream>
#include "PhoneBook.hpp"

int main()
{
	std::string	str;

	PhoneBook phoneBook;
	while (1)
	{
		std::cout << "Enter one of three commands: ADD, SEARCH, EXIT" << std::endl;
		std::cin >> str;
		if (str.compare("ADD") == 0)
			std::cout << "Adding" << std::endl;
		if (str.compare("SEARCH") == 0)
			std::cout << "Searching" << std::endl;
		if (str.compare("EXIT") == 0)
			phoneBook.exiting();
	}
	return (0);
}
