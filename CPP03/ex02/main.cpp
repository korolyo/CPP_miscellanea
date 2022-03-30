#include "includes/FlagTrap.hpp"

int main( void )
{
	FlagTrap	flag1 = FlagTrap("FlagTrap Georgia");
	FlagTrap	flag2 = FlagTrap("FlagTrap Lithuania");

	ScavTrap	scav1 = ScavTrap("ScavTrap Bugatti");
	ScavTrap	scav2 = ScavTrap("ScavTrap Lada");

	scav1.attack(scav2.getName());
	scav2.takeDamage(scav1.getDamage());

	flag1.attack(flag2.getName());
	flag2.takeDamage(flag1.getDamage());
	return 0;
}
