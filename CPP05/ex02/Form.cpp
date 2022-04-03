#include "Bureaucrat.hpp"
#include "Form.hpp"

Form::Form( std::string name, const int gradeSign, const int gradeExec ) :
		_name(name),
		_gradeSign(gradeSign),
		_gradeExec(gradeExec),
		_signed(false) { }

Form::~Form() { }

Form::Form( Form const &form ) :
		_name(form._name),
		_gradeSign(form._gradeSign),
		_gradeExec(form._gradeExec),
		_signed(form._signed) { }

std::string Form::getName( void ) const {
	return this->_name;
}

int			Form::getGradeSign( void ) const {
	return _gradeSign;
}

int		Form::getGradeExec( void ) const {
	return _gradeExec;
}

bool		Form::getSigned( void ) {
	return _signed;
}

const char* Form::GradeTooHighException::what() const throw() {
	return "Grade is in it's maximum";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "Grade is in it's minimum";
}

void	Form::beSigned( Bureaucrat &tom ) {
	int	reqGrade = 0;
	try {
		if (tom.getGrade() >= reqGrade)
			throw Form::GradeTooLowException();
		this->_signed = true;
	}
	catch (GradeTooLowException &ex2) {
		std::cerr << "Can't sign. Reason: " << ex2.what() << std::endl;
	}
}

std::ostream & operator<<( std::ostream & o, Form const & form) {
	o << form.getName() << ", Form sign grade " << form.getGradeSign();
	o << ", Form exec grade " << form.getGradeExec() << std::endl;
	return o;
}