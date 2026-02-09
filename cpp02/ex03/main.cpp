#include "Point.hpp"

int	main( void )
{
	Point	a(2, 1);
	Point	b(8, 2);
	Point	c(6, 6);
	Point	p(1, 3);
	bool	res;

	res = bsp(a, b, c, p);
	if (res == true)
		std::cout << "The point inside the triangle" << std::endl;
	else
		std::cout << "The point is not inside the triangle" << std::endl;
	return (0);
}
