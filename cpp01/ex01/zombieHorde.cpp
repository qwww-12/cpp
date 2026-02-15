#include "Zombie.hpp"

Zombie  *zombieHorde(int N, std::string name)
{
    Zombie  *zombie = new Zombie[N];
    int     r = -1;

    while (++r < N)
        zombie[r].set_name(name);
    return (zombie);
}
