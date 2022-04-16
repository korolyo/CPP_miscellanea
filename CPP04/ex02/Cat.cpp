#include "Animal.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat default constructor" << std::endl;
	this->setType("Cat");
	this->_brain = new Brain();
}

Cat::Cat(std::string type) : Animal()
{
	std::cout << "Cat default constructor" << std::endl;
	this->setType(type);
	this->_brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat default destructor" << std::endl;
	delete _brain;
}

Cat::Cat(Cat const &cat)
{
	std::cout << "Cat copy constructor" << std::endl;
	this->type = cat.getType();
	this->_brain = new Brain();
}

Cat & Cat::operator=( Cat const &cat)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &cat) {
		type = cat.getType();
		this->_brain = new Brain();
	}
	return *this;
}

Brain	*Cat::getBrain( void ) {
	return (this->_brain);
}

void	Cat::makeSound() const {
	std::cout << "Meoh" << std::endl;
}

std::ostream & operator<<( std::ostream & o, Cat const &cat) {
	o << cat.getType();
	return o;
}
