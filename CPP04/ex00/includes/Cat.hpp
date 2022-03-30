#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class	Cat : public Animal {

public:

	Cat();
	~Cat();
	Cat( Cat const &cat );

	Cat & operator=( Cat const &Cat );

};

std::ostream & operator<<( std::ostream & o, Cat const &cat);

#endif
