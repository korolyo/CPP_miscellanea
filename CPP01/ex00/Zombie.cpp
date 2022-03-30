#include <iostream>
#include "includes/Zombie.hpp"

void	Zombie::setName(std::string name)
{
	name = name;
}

std::string	Zombie::getName(void)
{
	return (name);
}

void	Zombie::announce(void)
{
	std::cout << getName() << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << getName() << ":  Dead... Again.. Arhh.." << std::endl;
}