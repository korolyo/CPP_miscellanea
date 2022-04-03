#include "Zombie.hpp"

int main()
{
	std::string stackName;
	std::string heapName;
	Zombie *heapZombie;

	heapName = "PhpLover";
	heapZombie = newZombie(heapName);
	heapZombie->announce();
	delete heapZombie;
	stackName = "KobolLover";
	randomChump(stackName);
	return (0);
}
