#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class	Animal {

public:

	Animal();
	virtual ~Animal();
	Animal( Animal const &animal );

	Animal & operator=( Animal const &animal );

	void		makeSound() const;
	void		setType( std::string type );
	std::string	getType( void ) const;

protected:
	std::string type;

};

std::ostream & operator<<( std::ostream & o, Animal const &animal);

#endif
