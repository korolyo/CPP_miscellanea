#include <iostream>

int main()
{
	std::string	str;

	std::cout << "Enter one of three commands: ADD, SEARCH, EXIT" << std::endl;
	std::cin >> str;
	if (str.compare("ADD") == 0)
		std::cout << "Adding" << std::endl;
	if (str.compare("SEARCH") == 0)
		std::cout << "Searching" << std::endl;
	if (str.compare("EXIT") == 0)
		std::cout << "Exiting" << std::endl;
}
