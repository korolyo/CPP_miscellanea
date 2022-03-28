#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "Default constructor called" << std::endl;
}
ClapTrap::~ClapTrap() {
	std::cout << "Default destructor called" << std::endl;
}
ClapTrap::ClapTrap( ClapTrap const &clap )
{
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap & ClapTrap::operator=( ClapTrap const &clap )
{
	std::cout << "Copy assignment operator called" << std::endl;
}

void	ClapTrap::attack( const std::string &target ) {

	std::cout << "ClapTrap " << _name << " attacks " << target << " causing ";
	std::cout << _damage << " hit points!" << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount ) {

	std::cout << "ClapTrap " << _name << " gets damage: ";
	std::cout << amount << " hit points!" << std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount ) {

	std::cout << "ClapTrap " << _name << " repaired: +";
	std::cout << amount << " hp!" << std::endl;
	std::cout << "Now he has " << _hp << " hp!" << std::endl;
}