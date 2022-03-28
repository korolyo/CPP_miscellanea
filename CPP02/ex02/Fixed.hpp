#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class	Fixed {
public:
	Fixed();
	Fixed( const Fixed &fixed );
	Fixed & operator=(Fixed const &fixed);
	~Fixed();
	Fixed( const Fixed &fixed , const int fixedPoint);
	Fixed & operator>(Fixed const &fixed);
	Fixed & operator<(Fixed const &fixed);
	Fixed & operator>=(Fixed const &fixed);
	Fixed & operator<=(Fixed const &fixed);
	Fixed & operator==(Fixed const &fixed);
	Fixed & operator!=(Fixed const &fixed);
	Fixed & operator+(Fixed const &fixed);
	Fixed & operator-(Fixed const &fixed);
	Fixed & operator*(Fixed const &fixed);
	Fixed & operator/(Fixed const &fixed);
	Fixed & operator++(Fixed const &fixed);
	Fixed & operator--(Fixed const &fixed);
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;
	static int min(int &fixedPoint1, int &fixedPoint2);
	static int min(int const &fixedPoint1, int const &fixedPoint2);
	static int max(int &fixedPoint1, int &fixedPoint2);
	static int max(int const &fixedPoint1, int const &fixedPoint2);
private:
	int	_fixedPoint;
	static const int _bits = 8;
};

#endif
