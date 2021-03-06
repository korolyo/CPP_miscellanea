#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Cat : public Animal {

public:

	Cat();
	Cat(std::string type);
	~Cat();
	Cat( Cat const &cat );

	Cat & operator=( Cat const &Cat );

	Brain	*getBrain( void );

	void	makeSound() const;

private:

	Brain *_brain;

};

std::ostream & operator<<( std::ostream & o, Cat const &cat);

#endif
