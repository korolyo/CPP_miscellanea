#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class Span {

public:
	Span( unsigned int n );
	Span( Span const &copy);
	~Span();

	Span	&operator=( Span const &span );

	void	addNumber(int number);

	int		shortestSpan();
	int		longestSpan();

private:
	unsigned int _N;

};

#endif
