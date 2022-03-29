#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	_fixedPoint = 0;
}

Fixed::Fixed(Fixed const &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	_fixedPoint = fixed.toFloat();
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

bool Fixed::operator>( Fixed const &f1 ) {

	return (this->_fixedPoint > f1._fixedPoint);
}

bool Fixed::operator<( Fixed const &f1 )  {

	return (this->_fixedPoint < f1._fixedPoint);
}

bool Fixed::operator>=( Fixed const &f1 ) {

	return (this->_fixedPoint >= f1._fixedPoint);
}

bool Fixed::operator<=( Fixed const &f1 ) {

	return (this->_fixedPoint <= f1._fixedPoint);
}

bool Fixed::operator==( Fixed const &f1 ) {

	return (this->_fixedPoint == f1._fixedPoint);
}

bool Fixed::operator!=( Fixed const &f1 ) {

	return (this->_fixedPoint != f1._fixedPoint);
}

Fixed Fixed::operator+( Fixed const &f1 )  {

	return Fixed( this->toFloat() + f1.toFloat() );
}

Fixed Fixed::operator-( Fixed const &f1 )  {

	return Fixed( this->toFloat() - f1.toFloat() );
}

Fixed Fixed::operator*( Fixed const &f1 )  {

	return Fixed( this->toFloat() * f1.toFloat() );
}

Fixed Fixed::operator/( Fixed const &f1 )  {

	return Fixed( this->toFloat() + f1.toFloat() );
}

Fixed & Fixed::operator++() {
	++_fixedPoint;
	this->toFloat();
	return (*this);
}
Fixed & Fixed::operator--() {
	--_fixedPoint;
	this->toFloat();
	return (*this);
}

Fixed & Fixed::operator++( int ) {
	_fixedPoint++;
	this->toFloat();
	return (*this);
}

Fixed & Fixed::operator--( int ) {
	_fixedPoint--;
	this->toFloat();
	return (*this);
}
//Fixed & Fixed::operator++( Fixed const &f1 ) { }
//Fixed & Fixed::operator--( Fixed const &f1 ) { }

float Fixed::min( Fixed const &f1, Fixed const &f2 ) {

	if (f1._fixedPoint > f2._fixedPoint)
		return (f2.toFloat());
	return f1.toFloat();
}

//float Fixed::min( Fixed const &f1, Fixed const &f2 ) const {
//
//	if (f1.toFloat() > f2.toFloat())
//		return (f2.toFloat());
//	return f1.toFloat();
//}
//
//float Fixed::max( Fixed const &f1, Fixed const &f2 ) {
//
//	if (f1.toFloat() > f2.toFloat())
//		return (f1.toFloat());
//	return f2.toFloat();
//}

float Fixed::max( Fixed &f1, Fixed &f2 ) {
	float i;

	if (f1._fixedPoint > f2._fixedPoint)
		i = f1.toFloat();
	else
		i = f2.toFloat();
	return i;
}

std::ostream & operator<<( std::ostream & o, Fixed const &fixed) {
	o << fixed.toFloat();
	return o;
}

Fixed::Fixed( const int fixedPoint ) {
	std::cout << "Int constructor called" << std::endl;
	_fixedPoint = (fixedPoint * (1 << _bits));
}

Fixed::Fixed( const float floatPoint ) {
	std::cout << "Float constructor called" << std::endl;
	_fixedPoint = (int)(roundf(floatPoint * (1 << _bits)));
}

float	Fixed::toFloat( void ) const {

	return (float)_fixedPoint / (float(1 << _bits));
}

int		Fixed::toInt( void ) const {

	return (int)(roundf(_fixedPoint / (1 << _bits)));
}
