#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal default constructor" << std::endl;
	this->setType("WrongAnimal");
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal default destructor" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &wrongAnimal)
{
	std::cout << "WrongAnimal copy constructor" << std::endl;
	this->type = wrongAnimal.getType();
}

WrongAnimal & WrongAnimal::operator=( WrongAnimal const &wrongAnimal)
{
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	if (this != &wrongAnimal) {
		type = wrongAnimal.getType();
	}
	return *this;
}

void	WrongAnimal::setType( std::string type ) {
	this->type = type;
}

std::string WrongAnimal::getType ( void ) const {
	return (type);
}

void	WrongAnimal::makeSound( void ) const {
	if (this->type == "WrongCat")
		std::cout << "Wrong Meoh" << std::endl;
}

std::ostream & operator<<( std::ostream & o, WrongAnimal const &wrongAnimal) {
	o << wrongAnimal.getType();
	return o;
}
