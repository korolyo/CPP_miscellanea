#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class PresidentialPardonForm : public Form {

public:

	PresidentialPardonForm( std::string const &target );
	PresidentialPardonForm( PresidentialPardonForm const &copy );
	virtual ~PresidentialPardonForm();

	PresidentialPardonForm &operator=( PresidentialPardonForm const &rhs );

	void	execute( Bureaucrat const &executor ) const;
	Form	*clone() const;

private:
	PresidentialPardonForm(); // can't create this class without a target

};

#endif
