#include "Zombie.hpp"

int main()
{
	std::string hordeName;
	Zombie		*hordeZombie;
	int N = 5;

	hordeName = "PhpLover";
	hordeZombie = zombieHorde(N, hordeName);
	delete [] hordeZombie;
	return (0);
}
