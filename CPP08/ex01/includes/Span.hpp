#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <set>

class Span {

public:
	Span( unsigned int n );
	Span( Span const &copy);
	~Span();

	Span	&operator=( Span const &span );

	void	addNumber(int number);

	int		shortestSpan();
	int		longestSpan();

	class ImpossibleToAddException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};

	class NoValidDistanceException: public std::exception
	{
	public:
		virtual const char* what() const throw();
	};

private:
	Span();
	unsigned int _N;
	std::set<int> _set;

};

#endif
