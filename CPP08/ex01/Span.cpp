#include "Span.hpp"

Span( unsigned int n );
Span( Span const &copy);
~Span();

Span	&operator=( Span const &span );

void	addNumber(int number);

int		shortestSpan();
int		longestSpan();

