#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm( std::string const &target ) : Form("Robotomy request", 72, 45, target) { }

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const &copy) {
	*this = copy;
}

RobotomyRequestForm::~RobotomyRequestForm() { }

RobotomyRequestForm	&RobotomyRequestForm::operator=( RobotomyRequestForm const &robot ) {
	std::string something = robot.getName();
	return *this;
}

void	RobotomyRequestForm::execute( Bureaucrat const &executor ) const {
	if (!this->isSigned())
		throw Form::FormNotSignedException();
	if (executor.getGrade() > this->getGradeExec() )
		throw Form::GradeTooLowException();

	std::cout << "BZZZZZZZ.... (Drilling noises) ";
	if (rand() % 2)
		std::cout << this->getTarget() << " has been lobotomized successfully" << std::endl;
	else
		std::cout << this->getTarget() << " hasn't been lobotomized yet... " << std::endl;
}
