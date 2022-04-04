#include "ScavTrap.hpp"

int main(void) {
	{
		std::cout << "===CLAV===\n";
		ClapTrap trap("trap");

		trap.takeDamage(10);
		trap.beRepaired(10);
		trap.attack("some unlucky barrel");
	}
	{
		std::cout << "===SCAV EMPTY===\n";
		ScavTrap scav("scav");
	}
	{
		std::cout << "===SCAV ACT===\n";
		ScavTrap scav("scav");

		scav.attack("some unlucky BARREL");
		scav.takeDamage(10);
		scav.beRepaired(10);
		scav.guardGate();
	}
	{
		std::cout << "===SCAV CLONE===\n";
		ScavTrap scav("scav");
		ScavTrap scavClone = scav;
	}
}
