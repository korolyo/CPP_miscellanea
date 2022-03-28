#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>

class	ScavTrap {
public:
	ScavTrap();
	ScavTrap(std::string	name);
	~ScavTrap();
	ScavTrap( ScavTrap const &clap );
	ScavTrap & operator=( ScavTrap const &clap );
	void	attack( const std::string &target );
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );
private:
	std::string	_name;
	int			_hp;
	int			_energy;
	int			_damage;
};

#endif
