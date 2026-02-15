#include "ScavTrap.hpp"

int	main( void )
{
	ScavTrap	npc1("sif");
	ScavTrap	npc2("foo");
	ScavTrap	npc3(npc1);

	npc1.attack("foo");
	npc1.attack("foo");
	npc2.takeDamage(20);
	npc3.attack("foo");
	npc2.attack("sif");
	npc2.attack("sif");
	npc2.attack("sif");
	npc2.attack("sif");
	npc3.takeDamage(200);
	npc3.beRepaired(20);
	npc3.attack("foo");
	npc1.beRepaired(20);
	npc1.attack("foo");
	npc3 = npc2;
	npc3.attack("sif");
	npc1.takeDamage(101);
}
