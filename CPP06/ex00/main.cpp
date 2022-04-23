#include "Convert.hpp"

int main( int argc, char **av ) {

	int                 i;
	char                c;
	float               f;
	double              d;

	if (argc != 2) {
	    std::cout << "Error: wrong number of args" << std::endl;
	    exit(1);
	    }
	if (av[1][0] == '\0')
	{
		std::cout << "Error: invalid argument." << std::endl;
		return 2;
	}

	Convert converter;
	std::string input = static_cast<std::string>(av[1]);
	std::string type = converter.checkType(input);

	if (type == "int") {
		i = std::atoi(input.c_str());
		converter.conv(i);
	}
	else if (type == "float") {
		f = std::atof(input.c_str());
		converter.conv(f);
	}
	else if (type == "double") {
		d = static_cast<double>(std::atof(input.c_str()));
		converter.conv(d);
	}
	else if (type == "char") {
		c = input.at(0);
		converter.conv(c);
	}
	else if (type == "invalid") {
		std::cout << "Invalid character input" << std::endl;
	}
	return 0;
}
