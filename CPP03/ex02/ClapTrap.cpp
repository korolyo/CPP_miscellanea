#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
	std::cout << "Name constructor called" << std::endl;
	this->setName(name);
	_damage = 0;
	_hp = 10;
	_energy = 10;
}

ClapTrap::~ClapTrap() {
	std::cout << "Default destructor called" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const &clapTrap ) {
	std::cout << "Copy constructor called" << std::endl;
	_name = clapTrap.getName();
}

ClapTrap & ClapTrap::operator=( ClapTrap const &clapTrap ) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &clapTrap) {
		_name = clapTrap.getName();
	}
	return (*this);
}

void	ClapTrap::attack( const std::string &target ) {

	if (this->_energy <= 0)
		std::cout << "Can't attack. Not enough energy" << std::endl;
	else if (this->_hp <= 0)
		std::cout << "Can't get repaired. " << _name <<" is dead" << std::endl;
	else
	{
		std::cout << _name << " attacks " << target;
		std::cout << ", causing -" << _damage << " hit points!" << std::endl;
		this->_energy--;
	}
}

void	ClapTrap::takeDamage( unsigned int amount ) {

	if (this->_hp <= 0)
		std::cout << _name << " already dead. You, bastard"
		<< std::endl;
	else
	{
		std::cout << _name << " gets damage: -";
		std::cout << amount << " hit points!" << std::endl;
		this->_hp -= amount;
		if (this->_hp <= 0)
			std::cout << _name << " dead " << std::endl;
	}
}

void	ClapTrap::beRepaired( unsigned int amount ) {

	if (this->_energy <= 0)
		std::cout << "Can't get repaired. Not enough energy" << std::endl;
	else if (this->_hp <= 0)
		std::cout << "Can't get repaired. " << _name <<" is dead" << std::endl;
	else
	{
		std::cout << _name << " repaired: +";
		std::cout << amount << " hp!" << std::endl;
		std::cout << "Now he has " << _hp << " hp!" << std::endl;
		this->_hp += amount;
		this->_energy--;
	}
}

void		ClapTrap::setName( std::string name ) {
	_name = name;
}

void		ClapTrap::setHp( int hp ) {
	_hp = hp;
}

void		ClapTrap::setEnergy( int energy ) {
	_energy = energy;
}

void		ClapTrap::setDamage( int damage ) {
	_damage = damage;
}

std::string ClapTrap::getName( void ) const {
	return (_name);
}

int			ClapTrap::getHp( void ) {
	return (_hp);
}

int			ClapTrap::getEnergy( void ) {
	return (_energy);
}

int			ClapTrap::getDamage( void ) {
	return (_damage);
}

std::ostream & operator<<( std::ostream & o, ClapTrap const &clapTrap) {
	o << clapTrap.getName();
	return o;
}
