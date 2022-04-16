#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <exception>

class	Bureaucrat;
class	Form
{
public:
	Form( std::string name, const int gradeSign, const int gradeExec );
	Form( Form const &form );
	~Form();

	Form & operator=( Form const &form );

	std::string getName( void ) const;
	int			getGradeSign( void ) const;
	int			getGradeExec( void ) const;
	bool		getSigned( void );
	void		setGrade( int grade );

	class GradeTooHighException;
	class GradeTooLowException;

	void	checkSignedGrade( void );
	void	checkExecGrade( void );

	void	beSigned( Bureaucrat const &tom );

private:
	std::string const	_name;
	int	const			_gradeSign;
	int	const			_gradeExec;
	bool				_signed;
};

class Form::GradeTooHighException : public std::exception {
public:

	virtual const char* what() const throw ();
};

class Form::GradeTooLowException : public std::exception {
public:

	virtual const char *what() const throw ();
};

std::ostream & operator<<( std::ostream & o, Form const & form );

#endif
