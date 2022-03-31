#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class	Zombie
{
public:
	~Zombie();

	void		setName(std::string name);
	std::string	getName();

	void		announce(void);

private:
	std::string	_name;

};

Zombie*	zombieHorde(int N, std::string name);

# endif
