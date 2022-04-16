#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class	Fixed {

public:

	Fixed();
	Fixed( const Fixed &fixed );
	Fixed( const int fixedPoint );
	Fixed( const float floatPoint );
	~Fixed();

	Fixed & operator=( Fixed const &fixed );

	bool operator>( Fixed const &f1 ) const;
	bool operator<( Fixed const &f1 ) const;
	bool operator>=( Fixed const &f1 ) const;
	bool operator<=( Fixed const &f1 ) const;
	bool operator==( Fixed const &f1 ) const;
	bool operator!=( Fixed const &f1 ) const;

	Fixed operator+( Fixed const &f1 ) const;
	Fixed operator-( Fixed const &f1 ) const;
	Fixed operator*( Fixed const &f1 ) const;
	Fixed operator/( Fixed const &f1 ) const;

	Fixed & operator++();
	Fixed & operator--();
	Fixed operator++( int );
	Fixed operator--( int );

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;

	static Fixed& min( Fixed &f1, Fixed &f2 );
	static Fixed& max( Fixed &f1, Fixed &f2 );
	static const Fixed& min( Fixed const &f1, Fixed const &f2 );
	static const Fixed& max( Fixed const &f1, Fixed const &f2 );

private:

	int	_fixedPoint;
	static const int _bits = 8;

};

std::ostream & operator<<( std::ostream & o, Fixed const &fixed );

#endif
