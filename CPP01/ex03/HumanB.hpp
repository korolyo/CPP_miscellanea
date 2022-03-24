#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class	HumanB
{
private:
	std::string	name;
	Weapon		*weapon;

public:
	void		setName(std::string name);
	std::string	getName();
	void		setWeapon(Weapon weapon);
	Weapon		getWeapon();
	void		attack();
	HumanB(std::string name);
	~HumanB();
	HumanB();
};

# endif
