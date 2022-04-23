#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("New"), _grade(150) { }

Bureaucrat::Bureaucrat( std::string const &name, int grade ) : _name(name) {
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	_grade = grade;
	return;
}

Bureaucrat::~Bureaucrat() { }

Bureaucrat::Bureaucrat( Bureaucrat const &bureaucrat ) : _name(bureaucrat._name) {
	this->_grade = bureaucrat.getGrade();
}

Bureaucrat & Bureaucrat::operator=( Bureaucrat const &bur ) {
	if (this != &bur)
		_grade = bur.getGrade();
	return *this;
}

std::string Bureaucrat::getName( void ) const {
	return _name;
}

int			Bureaucrat::getGrade( void ) const {
	return _grade;
}

void		Bureaucrat::setGrade( int grade ) {
	_grade = grade;
}

void	Bureaucrat::incrementGrade( void ) {
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		--_grade;
}

void	Bureaucrat::decrementGrade( void ) {
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		++_grade;
}

void	Bureaucrat::signForm(Form &form) const {
	if (form.isSigned())
		std::cout << _name << " cannot sign " << form.getName() << "because it's already signed." << std::endl;
	else
	{
		try
		{
			form.beSigned(*this);
			std::cout << _name << " signs " << form.getName() << std::endl;
		}
		catch (const std::exception &ex1)
		{
			std::cout << _name << " cannot sign " << form.getName() << " because " << ex1.what() << std::endl;
		}
	}
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade is in it's maximum";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade is in it's minimum";
}

std::ostream & operator<<( std::ostream &o, Bureaucrat const &bureaucrat) {
	o << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
	return o;
}
