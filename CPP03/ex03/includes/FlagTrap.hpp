#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class	FlagTrap : public ClapTrap {

public:
	FlagTrap();
	FlagTrap( std::string	name );
	~FlagTrap();
	FlagTrap( FlagTrap const &flag );

	FlagTrap & operator=( FlagTrap const &clap );

	void	highFivesGuys( void );
};

std::ostream & operator<<( std::ostream & o, FlagTrap const &flagTrap);

#endif
