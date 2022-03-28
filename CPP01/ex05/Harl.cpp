#include <iostream>
#include "Harl.hpp"

Harl::Harl() { }
Harl::~Harl() { }

void	Harl::complain( std::string	level )
{
	if (level == "DEBUG")
		_debug();
	if (level == "INFO")
		_info();
	if (level == "WARNING")
		_warning();
	if (level == "ERROR")
		_error();
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