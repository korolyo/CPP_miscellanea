#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include <string>
# include <iostream>
# include <exception>

class	Bureaucrat;

class	Form
{
public:
	Form();
	Form( std::string const &name, const int gradeSign, const int gradeExec, std::string const &target );
	Form( Form const &copy );
	virtual ~Form();

	Form &operator=( Form const &form );

	std::string getName( void ) const;
	int			getGradeSign( void ) const;
	int			getGradeExec( void ) const;
	std::string	getTarget() const;

	bool		isSigned( void ) const;
	void		setGrade( int grade );

	class GradeTooHighException;
	class GradeTooLowException;
	class FormNotSignedException;

	void	beSigned( Bureaucrat tom );
	virtual void execute( Bureaucrat const &executor ) const = 0;
	virtual	Form *clone() const = 0;

private:
	std::string const	_name;
	int	const			_gradeSign;
	int	const			_gradeExec;
	bool				_signed;
	std::string			_target;
};

class Form::GradeTooHighException : public std::exception {
public:
	const char* what() const throw ();
};

class Form::GradeTooLowException : public std::exception {
public:
	const char *what() const throw ();
};

class Form::FormNotSignedException : public std::exception {
public:
	const char* what() const throw ();
};

std::ostream & operator<<( std::ostream &o, Form const &form );

#endif
