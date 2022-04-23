#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class RobotomyRequestForm : public Form {

public:

	RobotomyRequestForm( std::string const &target );
	RobotomyRequestForm( RobotomyRequestForm const &copy );
	virtual ~RobotomyRequestForm();

	RobotomyRequestForm &operator=( RobotomyRequestForm  const &robot );

	void	execute( Bureaucrat const &executor ) const;

private:
	RobotomyRequestForm();

};

#endif
