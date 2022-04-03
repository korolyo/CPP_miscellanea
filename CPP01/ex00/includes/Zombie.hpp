#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class	Zombie
{
private:
	std::string	_name;

public:
	void		setName(std::string name);
	std::string	getName();
	void		announce(void);
	~Zombie();
};
Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

# endif