#ifndef CONTACT_HPP
# define CONTACT_HPP

class	Zombie
{
private:
	std::string	name;

public:
	void		setName(std::string name);
	std::string	getName();
	void		announce(void);
	~Zombie();
};
Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

# endif