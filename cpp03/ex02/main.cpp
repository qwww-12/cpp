#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main( void )
{
	FragTrap	npc1;
	FragTrap	npc2("sif");

	npc2.attack("Def");
	npc2.highFivesGuys();
	npc1.takeDamage(4142);
	npc1.attack("sif");
	npc1.beRepaired(1000);
	npc1 = npc2;
	npc1.beRepaired(122);
}
