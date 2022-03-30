#include <iostream>
#include "includes/Zombie.hpp"

int main()
{
	std::string hordeName;
	Zombie		*hordeZombie;
	int N = 5;
	int i = 0;

	hordeName = "PhpLover";
	hordeZombie = zombieHorde(N, hordeName);
	while (i < N)
	{
		hordeZombie[i].~Zombie();
		i++;
	}
	return (0);
}
