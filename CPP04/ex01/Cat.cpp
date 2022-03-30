#include "Animal.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat default constructor" << std::endl;
	this->setType("Cat");
}

Cat::~Cat()
{
	std::cout << "Cat default destructor" << std::endl;
}

Cat::Cat(Cat const &cat)
{
	std::cout << "Cat copy constructor" << std::endl;
	this->type = cat.getType();
}

Cat & Cat::operator=( Cat const &cat)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &cat) {
		type = cat.getType();
	}
	return *this;
}

void	Cat::setBrain( Brain *brain ) {
	brain = new Brain();
	this->_brain = brain;
}

Brain	*Cat::getBrain( void ) {
	return (this->_brain);
}

std::ostream & operator<<( std::ostream & o, Cat const &cat) {
	o << cat.getType();
	return o;
}

