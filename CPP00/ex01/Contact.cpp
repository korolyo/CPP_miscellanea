#include <iostream>
#include "includes/Contact.hpp"

Contact::Contact() { }
Contact::~Contact() {
	std::cout << "Destructor Contact\n";
}

void	Contact::setIndex(int index_num)
{
	_index = index_num;
}

void	Contact::setFirstName(std::string firstN)
{
	_firstName = firstN;
}

void	Contact::setLastName(std::string lastN)
{
	_lastName = lastN;
}

void	Contact::setNickname(std::string nickn)
{
	_nickname = nickn;
}

void	Contact::setPhoneNumber(std::string phoneN)
{
	_phoneNumber = phoneN;
}

void	Contact::setDarkestSecret(std::string secret)
{
	_darkestSecret = secret;
}

int	Contact::getIndex(void)
{
	return (_index);
}

std::string	Contact::getFirstName(void)
{
	return (_firstName);
}

std::string	Contact::getLastName(void)
{
	return (_lastName);
}

std::string	Contact::getNickname(void)
{
	return (_nickname);
}

std::string	Contact::getPhoneNumber(void)
{
	return (_phoneNumber);
}

std::string	Contact::getDarkestSecret(void)
{
	return (_darkestSecret);
}
