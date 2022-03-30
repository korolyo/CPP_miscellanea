#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class	HumanB
{
private:
	std::string	_name;
	Weapon		*_weapon;

public:
	void		setWeapon(Weapon &weapon);
	void		attack();
	HumanB(std::string name);
	~HumanB();
	HumanB();
};

# endif
