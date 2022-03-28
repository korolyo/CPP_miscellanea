#include <iostream>
#include "HumanB.hpp"

#include "Weapon.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) { }
HumanB::~HumanB() { }
HumanB::HumanB() { }

void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

void	HumanB::attack()
{
	std::cout << _name << " attacks with their ";
	std::cout << *_weapon->getType() << std::endl;
}
