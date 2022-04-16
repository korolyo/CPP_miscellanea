#include "ClapTrap.hpp"

int main( void )
{
	ClapTrap	clap1 = ClapTrap("Tinkot");
	ClapTrap	clap2 = ClapTrap("Rust");

	clap1.attack("Rust");
	clap2.takeDamage(clap1.getDamage());
	return 0;
}
