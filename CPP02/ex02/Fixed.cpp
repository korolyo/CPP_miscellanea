#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	_fixedPoint = 0;
}

Fixed::Fixed(Fixed const &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	_fixedPoint = fixed.getRawBits();
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(Fixed const &fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fixed) {
		_fixedPoint = fixed.getRawBits();
	}
	return (*this);
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixedPoint);
}

void Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_fixedPoint = raw;
}

Fixed( const Fixed &fixed , const int fixedPoint ) {

}

bool Fixed::operator>( Fixed const &f1, Fixed const &f2 ) {

	return (f1._fixedPoint > f2._fixedPoint);
}

bool Fixed::operator<( Fixed const &f1, Fixed const &f2 )  {

	return (f1._fixedPoint < f2._fixedPoint);
}

bool Fixed::operator>=( Fixed const &f1, Fixed const &f2 ) {

	return (f1._fixedPoint >= f2._fixedPoint);
}

bool Fixed::operator<=( Fixed const &f1, Fixed const &f2 ) {

	return (f1._fixedPoint <= f2._fixedPoint);
}

bool Fixed::operator==( Fixed const &f1, Fixed const &f2 ) {

	return (f1._fixedPoint == f2._fixedPoint);
}

bool Fixed::operator!=( Fixed const &f1, Fixed const &f2 ) {

	return (f1._fixedPoint != f2._fixedPoint);
}

int Fixed::operator+( Fixed const &f1, Fixed const &f2 )  {

	return (f1._fixedPoint + f2._fixedPoint);
}

int Fixed::operator-( Fixed const &f1, Fixed const &f2 )  {

	return (f1._fixedPoint - f2._fixedPoint);
}

int Fixed::operator*( Fixed const &f1, Fixed const &f2 )  {

	return (f1._fixedPoint * f2._fixedPoint);
}

int Fixed::operator/( Fixed const &f1, Fixed const &f2 )  {

	return (f1._fixedPoint / f2._fixedPoint);
}

bool Fixed::operator++( Fixed const &fixed )
bool Fixed::operator--( Fixed const &fixed )
static int Fixed::min(int &fixedPoint1, int &fixedPoint2)
static int Fixed::min(int const &fixedPoint1, int const &fixedPoint2)
static int Fixed::max(int &fixedPoint1, int &fixedPoint2)
static int Fixed::max(int const &fixedPoint1, int const &fixedPoint2)
