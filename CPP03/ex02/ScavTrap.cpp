#include "includes/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "Default Scav constructor called" << std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
	std::cout << "Scav name constructor called" << std::endl;
	this->setName(name);
	_damage = 20;
	_hp = 100;
	_energy = 50;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Default Scav destructor called" << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const &scavTrap ) : ClapTrap()
{
	std::cout << "Copy Scav constructor called" << std::endl;
	_name = scavTrap.getName();
}

ScavTrap & ScavTrap::operator=( ScavTrap const &scavTrap )
{
	std::cout << "Scav copy assignment operator called" << std::endl;
	if (this != &scavTrap) {
		_name = scavTrap.getName();
	}
	return (*this);
}

void	ScavTrap::guardGate( void ) {
	std::cout << "ScavTrap " << _name << " is now in a Gate keeper mode!";
	std::cout << std::endl;
}

std::ostream & operator<<( std::ostream & o, ScavTrap const &scavTrap ) {
	o << scavTrap.getName();
	return o;
}
