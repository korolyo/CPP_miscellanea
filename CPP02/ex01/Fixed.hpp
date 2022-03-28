#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class	Fixed {
public:
	Fixed();
	Fixed( const Fixed &fixed );
	Fixed( const Fixed &fixed , const int fixedPoint);
	Fixed & operator=(Fixed const &fixed);
	Fixed & operator<<(Fixed const &fixed);
	~Fixed();
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;

private:
	int	_fixedPoint;
	static const int _bits = 8;
};

#endif
