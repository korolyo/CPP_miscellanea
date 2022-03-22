#include <iostream>

int main()
{
	std::string	str;

	PhoneBook phoneBook = new PhoneBook();
	std::cout << "Enter one of three commands: ADD, SEARCH, EXIT" << std::endl;
	std::cin >> str;
	while (1)
	{
		if (str.compare("ADD") == 0)
			std::cout << "Adding" << std::endl;
		if (str.compare("SEARCH") == 0)
			std::cout << "Searching" << std::endl;
		if (str.compare("EXIT") == 0)
		{
			std::cout << "Exiting" << std::endl;
			phoneBook.exiting();
		}
	}
	return (0);
}
