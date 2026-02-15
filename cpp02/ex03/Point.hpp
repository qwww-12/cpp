#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class	Point
{
	private:
		Fixed const	x;
		Fixed const	y;

	public:
		Point( const float x, const float y );
		Point( );
		Point( const Point &copy );
		Point &operator=( const Point &copy );
		~Point( );
		Fixed	getXvalue( ) const;
		Fixed	getYvalue( ) const;

};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif