#include "Convert.hpp"

int main( int argc, char **argv ) {

std::string const   input(argv[1]);
int                 i;
char                c;
float               f;
double              d;

if (argc != 2) {
    std::cout << "Error: wrong number of args" << std::endl;
    exit(1);
    }
else {
    i = std::stoi(input);
    c = (char)std::stoi(input);
    f = (float)stof(input);
    d = (double)stod(input);
    std::cout << "int: " << i << std::endl;
    std::cout << "char: " << c << std::endl;
    std::cout << "float: " << f << "f" << std::endl;
    std::cout << "double: " << d << std::endl;
    }
return 0;
}

