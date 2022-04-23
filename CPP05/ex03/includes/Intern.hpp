#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include <string>

class	Intern {

public:
	Intern();
	Intern( Intern const &copy );
	virtual ~Intern();

	Intern &operator=( Intern const &intern );

	Form	*makeForm( std::string const &formName, std::string const &target ) const;
};

#endif
