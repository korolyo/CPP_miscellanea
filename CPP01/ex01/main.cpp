#include <iostream>
#include "Zombie.hpp"

int main()
{
	std::string hordeName;
	Zombie		*hordeZombie;
	int N;
	int i = 0;

	N = 5;
	hordeName = "PhpLover";
	hordeZombie = zombieHorde(N, hordeName);
	while (i < N)
	{
		hordeZombie[i].~Zombie();
		i++;
	}
	return (0);
}
