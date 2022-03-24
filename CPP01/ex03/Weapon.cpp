#include <iostream>
#include "Weapon.hpp"

void	Weapon::setType(std::string type)
{
	Weapon::type = type;
}

std::string	Weapon::getType(void)
{
	return (Weapon::type);
}

Weapon::Weapon(std::string type)
{
	Weapon::setType(type);
}

Weapon::~Weapon() { }

Weapon::Weapon() { }
