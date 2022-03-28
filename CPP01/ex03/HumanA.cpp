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
	return (_name);
}

void	HumanA::attack()
{
	std::cout << _name << " attacks with their ";
	std::cout << *_weapon.getType() << std::endl;
}
