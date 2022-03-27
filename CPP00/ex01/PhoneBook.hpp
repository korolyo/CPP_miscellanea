#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class	PhoneBook
{
private:
	int		_numOfContacts;
	int		_counter;
	Contact	_contacts[8];
public:
	void	setNumOfContacts(int num);
	int		getNumOfContacts(void);
	void	setCounter(int num);
	int		getCounter(void);
	void	setContacts(Contact contact, int index);
	Contact	*getContacts(void);

	void	add(void);
	void	search(void);
	void	exiting(void);
	void	printInfo();
	PhoneBook();
	PhoneBook(Contact contacts);
	~PhoneBook();
};

# endif
