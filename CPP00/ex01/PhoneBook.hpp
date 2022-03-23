#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class	PhoneBook
{
private:
	int		numOfContacts;
	int		counter;
	Contact	contacts[8];
public:
	void	add(void);
	void	search(void);
	void	exiting(void);
	void	setNumOfContacts(int num);
	int		getNumOfContacts(void);
	void	setCounter(int num);
	int		getCounter(void);
//	PhoneBook();
//	~PhoneBook();
};

# endif
