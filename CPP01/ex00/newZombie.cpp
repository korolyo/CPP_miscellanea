#include <iostream>
#include "includes/Zombie.hpp"

Zombie	*newZombie(std::string name) {
	Zombie *zombie = new Zombie();

	zombie->setName(name);
	return (zombie);
}
