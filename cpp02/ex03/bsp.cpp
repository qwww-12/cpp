#include "Point.hpp"

static Fixed	area_math( Point const &_1, Point const &_2, Point const &_3 )
{
	Fixed	tmp;

	tmp = 	(_1.getXvalue() * (_2.getYvalue() - _3.getYvalue()) +
			_2.getXvalue() * (_3.getYvalue() - _1.getYvalue()) +
			_3.getXvalue() * (_1.getYvalue() - _2.getYvalue()));
	if (tmp < Fixed(0))
		tmp = tmp * Fixed(-1);
	return (tmp);			
}

bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed	apb = area_math(a, point, b);
	Fixed	bpc = area_math(b, point, c);
	Fixed	cpa = area_math(c, point, a);
	Fixed	abc = area_math(a, b, c);

	if (abc == apb + bpc + cpa && apb != Fixed(0) && bpc != Fixed(0) && cpa != Fixed(0))
		return (true);
	return (false);
}
