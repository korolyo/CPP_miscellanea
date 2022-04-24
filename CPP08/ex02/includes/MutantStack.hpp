#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template<typename T>
class MutantStack {

public:
	MutantStack();
	MutantStack( MutantStack const &copy );
	~MutantStack();

	MutantStack &operator=( MutantStack const &stack );



};

#endif
