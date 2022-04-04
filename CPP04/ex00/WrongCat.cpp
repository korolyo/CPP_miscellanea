#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "WrongCat default constructor" << std::endl;
	this->setType("WrongCat");
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat default destructor" << std::endl;
}

WrongCat::WrongCat( WrongCat const &wrongCat )
{
	std::cout << "WrongCat copy constructor" << std::endl;
	this->type = wrongCat.getType();
}

WrongCat & WrongCat::operator=( WrongCat const &wrongCat)
{
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	if (this != &wrongCat) {
		type = wrongCat.getType();
	}
	return *this;
}

std::ostream & operator<<( std::ostream & o, WrongCat const &wrongCat) {
	o << wrongCat.getType();
	return o;
}
