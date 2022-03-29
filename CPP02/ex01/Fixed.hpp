#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class	Fixed {

public:

	Fixed();
	Fixed( const int fixedPoint );
	Fixed( const float floatPoint );
	Fixed( Fixed const &fixed );
	~Fixed();

	Fixed &	operator=( Fixed const &fixed );

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;

private:

	int	_fixedPoint;
	static const int _bits = 8;

};

std::ostream & operator<<( std::ostream & o, Fixed const &fixed );

#endif
