#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class	WrongAnimal {

public:

	WrongAnimal();
	~WrongAnimal();
	WrongAnimal( WrongAnimal const &wrongAnimal );

	WrongAnimal & operator=( WrongAnimal const &wrongAnimal );

	void		makeSound() const;
	void		setType( std::string type );
	std::string	getType( void ) const;

protected:
	std::string type;

};

std::ostream & operator<<( std::ostream & o, WrongAnimal const &wrongAnimal);

#endif
