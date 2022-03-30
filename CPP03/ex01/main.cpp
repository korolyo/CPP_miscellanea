#include "includes/ScavTrap.hpp"

int main( void )
{
	ScavTrap	scav1 = ScavTrap("ScavTrap Bugatti");
	ScavTrap	scav2 = ScavTrap("ScavTrap Lada");

	scav1.attack(scav2.getName());
	scav2.takeDamage(scav1.getDamage());
	return 0;
}
