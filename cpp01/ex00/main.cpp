#include "Zombie.hpp"

int     main(void)
{
	Zombie      *zombie;

	randomChump("ra");
	zombie = newZombie("ro");
	delete zombie;
	return (0);
}
