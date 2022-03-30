#include <iostream>
#include "includes/Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) { }
Weapon::~Weapon() { }
Weapon::Weapon() { }

void	Weapon::setType(std::string type)
{
	_type = type;
}

std::string	*Weapon::getType(void)
{
	return (&_type);
}
