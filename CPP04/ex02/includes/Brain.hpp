#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class	Brain {

public:

	Brain();
	~Brain();
	Brain( Brain const &brain );

	Brain & operator=( Brain const &brain );

	const std::string& getIdea( int index ) const;
private:

	std::string _ideas[100];
};

std::ostream & operator<<( std::ostream & o, Brain const &brain);

#endif
