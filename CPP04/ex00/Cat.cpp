#include "Animal.hpp"
#include "Cat.hpp"

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

std::ostream & operator<<( std::ostream & o, Cat const &cat) {
	o << cat.getType();
	return o;
}

