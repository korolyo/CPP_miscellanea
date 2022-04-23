#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( std::string const &target ) : Form("presidential pardon", 25, 5, target)
{ }

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const &copy) {
	*this = copy;
}

PresidentialPardonForm::~PresidentialPardonForm() { }

PresidentialPardonForm	&PresidentialPardonForm::operator=( PresidentialPardonForm const &pres ) {
	std::string something = pres.getName();
	return *this;
}

void	PresidentialPardonForm::execute( Bureaucrat const &executor ) const {
	if (!this->isSigned())
		throw Form::FormNotSignedException();
	if (executor.getGrade() > this->getGradeExec() )
		throw Form::GradeTooLowException();

	std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

Form					*PresidentialPardonForm::clone() const {
	return (new PresidentialPardonForm(this->getTarget()));
}
