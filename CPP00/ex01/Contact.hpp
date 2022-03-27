#ifndef CONTACT_HPP
# define CONTACT_HPP

class	Contact
{
private:
	int			_index;
	std::string	_firstName;
	std::string	_lastName;
	std::string _nickname;
	std::string	_phoneNumber;
	std::string	_darkestSecret;

public:
	void		setIndex(int index_num);
	void		setFirstName(std::string firstN);
	void		setLastName(std::string firstN);
	void		setNickname(std::string nickn);
	void		setPhoneNumber(std::string phoneN);
	void		setDarkestSecret(std::string secret);
	int			getIndex(void);
	std::string	getFirstName(void);
	std::string	getLastName(void);
	std::string	getNickname(void);
	std::string	getPhoneNumber(void);
	std::string	getDarkestSecret(void);
	Contact();
	~Contact();
};

# endif
