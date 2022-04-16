#include "Point.hpp"

float	sign( Point const a, Point const b, Point const c ) {
	return ((a.getX().toFloat() - c.getX().toFloat()) * (b.getY().toFloat() - a.getY().toFloat())
			- (b.getX().toFloat() - c.getX().toFloat()) * (a.getY().toFloat() - c.getY().toFloat()));
}

bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
	float	d1, d2, d3;
	bool	has_neg, has_pos;

	d1 = sign(point, a, b);
	d2 = sign(point, b, c);
	d3 = sign(point, c, a);

	has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
	has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);
	return !(has_neg && has_pos);
}
