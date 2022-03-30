#include "Animal.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog default constructor" << std::endl;
	this->setType("Dog");
	this->_brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog default destructor" << std::endl;
	delete [] this->_brain;
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

void	Dog::setBrain( Brain *brain ) {
	brain = new Brain();
	this->_brain = brain;
}

Brain	*Dog::getBrain( void ) {
	return (this->_brain);
}

std::ostream & operator<<( std::ostream & o, Dog const &dog) {
	o << dog.getType();
	return o;
}
