#include "includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat() { }

Bureaucrat::~Bureaucrat() { }

Bureaucrat::Bureaucrat( Bureaucrat const &bureaucrat ) {
	std::cout << "Bureaucrat copy constructor" << std::endl;
	this->_grade = bureaucrat.getGrade();
}

Bureaucrat & Bureaucrat::operator=( Bureaucrat const &bur ) {
	std::cout << "Bureaucrat copy assigment operator called" << std::endl;
	if (this != &bur)
		_grade = bur.getGrade();
	return *this;
}

std::string Bureaucrat::getName( void ) const {
	return this->_name;
}

int			Bureaucrat::getGrade( void ) const {
	return _grade;
}

void		Bureaucrat::setGrade( int grade ) {
	_grade = grade;
}

void	Bureaucrat::incrementGrade( void ) {
	this->_grade = getGrade() - 1;
}

void	Bureaucrat::decrementGrade( void ) {
	this->_grade = getGrade() + 1;
}

std::ostream & operator<<( std::ostream & o, Bureaucrat const & bureaucrat) {
	std::cout << bureaucrat.getName() << ", bureaucrat grade ";
	std::cout << bureaucrat.getGrade() << std::endl;
	o << bureaucrat.getName();
	return o;
}
