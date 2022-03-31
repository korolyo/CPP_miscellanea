#include "Bureaucrat.hpp"

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
	try {
		if (this->_grade <= 0)
			throw "Grade is in it's maximum";
	}
	catch (char const* exception) {
		std::cerr << exception << std::endl;
		exit(1);
	}
	this->_grade = getGrade() - 1;
}

void	Bureaucrat::decrementGrade( void ) {
	try {
		if (this->_grade > 150)
			throw "Grade is in it's minimum";
	}
	catch (char const* exception) {
		std::cerr << exception << std::endl;
		exit(1);
	}
	this->_grade = getGrade() + 1;
}

std::ostream & operator<<( std::ostream & o, Bureaucrat const & bureaucrat) {
	std::cout << bureaucrat.getName() << ", bureaucrat grade ";
	std::cout << bureaucrat.getGrade() << std::endl;
	o << bureaucrat.getName();
	return o;
}
