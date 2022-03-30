#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class	AAnimal {

public:

	Animal();
	virtual ~Animal();
	Animal( Animal const &animal );

	Animal & operator=( Animal const &animal );

	virtual void makeSound() const = 0;
	void		setType( std::string type ) = 0;
	std::string	getType( void ) const = 0;

protected:
	std::string type;

};

std::ostream & operator<<( std::ostream & o, Animal const &animal);

#endif
