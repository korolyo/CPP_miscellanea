#include <iostream>
#include "includes/Harl.hpp"

int main(int argc, char **argv)
{
	Harl harl = Harl();
	std::string info;
	std::string	level;

	if (argc < 2)
		level = "ERROR";
	if (argc > 1)
	{
		info = argv[1];
		if (info == "Hello")
			level = "INFO";
		else if (info == "1")
			level = "DEBUG";
		else
			level = "WARNING";
	}
	harl.complain(level);
	return (0);
}
