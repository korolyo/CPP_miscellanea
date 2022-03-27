#include <iostream>
#include "Weapon.hpp"

Weapon::~Weapon() { }
Weapon::Weapon() { }

void	Weapon::setType(std::string type)
{
	_type = type;
}

std::string	Weapon::getType(void)
{
	return (_type);
}

Weapon::Weapon(std::string type)
{
	setType(type);
}
