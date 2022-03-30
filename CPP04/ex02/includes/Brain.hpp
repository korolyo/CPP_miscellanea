#ifndef BRAIN_HPP
# define BRAIN_HPP

# include "Brain.hpp"

class	Brain : public Animal {

public:

	Brain();
	~Brain();
	Brain( Brain const &brain );

	Brain & operator=( Brain const &brain );

	std::string ideas[100];
};

std::ostream & operator<<( std::ostream & o, Brain const &brain);

#endif
