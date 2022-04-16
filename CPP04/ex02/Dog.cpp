#include "Animal.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog default constructor" << std::endl;
	this->setType("Dog");
	this->_brain = new Brain();
}

Dog::Dog(std::string type) : Animal()
{
	std::cout << "Dog default constructor" << std::endl;
	this->setType(type);
	this->_brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog default destructor" << std::endl;
	delete _brain;
}

Dog::Dog(Dog const &dog)
{
	std::cout << "Dog copy constructor" << std::endl;
	this->type = dog.getType();
	this->_brain = new Brain();
}

Dog & Dog::operator=( Dog const &dog)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &dog) {
		type = dog.getType();
		this->_brain = new Brain();
	}
	return *this;
}

Brain	*Dog::getBrain( void ) {
	return (this->_brain);
}

void	Dog::makeSound() const {
	std::cout << "Bark!" << std::endl;
}

std::ostream & operator<<( std::ostream & o, Dog const &dog) {
	o << dog.getType();
	return o;
}
