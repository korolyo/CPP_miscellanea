#include <iostream>
#include "Weapon.hpp"

void	Zombie::setName(std::string name)
{
	Zombie::name = name;
}

std::string	Zombie::getName(void)
{
	return (Zombie::name);
}

void	Zombie::announce(void)
{
	std::cout << Zombie::getName() << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << Zombie::getName() << ":  Dead... Again.. Arhh.." << std::endl;
}