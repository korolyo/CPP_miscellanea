#include "Zombie.hpp"

void	randomChump(std::string name) {
	Zombie zombie1;

	zombie1.setName(name);
	zombie1.announce();
}
