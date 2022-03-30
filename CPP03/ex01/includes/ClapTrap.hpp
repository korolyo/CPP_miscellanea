#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class	ClapTrap {

public:


	ClapTrap();
	ClapTrap(std::string name);
	~ClapTrap();
	ClapTrap( ClapTrap const &clapTrap );

	ClapTrap & operator=( ClapTrap const &clapTrap );

	void		attack( const std::string &target );
	void		takeDamage( unsigned int amount );
	void		beRepaired( unsigned int amount );

	void		setName( std::string name );
	void		setHp( int hp );
	void		setEnergy( int energy );
	void		setDamage( int damage );
	std::string getName( void ) const;
	int			getHp( void );
	int			getEnergy( void );
	int			getDamage( void );

protected:

	std::string	_name;
	int			_hp;
	int			_energy;
	int			_damage;
};

std::ostream & operator<<( std::ostream & o, ClapTrap const &clapTrap);

#endif
