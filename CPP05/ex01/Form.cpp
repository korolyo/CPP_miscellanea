#include "Form.hpp"

//Constructors:

Form::Form() : _name("NewForm"), _gradeSign(150), _gradeExec(150), _signed(false) { }

Form::Form( std::string const &name, const int gradeSign, const int gradeExec ) :
		_name(name),
		_gradeSign(gradeSign),
		_gradeExec(gradeExec),
		_signed(false)
{
	if (gradeExec > 150 || gradeSign > 150)
		throw Form::GradeTooLowException();
	if (gradeExec < 1 || gradeSign < 1)
		throw Form::GradeTooHighException();
}

Form::Form( Form const &copy ) :
		_name(copy._name),
		_gradeSign(copy._gradeSign),
		_gradeExec(copy._gradeExec),
		_signed(copy._signed) { }

//Destructors:
Form::~Form() { }

std::string Form::getName( void ) const {
	return _name;
}

int			Form::getGradeSign( void ) const {
	return _gradeSign;
}

int		Form::getGradeExec( void ) const {
	return _gradeExec;
}

bool		Form::isSigned( void ) const {
	return _signed;
}

const char* Form::GradeTooHighException::what() const throw() {
	return "Grade is in it's maximum";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "Grade is in it's minimum";
}

void	Form::beSigned( Bureaucrat tom ) {
	if (tom.getGrade() > _gradeSign)
		throw Form::GradeTooLowException();
	else
		_signed = true;
}

std::ostream &operator<<( std::ostream &o, Form const &form) {
	o << form.getName() << " is " << (form.isSigned() ? "signed" : "unsigned");
	o << ", Form sign grade " << form.getGradeSign();
	o << ", Form exec grade " << form.getGradeExec() << std::endl;
	return o;
}
