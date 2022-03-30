#include "Animal.hpp"
#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor" << std::endl;
	this->setType("Brain");
}

Brain::~Brain()
{
	std::cout << "Brain default destructor" << std::endl;
}

Brain::Brain(Brain const &brain)
{
	std::cout << "Brain copy constructor" << std::endl;
	this->type = brain.getType();
}

Brain & Brain::operator=( Brain const &brain)
{
	std::cout << "Brain copy assignment operator called" << std::endl;
	if (this != &brain) {
		type = brain.getType();
	}
	return *this;
}

std::ostream & operator<<( std::ostream & o, Brain const &brain) {
	o << brain.getType();
	return o;
}

