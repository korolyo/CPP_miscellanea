#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap {

public:

	ScavTrap();
	ScavTrap( std::string	name );
	~ScavTrap();
	ScavTrap( ScavTrap const &scavTrap );

	ScavTrap & operator=( ScavTrap const &scavTrap );

	void		guardGate();

};

std::ostream & operator<<( std::ostream & o, ScavTrap const &scavTrap);

#endif
