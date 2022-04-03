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
			throw Bureaucrat::GradeTooLowException();
	}
	catch (GradeTooHighException &ex1) {
		std::cerr << ex1.what() << std::endl;
	}
	this->_grade = getGrade() - 1;
}

void	Bureaucrat::decrementGrade( void ) {
	try {
		if (this->_grade > 150)
			throw Bureaucrat::GradeTooLowException();
	}
	catch (GradeTooLowException &ex2) {
		std::cerr << ex2.what() << std::endl;
	}
	this->_grade = getGrade() + 1;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade is in it's maximum";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade is in it's minimum";
}

std::ostream & operator<<( std::ostream & o, Bureaucrat const & bureaucrat) {
	std::cout << bureaucrat.getName() << ", bureaucrat grade ";
	std::cout << bureaucrat.getGrade() << std::endl;
	o << bureaucrat.getName();
	return o;
}
