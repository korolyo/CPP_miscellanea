#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

class	Zombie
{
private:
	std::string	_name;

public:
	void		setName(std::string name);
	std::string	getName();
	void		announce(void);
	~Zombie();
};

Zombie*	zombieHorde(int N, std::string name);

# endif
