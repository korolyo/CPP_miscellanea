#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class	ClapTrap {
public:
	ClapTrap();
	~ClapTrap();
	ClapTrap( ClapTrap const &clap );
	ClapTrap & operator=( ClapTrap const &clap );
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
