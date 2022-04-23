#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public Form {

public:
	ShrubberyCreationForm( std::string const &target );
	ShrubberyCreationForm( ShrubberyCreationForm const &copy );
	virtual ~ShrubberyCreationForm();

	ShrubberyCreationForm & operator=( ShrubberyCreationForm const & shrub );

	void	execute( Bureaucrat const &executor ) const;
	Form	*clone() const;

private:
	ShrubberyCreationForm();

};

#endif
