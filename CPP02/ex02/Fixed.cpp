#include "includes/Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	_fixedPoint = 0;
}

Fixed::Fixed( const int fixedPoint ) {
	std::cout << "Int constructor called" << std::endl;
	_fixedPoint = (fixedPoint * (1 << _bits));
}

Fixed::Fixed( const float floatPoint ) {
	std::cout << "Float constructor called" << std::endl;
	_fixedPoint = (int)(roundf(floatPoint * (1 << _bits)));
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

bool Fixed::operator>( const Fixed& f1 ) const {

	return (this->_fixedPoint > f1.getRawBits());
}

bool Fixed::operator<( Fixed const &f1 ) const {

	return (this->_fixedPoint < f1.getRawBits());
}

bool Fixed::operator>=( Fixed const &f1 ) const {

	return (this->_fixedPoint >= f1.getRawBits());
}

bool Fixed::operator<=( Fixed const &f1 ) const {

	return (this->_fixedPoint <= f1.getRawBits());
}

bool Fixed::operator==( Fixed const &f1 ) const {

	return (this->_fixedPoint == f1.getRawBits());
}

bool Fixed::operator!=( Fixed const &f1 ) const {

	return (this->_fixedPoint != f1.getRawBits());
}

Fixed Fixed::operator+( Fixed const &f1 ) const {

	return Fixed( this->toFloat() + f1.toFloat() );
}

Fixed Fixed::operator-( Fixed const &f1 ) const {

	return Fixed( this->toFloat() - f1.toFloat() );
}

Fixed Fixed::operator*( Fixed const &f1 ) const {

	return Fixed( this->toFloat() * f1.toFloat() );
}

Fixed Fixed::operator/( Fixed const &f1 ) const {

	return Fixed( this->toFloat() + f1.toFloat() );
}

Fixed & Fixed::operator++() {
	_fixedPoint++;
	return (*this);
}
Fixed & Fixed::operator--() {
	--_fixedPoint;
	return (*this);
}

Fixed Fixed::operator++( int ) {
	Fixed tmp = *this;
	++(*this);
	return (tmp);
}

Fixed Fixed::operator--( int ) {
	Fixed tmp;
	tmp = *this;
	--(*this);
	return (tmp);
}

Fixed& Fixed::min( Fixed &f1, Fixed &f2 ) {

	if (f1 > f2)
		return f2;
	return f1;
}

Fixed& Fixed::max( Fixed &f1, Fixed &f2 ) {
	if (f1 > f2)
		return f1;
	else
		return f2;

}

const Fixed& Fixed::min( const Fixed& f1, const Fixed& f2 ) {

	if (f1 > f2)
		return f2;
	return f1;
}

const Fixed& Fixed::max( Fixed const &f1, Fixed const &f2 ) {

	if (f1 > f2)
		return f1;
	else
		return f2;
}

float	Fixed::toFloat( void ) const {
	return (float)_fixedPoint / (float(1 << _bits));
}

int		Fixed::toInt( void ) const {

	return (int)(roundf(_fixedPoint / (1 << _bits)));
}

std::ostream & operator<<( std::ostream & o, Fixed const &fixed) {
	o << fixed.toFloat();
	return o;
}
