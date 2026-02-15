#include "DiamondTrap.hpp"

int	main( void )
{
	DiamondTrap	npc1("sif");
	DiamondTrap npc2(npc1);
	DiamondTrap	npc3 = npc2;

	npc1.highFivesGuys();
	npc1.attack("sif");
	npc3.whoAmI();
	npc2.takeDamage(100);
}
