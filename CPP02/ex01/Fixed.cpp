#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	_fixedPoint = 0;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( const int fixedPoint ) {
	std::cout << "Int constructor called" << std::endl;
	_fixedPoint = (fixedPoint * (1 << _bits));
}

Fixed::Fixed( const float floatPoint ) {
	std::cout << "Float constructor called" << std::endl;
	_fixedPoint = (int)(roundf(floatPoint * (1 << _bits)));
}

Fixed & Fixed::operator=( Fixed const &fixed )
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fixed) {
		_fixedPoint = fixed.getRawBits();
	}
	return (*this);
}

Fixed::Fixed( Fixed const &fixed ) : _fixedPoint(fixed.getRawBits())
{
	std::cout << "Copy constructor called" << std::endl;
}

float	Fixed::toFloat( void ) const {

	return (float)_fixedPoint / (float(1 << _bits));
}

int		Fixed::toInt( void ) const {

	return (int)(roundf(_fixedPoint / (1 << _bits)));
}


int Fixed::getRawBits( void ) const
{
	return (_fixedPoint);
}

void Fixed::setRawBits( const int raw )
{
	_fixedPoint = raw;
}

std::ostream & operator<<( std::ostream & o, Fixed const &fixed ) {
	o << fixed.toFloat();
	return o;
}
