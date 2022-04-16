#include "Point.hpp"

////CONSTRUCTORS
//Point::Point() {
//	_x = Fixed::Fixed();
//	_y = Fixed::Fixed();
//}
//
//Point::Point( const float x, const float y ) {
//	_x = Fixed::Fixed( x );
//	_y = Fixed::Fixed( y );
//}

//DESTRUCTOR
Point::~Point() { }

//Copy assigment
Point & Point::operator=( const Point& point ) {
	if (this != &point)
	{
		_x = point.getX();
		_x = point.getY();
	}
	return *this;
}

Fixed Point::getX( void ) {
	return _x;
}

Fixed Point::getY( void ) {
	return _y;
}

Point::Point( Point const &point )
{
	std::cout << "Point copy constructor called" << std::endl;
	_x = point.getX();
	_x = point.getY();
}

//std::ostream & operator<<( std::ostream & o, Point const &point) {
//	o << point();
//	return o;
//}
