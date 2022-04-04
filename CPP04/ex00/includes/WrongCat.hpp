#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal {

public:

	WrongCat();
	~WrongCat();
	WrongCat( WrongCat const &wrongCat );

	WrongCat & operator=( const WrongCat& wrongCat );

};

std::ostream & operator<<( std::ostream & o, WrongCat const &wrongCat);

#endif
