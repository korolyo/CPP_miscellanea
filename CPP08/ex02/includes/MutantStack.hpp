#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>

template<typename T, typename Container = std::deque<T> >
class MutantStack: public std::stack<T, Container>
{
public:
	MutantStack() {};
	MutantStack(const MutantStack<T, Container>& other) {*this = other;}
	MutantStack &operator =(const MutantStack<T, Container >& other)
	{
		*this = other;
		return *this;
	}
	~MutantStack() {};

	typedef typename std::stack<T, Container>::container_type::iterator iterator;
	typedef typename std::stack<T, Container>::container_type::reverse_iterator reverse_iterator;

	iterator begin() {return this->c.begin();}
	iterator end() {return this->c.end();}

	reverse_iterator rbegin() { return this->c.rbegin(); }
	reverse_iterator rend() { return this->c.rend();}
};

#endif
