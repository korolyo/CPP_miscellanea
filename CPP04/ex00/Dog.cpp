#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog default constructor" << std::endl;
	this->setType("Dog");
}

Dog::~Dog()
{
	std::cout << "Dog default destructor" << std::endl;
}

Dog::Dog(Dog const &dog)
{
	std::cout << "Dog copy constructor" << std::endl;
	this->type = dog.getType();
}

Dog & Dog::operator=( Dog const &dog)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &dog) {
		type = dog.getType();
	}
	return *this;
}

std::ostream & operator<<( std::ostream & o, Dog const &dog) {
	o << dog.getType();
	return o;
}
