#include "includes/FlagTrap.hpp"

FlagTrap::FlagTrap() : ClapTrap()
{
	std::cout << "Default Flag constructor called" << std::endl;
}

FlagTrap::FlagTrap( std::string name ) : ClapTrap(name)
{
	std::cout << "Flag name constructor called" << std::endl;
	this->setName(name);
	_hp = 100;
	_energy = 100;
	_damage = 30;
}

FlagTrap::~FlagTrap()
{
	std::cout << "Default Flag destructor called" << std::endl;
}

FlagTrap::FlagTrap( FlagTrap const &flagTrap ) : ClapTrap()
{
	std::cout << "Copy Flag constructor called" << std::endl;
	_name = flagTrap.getName();
}

FlagTrap & FlagTrap::operator=( FlagTrap const &flagTrap )
{
	std::cout << "Scav copy assignment operator called" << std::endl;
	if (this != &flagTrap) {
		_name = flagTrap.getName();
	}
	return (*this);
}

void	FlagTrap::highFivesGuys( void ) {
	std::cout << "High five, Visitor!" << std::cout << std::endl;
}

std::ostream & operator<<( std::ostream & o, FlagTrap const &flagTrap ) {
	o << flagTrap.getName();
	return o;
}