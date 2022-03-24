#include <iostream>
#include "HumanB.hpp"

#include "Weapon.hpp"

HumanB::HumanB() { }
HumanB::~HumanB() { }

HumanB::HumanB(std::string name)
{
	setName(name);
}

void	HumanB::setName(std::string name)
{
	this->name = name;
}

std::string	HumanB::getName(void)
{
	return (name);
}

void	HumanB::setWeapon(Weapon weapon)
{
	this->weapon = &weapon;
}

Weapon	HumanB::getWeapon(void)
{
	return (*weapon);
}

void	HumanB::attack()
{
	std::cout << this->name << " attacks with their ";
	std::cout << this->weapon->getType() << std::endl;
}
