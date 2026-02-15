#include <iostream>

int	main(int ac, char **av)
{
	int		r = 0;

	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	while (av[++r])
	{
		int		idx = -1;
		while (av[r][++idx])
			std::cout << static_cast<char>(toupper(av[r][idx]));
	}
	std::cout << std::endl;
	return (0);
}
