#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

class Bureaucrat
{
public:
	Bureaucrat();
	Bureaucrat( Bureaucrat const &bureaucrat );
	~Bureaucrat();

	Bureaucrat & operator=( Bureaucrat const &bureaucrat );

	std::string getName( void ) const;
	int			getGrade( void ) const;
	void		setGrade( int grade );

	void	incrementGrade( void );
	void	decrementGrade( void );

	class GradeTooHighException;
	class GradeTooLowException;

	void	signForm( Form &form );
	void	executeForm( Form const &form );

private:
	std::string const	_name;
	int					_grade;

};

class Bureaucrat::GradeTooHighException : public std::exception {
public:

	virtual const char* what() const throw ();
};

class Bureaucrat::GradeTooLowException : public std::exception {
public:

	virtual const char *what() const throw ();
};

std::ostream & operator<<( std::ostream & o, Bureaucrat const & bureaucrat);

#endif
