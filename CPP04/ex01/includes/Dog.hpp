#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
#include "Brain.hpp"

class	Dog : public Animal {

public:

	Dog();
	~Dog();
	Dog( Dog const &dog );

	Dog & operator=( Dog const &dog );

	void	setBrain( Brain *brain );
	Brain	*getBrain( void );

private:

	Brain *_brain;

};

std::ostream & operator<<( std::ostream & o, Dog const &dog);

#endif
