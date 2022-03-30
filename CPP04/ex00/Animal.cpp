#include "Animal.hpp"


Animal::Animal() {
	std::cout << "Animal default constructor" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal default destructor" << std::endl;
}

Animal::Animal(Animal const &animal)
{
	std::cout << "Animal copy constructor" << std::endl;
	this->type = animal.getType();
}

Animal & Animal::operator=( Animal const &animal)
{
	std::cout << "Animal copy assignment operator called" << std::endl;
	if (this != &animal) {
		type = animal.getType();
	}
	return *this;
}

void	Animal::setType( std::string type ) {
	this->type = type;
}

std::string Animal::getType ( void ) const {
	return (this->type);
}

void	Animal::makeSound( void ) const {
	if (this->type == "Cat")
		std::cout << "Meoh" << std::endl;
	if (this->type == "Dog")
		std::cout << "Not meoh" << std::endl;
}

std::ostream & operator<<( std::ostream & o, Animal const &animal) {
	o << animal.getType();
	return o;
}
