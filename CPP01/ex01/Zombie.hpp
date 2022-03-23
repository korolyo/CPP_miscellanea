#ifndef CONTACT_HPP
# define CONTACT_HPP

class	Zombie
{
private:
	std::string	name;

public:
	void		setName(std::string name);
	std::string	getName();
	void		announce(void);
	~Zombie();
};

Zombie*	zombieHorde(int N, std::string name);

# endif
