#include <iostream>

void PhoneBook::add(void)
{
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;
	int 		index;

	index = 1
	Contact contact = Contact(index);
	std::cout << "Please, enter the information of the new contact\n";
	std::cout << "First name:\n";
	std::coutstd::cin >> contact.first_name;
	std::cout << "Last name:\n";
	std::coutstd::cin >> contact.last_name;
	std::cout << "Nickname:\n";
	std::coutstd::cin >> contact.nickname;
	std::cout << "Phone number:\n";
	std::coutstd::cin >> contact.phone_number;
	std::cout << "And your darkest secret, please:\n";
	std::coutstd::cin >> contact.darkest_secret;
}

void PhoneBook::search(void)
{
	int i;

	i = 0;
	std::cout << "|__Index___|_First_name_|_Last_name|_Nickname_|__Phone___|;
	std::cout << "_Dark_secret_|" << std::endl
	while (i < PhoneBook.num_of_contacts)
	{
		std::cout << "|     " << contact[i].index << " |";
		std::cout << " " << contact[i].first_name << " |";
		std::cout << " " << contact[i].last_name << " |";
		std::cout << " " << contact[i].nickname << " |";
		std::cout << " " << contact[i].phone_number << " |";
		std::cout << " " << contact[i].darkest_secret << " |" << std::endl;
		i++;
	}
}

void PhoneBook::exit(void)
{
	std::cout << "exit\n";
	exit(1);
}
