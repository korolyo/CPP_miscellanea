#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

void PhoneBook::add(void)
{
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	phoneNumber;
	std::string	darkestSecret;

	if (PhoneBook::getNumOfContacts() <= 8)
		PhoneBook::setNumOfContacts(PhoneBook::getNumOfContacts() + 1);
	if (PhoneBook::getCounter() == 8)
		PhoneBook::setCounter(7);
	std::cout << "Please, enter the information of the new contact\n";
	std::cout << "First name:\n";
	std::cin >> firstName;
	PhoneBook::contacts[PhoneBook::getCounter()].setFirstName(firstName);
	std::cout << "Last name:\n";
	std::cin >> lastName;
	PhoneBook::contacts[PhoneBook::getCounter()].setLastName(lastName);
	std::cout << "Nickname:\n";
	std::cin >> nickname;
	PhoneBook::contacts[PhoneBook::getCounter()].setNickname(nickname);
	std::cout << "Phone number:\n";
	std::cin >> phoneNumber;
	PhoneBook::contacts[PhoneBook::getCounter()].setPhoneNumber(phoneNumber);
	std::cout << "And your darkest secret, please:\n";
	std::cin >> darkestSecret;
	PhoneBook::contacts[PhoneBook::getCounter()].setDarkestSecret(darkestSecret);
	PhoneBook::setCounter(PhoneBook::getCounter() + 1);
}

void PhoneBook::search(void)
{
	int i;

	i = 0;
	std::cout << "+------------+-------------";
	std::cout << "+------------+-------------+" << std::endl;
	std::cout << "|   Index    |  First name ";
	std::cout << "|  Last name |  Nickname   |" << std::endl;
	std::cout << "+------------+-------------";
	std::cout << "+------------+-------------+" << std::endl;
	while (i < PhoneBook::getNumOfContacts())
	{
		std::cout << "| " << contacts[i].getIndex() << " | ";
		std::cout << " " << contacts[i].getFirstName() << " | ";
		std::cout << " " << contacts[i].getLastName() << " | ";
		std::cout << " " << contacts[i].getNickname() << " |" << std::endl;
		i++;
	}
	std::cout << "+------------+-------------";
	std::cout << "+------------+-------------+" << std::endl;
	std::cout << "Pick the index, please" << std::endl;
	while (i == 0)
	{
		std::cin >> i;
		if (i > PhoneBook::getNumOfContacts())
		{
			std::cout << "Chose the right one (from 1, to ";
			std::cout << PhoneBook::getNumOfContacts() << "), please" << std::endl;
			i = 0;
		}
	}
	std::cout << "Id: " << contacts[i].getIndex() << std::endl;
	std::cout << "Phone number: " << contacts[i].getPhoneNumber() << std::endl;
	std::cout << "First name: " << contacts[i].getFirstName() << std::endl;
	std::cout << "Last name: " << contacts[i].getLastName() << std::endl;
	std::cout << "Nickname: " << contacts[i].getNickname() << std::endl;
	std::cout << "Darkest secret: " << contacts[i].getDarkestSecret() <<
	std::endl;
}

void PhoneBook::exiting(void)
{
//	PhoneBook::~PhoneBook();
	std::cout << "exit\n";
	std::exit(1);
}

//PhoneBook::~PhoneBook()
//{
//	delete PhoneBook::contacts;
//}

void	PhoneBook::setNumOfContacts(int num)
{
	PhoneBook::numOfContacts = num;
}

int		PhoneBook::getNumOfContacts(void)
{
	return (PhoneBook::numOfContacts);
}

void	PhoneBook::setCounter(int num)
{
	PhoneBook::counter = num;
}

int		PhoneBook::getCounter(void)
{
	return (PhoneBook::counter);
}
//
//PhoneBook::PhoneBook()
//{
//	setNumOfContacts(0);
//}