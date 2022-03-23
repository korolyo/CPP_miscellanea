#include <iostream>
#include "Contact.hpp"

void	Contact::setIndex(int index_num)
{
	Contact::index = index_num;
}

void	Contact::setFirstName(std::string firstN)
{
	Contact::firstName = firstN;
}

void	Contact::setLastName(std::string lastN)
{
	Contact::lastName = lastN;
}

void	Contact::setNickname(std::string nickn)
{
	Contact::nickname = nickn;
}

void	Contact::setPhoneNumber(std::string phoneN)
{
	Contact::phoneNumber = phoneN;
}

void	Contact::setDarkestSecret(std::string secret)
{
	Contact::darkestSecret = secret;
}

int	Contact::getIndex(void)
{
	return (Contact::index);
}

std::string	Contact::getFirstName(void)
{
	return (Contact::firstName);
}

std::string	Contact::getLastName(void)
{
	return (Contact::lastName);
}

std::string	Contact::getNickname(void)
{
	return (Contact::nickname);
}

std::string	Contact::getPhoneNumber(void)
{
	return (Contact::phoneNumber);
}

std::string	Contact::getDarkestSecret(void)
{
	return (Contact::darkestSecret);
}
