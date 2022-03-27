#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class	HumanB
{
private:
	std::string	_name;
	Weapon		*_weapon;

public:
	void		setName(std::string name);
	std::string	getName(void);
	void		setWeapon(Weapon weapon);
	Weapon		getWeapon(void);
	void		attack();
	HumanB(std::string name);
	~HumanB();
	HumanB();
};

# endif
