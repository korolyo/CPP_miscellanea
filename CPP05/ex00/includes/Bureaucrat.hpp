#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class GradeTooHighException : public std::exception {
	virtual std::string *what() const {
		return "Grade is in it's maximum";
	}
};

class GradeTooLowException : public std::exception {
	virtual std::string *what() const {
		return "Grade is in it's maximum";
	}
};

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

private:
	std::string const	_name;
	int					_grade;
};

std::ostream & operator<<( std::ostream & o, Bureaucrat const & bureaucrat);

#endif
