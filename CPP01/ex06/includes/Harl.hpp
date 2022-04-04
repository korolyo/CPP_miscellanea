#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class	Harl {
public:
		Harl();
		~Harl();
		void	complain( std::string	level );

private:
		void		_debug( void );
		void		_info( void );
		void		_warning( void );
		void		_error( void );
};

#endif
