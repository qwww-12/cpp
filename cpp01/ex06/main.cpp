#include "Harl.hpp"

int     main(int ac, char **av)
{
	Harl    hrl;

	if (ac == 1)
		return (0);
	hrl.complain(av[1]);
	return (0);
}
