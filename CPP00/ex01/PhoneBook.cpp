#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook() {
	int i = -1;
	while (++i < 8)
		_contacts[i] = Contact();
}
PhoneBook::~PhoneBook() {
	int i = -1;
	while (++i < 8)
		_contacts[i].~Contact();
	std::cout << "Destructor phonebook\n";
}

void PhoneBook::add(void)
{
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	phoneNumber;
	std::string	darkestSecret;

	if (_counter == 8)
	{
		setCounter(0);
		_contacts[_counter].~Contact();
		_contacts[_counter] = Contact();
	}
	std::cout << "Please, enter the information of the new contact\n";
	std::cout << "First name:\n";
	std::cin >> firstName;
	_contacts[_counter].setFirstName(firstName);
	std::cout << "Last name:\n";
	std::cin >> lastName;
	_contacts[_counter].setLastName(lastName);
	std::cout << "Nickname:\n";
	std::cin >> nickname;
	_contacts[_counter].setNickname(nickname);
	std::cout << "Phone number:\n";
	std::cin >> phoneNumber;
	_contacts[_counter].setPhoneNumber(phoneNumber);
	std::cout << "And your darkest secret, please:\n";
	std::cin >> darkestSecret;
	_contacts[_counter].setDarkestSecret(darkestSecret);
	_contacts[_counter].setIndex(getCounter());
	if (getNumOfContacts() < 8)
		setNumOfContacts(getNumOfContacts() + 1);
	std::cout << "Contact " << _contacts[_counter].getNickname() << " sucessfully "
															"added..";
	std::cout << std::endl;
	setCounter(_counter + 1);
}

void	PhoneBook::printInfo()
{
	int	i = 0;

	while (i < getNumOfContacts())
	{
		unsigned long j = 10;
		std::cout << "|          " << _contacts[i].getIndex() << " |   ";
		while (--j > _contacts[i].getFirstName().length())
			std::cout << " ";
		std::cout << _contacts[i].getFirstName().substr(0, 8);
		if (_contacts[i].getFirstName().length() > 9)
			std::cout << ".";
		std::cout << " |  ";
		j = 10;
		while (--j > _contacts[i].getLastName().length())
			std::cout << " ";
		std::cout << _contacts[i].getLastName().substr(0, 8);
		if (_contacts[i].getLastName().length() > 9)
			std::cout << ".";
		std::cout << " |   ";
		j = 10;
		while (--j > _contacts[i].getNickname().length())
			std::cout << " ";
		std::cout << _contacts[i].getNickname().substr(0, 8);
		if (_contacts[i].getFirstName().length() > 9)
			std::cout << ".";
		std::cout << " |   ";
		std::cout << std::endl;
		i++;
	}
}

void PhoneBook::search(void)
{
	std::string	num;
	int 		i = 0;

	if (getNumOfContacts() == 0)
	{
		std::cout << "There are no contacts. ADD something.." << std::endl;
		return ;
	}
	std::cout << "+------------+-------------";
	std::cout << "+------------+-------------+" << std::endl;
	std::cout << "|   Index    |  First name ";
	std::cout << "|  Last name |  Nickname   |" << std::endl;
	std::cout << "+------------+-------------";
	std::cout << "+------------+-------------+" << std::endl;
	printInfo();
	std::cout << "+------------+-------------";
	std::cout << "+------------+-------------+" << std::endl;
	std::cout << "Pick the index, please" << std::endl;
	std::cin >> num;
	i = std::stoi(num);
	std::cout << "Id: " << _contacts[i].getIndex() << std::endl;
	std::cout << "Phone number: " << _contacts[i].getPhoneNumber() << std::endl;
	std::cout << "First name: " << _contacts[i].getFirstName() << std::endl;
	std::cout << "Last name: " << _contacts[i].getLastName() << std::endl;
	std::cout << "Nickname: " << _contacts[i].getNickname() << std::endl;
	std::cout << "Darkest secret: " << _contacts[i].getDarkestSecret() <<
	std::endl;
}

void PhoneBook::exiting(void)
{
	this->~PhoneBook();
	std::cout << "Exiting phonebook..\n";
	std::exit(1);
}

void	PhoneBook::setNumOfContacts(int num)
{
	_numOfContacts = num;
}

int		PhoneBook::getNumOfContacts(void)
{
	return (_numOfContacts);
}

void	PhoneBook::setCounter(int num)
{
	_counter = num;
}

int		PhoneBook::getCounter(void)
{
	return (_counter);
}

void	PhoneBook::setContacts(Contact contact, int index)
{
	contact = Contact();
	_contacts[index] = contact;
}

Contact	*PhoneBook::getContacts()
{
	return (_contacts);
}
