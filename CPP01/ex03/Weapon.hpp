#ifndef WEAPON_HPP
# define WEAPON_HPP

class	Weapon
{
private:
	std::string	type;

public:
	void		setType(std::string type);
	std::string	getType(void);
	Weapon();
	Weapon(std::string type);
	~Weapon();
};

# endif
