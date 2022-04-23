#include "Convert.hpp"
#include <string>
#include <limits.h>
#include <iomanip>

Convert::Convert() { }

Convert::Convert( Convert const &copy ) {
	*this = copy ;
}

Convert::~Convert() { }

Convert	&Convert::operator=( Convert const &conv ) {
	if (this == &conv )
		return (*this);
	return *this;
}

std::string	Convert::checkType(std::string input) const {
	if (input == "-inf" || input == "+inf" || input == "nan")
		return "double";
	else if (input.length() > 3 && input.at(input.length() - 1) == 'f')
		return "float";
	else if (input.length() > 2 && input.find('.') != std::string::npos)
		return "double";
	else if (input.length() == 1)
	{
		char c = input.at(0);
		if (c >= '0' && c <= '9')
			return "int";
		else if (c >= 32 && c <= 126)
			return "char";
		else
			return "invalid";
	}
	else
		return "int";
}

void Convert::conv( char c ) const {
	std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(c) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(c) << std::endl;
}

void Convert::conv( int i ) const {
	if (i > 256 || i < 0)
		std::cout << "char: impossible" << std::endl;
	else if (i > 126 || i < 32)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;

	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(i) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(i) << std::endl;
}

void Convert::conv( float f ) const {
	if (f > 256 || f < 0 || f != f)
		std::cout << "char: impossible" << std::endl;
	else if (f > 126 || f < 32)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;

	if (f > INT_MAX || f < INT_MIN || f != f)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(f) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(f) << std::endl;
}

void Convert::conv( double d ) const {
	if (d > 256 || d < 0 || d != d)
		std::cout << "char: impossible" << std::endl;
	else if (d > 126 || d < 32)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;

	if (d > INT_MAX || d < INT_MIN || d != d)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(d) << std::endl;

	if (d > __FLT_MAX__ || d < __FLT_MIN__)
		std::cout << "float: impossible" << std::endl;
	else
		std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(d) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
}
