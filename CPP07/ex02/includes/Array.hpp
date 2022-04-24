#ifndef	ARRAY_HPP
# define	ARRAY_HPP

template<class T>
class Array{

public:
	Array();
	Array( unsigned int n );
	Array( Array const &copy );

	~Array();

	Array	&operator=( Array const &array );
	T		&operator[]( int i) const;

	int		size( void ) const;

private:
	T	*_element;
	int	_size;
};

#endif
