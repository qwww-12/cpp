#include "Zombie.hpp"

int     main(void)
{
    int     N = -10;
    int     r = -1;

    if (N < 0)
        return (0);
    Zombie  *zombie = zombieHorde(N, "ro");
    if (!zombie)
        return (0);
    while (++r < N)
        zombie[r].announce();
    delete[] zombie;
    return (0);
}
