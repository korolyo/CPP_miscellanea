#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class	HumanA
{
private:
	std::string	name;
	Weapon		&weapon;

public:
	void		setName(std::string name);
	std::string	getName(void);
//	void		setWeapon(Weapon weapon);
//	Weapon		*getWeapon(void);
	void		attack();
	HumanA(std::string name, Weapon& weapon);
	~HumanA();
};

# endif
