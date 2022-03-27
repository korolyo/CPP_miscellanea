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
	this->_name = name;
}

std::string	HumanB::getName(void)
{
	return (_name);
}

void	HumanB::setWeapon(Weapon weapon)
{
	this->_weapon = &weapon;
}

Weapon	HumanB::getWeapon(void)
{
	return (*_weapon);
}

void	HumanB::attack()
{
	std::cout << this->_name << " attacks with their ";
	std::cout << this->_weapon->getType() << std::endl;
}
