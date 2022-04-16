#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class	Point {

public:
	Point();
	Point( const float x, const float y );
	~Point();
	Point( const Point& point );

	Point & operator=( const Point& point);

	Fixed getX( void ) const;
	Fixed getY( void ) const;

private:
	Fixed const _x;
	Fixed const _y;

};

std::ostream & operator<<( std::ostream & o, Fixed const &fixed );
bool	bsp( Point const a, Point const b, Point const c, Point const point);
float	sign( Point const a, Point const b, Point const c );

#endif
