#include "ClapTrap.hpp"

int	main( void )
{
	ClapTrap	npc1("sif");
	ClapTrap	npc2("bob");

	npc1.attack("bob");
	npc2.takeDamage(0);
	npc2.beRepaired(1);
	npc2.attack("sif");
	npc2.attack("sif");
	npc1.takeDamage(3);
	npc1.takeDamage(6);
	npc1.beRepaired(1);
	npc1.beRepaired(1);
	npc1.attack("bob");
	npc2.takeDamage(133);
	npc2.beRepaired(13);
	npc2.takeDamage(12);
	npc1.attack("bob");
	npc1.attack("bob");
	npc1.attack("bob");
	npc1.attack("bob");
	npc1.attack("bob");
	npc1.attack("bob");
	npc1.attack("bob");
}
