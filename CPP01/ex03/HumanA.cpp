#include <iostream>
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{ }
HumanA::~HumanA() { }

void	HumanA::setName(std::string name)
{
	this->_name = name;
}

std::string	HumanA::getName(void)
{
	return (this->_name);
}

void	HumanA::attack()
{
	std::cout << _name << " attacks with their ";
	std::cout << this->_weapon.getType() << std::endl;
}

//void	HumanA::setWeapon(Weapon weapon)
//{
//	this->weapon = weapon;
//}
//
//Weapon	HumanA::getWeapon(void)
//{
//	return (weapon);
//}
