#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "Default constructor called" << std::endl;
}
ScavTrap::~ScavTrap() {
	std::cout << "Default destructor called" << std::endl;
}
ScavTrap::ScavTrap( ScavTrap const &clap )
{
	std::cout << "Copy constructor called" << std::endl;
}

ScavTrap & ScavTrap::operator=( ScavTrap const &clap )
{
	std::cout << "Copy assignment operator called" << std::endl;
}

void	ScavTrap::attack( const std::string &target ) {

	std::cout << "ScavTrap " << _name << " attacks " << target << " causing ";
	std::cout << _damage << " hit points!" << std::endl;
}

void	ScavTrap::takeDamage( unsigned int amount ) {

	std::cout << "ScavTrap " << _name << " gets damage: ";
	std::cout << amount << " hit points!" << std::endl;
}

void	ScavTrap::beRepaired( unsigned int amount ) {

	std::cout << "ScavTrap " << _name << " repaired: +";
	std::cout << amount << " hp!" << std::endl;
	std::cout << "Now he has " << _hp << " hp!" << std::endl;
}
