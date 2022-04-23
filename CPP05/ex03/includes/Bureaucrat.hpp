#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Form.hpp"

class Form;

class Bureaucrat
{
public:
	Bureaucrat();
	Bureaucrat( std::string const &name, int grade );
	Bureaucrat( Bureaucrat const &bureaucrat );
	virtual ~Bureaucrat();

	Bureaucrat &operator=( Bureaucrat const &bureaucrat );

	std::string getName( void ) const;
	int			getGrade( void ) const;
	void		setGrade( int grade );

	void		incrementGrade( void );
	void		decrementGrade( void );

	class		GradeTooHighException;
	class		GradeTooLowException;

	void		signForm( Form &form ) const;
	void		executeForm( Form const &form ) const;

private:
	const std::string	_name;
	int					_grade;
};

class Bureaucrat::GradeTooHighException : public std::exception {
public:
	const char* what() const throw ();
};

class Bureaucrat::GradeTooLowException : public std::exception {
public:
	const char *what() const throw ();
};

std::ostream & operator<<( std::ostream &o, Bureaucrat const &bureaucrat);

#endif
