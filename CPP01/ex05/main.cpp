
#include "Harl.hpp"

int main( void )
{
	Harl harl = Harl();
	std::string info;
	std::string	level;

	level = "WARNING";
	harl.complain(level);
	level = "INFO";
	harl.complain(level);
	level = "DEBUG";
	harl.complain(level);
	level = "ERROR";
	harl.complain(level);
	return (0);
}
