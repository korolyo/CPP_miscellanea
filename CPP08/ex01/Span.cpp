#include "Span.hpp"

Span::Span()
{
	this->_N = 0;
}

Span::Span(unsigned int N): _N(N) {}

Span::Span(const Span &other)
{
	*this = other;
}

Span &Span::operator =(const Span &other)
{
	this->_N = other._N;
	this->_set = other._set;
	return *this;
}

Span::~Span() {}

void Span::addNumber(int num)
{
	if (this->_set.size() == this->_N)
		throw ImpossibleToAddException();
	else
		this->_set.insert(num);
}

int Span::shortestSpan()
{
	if (this->_set.size() < 2)
		throw NoValidDistanceException();
	std::set<int>::iterator it = this->_set.begin();
	int first = *it;
	std::set<int>::iterator next_it = ++it;

	return (*next_it - first - 1);
}

int Span::longestSpan()
{
	if (this->_set.size() < 2)
		throw NoValidDistanceException();

	return (*(--this->_set.end()) - *this->_set.begin());
}

const char* Span::ImpossibleToAddException::what() const throw()
{
	return "Immpossible to add integer!\n";
}

const char* Span::NoValidDistanceException::what() const throw()
{
	return "Distance error!\n";
}
