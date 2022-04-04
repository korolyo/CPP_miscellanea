
#include "Harl.hpp"

Harl::Harl() { }
Harl::~Harl() { }

void	Harl::complain( std::string	level )
{
	typedef void (Harl::*HarlFunc)(void);
	std::string levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR"};
	HarlFunc funcs[4] = { &Harl::_debug,
						  &Harl::_info,
						  &Harl::_warning,
						  &Harl::_error };
	for (int i = 0; i < 4; i++) {
		if (level == levels[i])
		{
			HarlFunc func = funcs[i];
			(this->*func)();
			return;
		}
	}
}

void		Harl::_debug( void )
{
	std::cout << "Debug: Living in Russia is tought." << std::endl;
}

void		Harl::_info( void )
{
	std::cout << "Info: I have some friends in Ukraine" << std::endl;
}

void		Harl::_warning( void )
{
	std::cout << "Warning: Russia have nuclear power" << std::endl;
}

void		Harl::_error( void )
{
	std::cout << "Error: That is our karma" << std::endl;
}
