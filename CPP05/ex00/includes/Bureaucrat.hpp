#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

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
