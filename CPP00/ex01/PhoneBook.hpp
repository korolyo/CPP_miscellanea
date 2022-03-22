#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class	PhoneBook
{
private:
	Contacts	contacts[8];
	int			num_of_contacts;
public:
	void	add();
	void	search();
	void	exit();
};

# endif
