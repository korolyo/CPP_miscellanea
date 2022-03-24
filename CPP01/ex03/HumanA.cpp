#include <iostream>
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : name(name), weapon(weapon){ }
HumanA::~HumanA() { }

void	HumanA::setName(std::string name)
{
	HumanA::name = name;
}

std::string	HumanA::getName(void)
{
	return (HumanA::name);
}

void	HumanA::attack()
{
	std::cout << name << " attacks with their ";
	std::cout << this->weapon.getType() << std::endl;
}
