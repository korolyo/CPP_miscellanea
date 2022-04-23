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
	Form( std::string const &name, const int gradeSign, const int gradeExec );
	Form( Form const &copy );
	virtual ~Form();

	Form &operator=( Form const &form );

	std::string getName( void ) const;
	int			getGradeSign( void ) const;
	int			getGradeExec( void ) const;

	bool		isSigned( void ) const;
	void		setGrade( int grade );

	class GradeTooHighException;
	class GradeTooLowException;

	void	beSigned( Bureaucrat tom );

private:
	std::string const	_name;
	int	const			_gradeSign;
	int	const			_gradeExec;
	bool				_signed;
};

class Form::GradeTooHighException : public std::exception {
public:
	const char* what() const throw ();
};

class Form::GradeTooLowException : public std::exception {
public:
	const char *what() const throw ();
};

std::ostream & operator<<( std::ostream &o, Form const &form );

#endif
