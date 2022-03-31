#include "Zombie.hpp"

void	Zombie::setName(std::string name)
{
	_name = name;
}

std::string	Zombie::getName(void)
{
	return (_name);
}

void	Zombie::announce(void)
{
	std::cout << getName() << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << getName() << ":  Dead... Again.. Arhh.." << std::endl;
}
