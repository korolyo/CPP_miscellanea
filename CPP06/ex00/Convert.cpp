#include <stream>

int isInt(std::string input)
{
    if (every char is num or -)
        return 1;
    return 0;
}

int isFloat(std::string input) {
    if (everychar is num + dot +  char "f" at the end)
        return 1;
    return 0;
}

int isDouble(std::string input) {
    if (every char is num + dot + there is no "f")
        return 1;
    return 0;
}

int isChar(std::string input) {
    if (its char)
        return 1;
    return 0;
}

class Convert {
std::string input;
int         i_input;
float       f_input;
double      d_input;
char        c_input;

if (argc < 2)
    std::cout << "Wrong input, write something.." << std::endl;
else
    input = argv[1];
switch {
    case(isInt(input)):
        i_input = std::stoi(input);
        break ;
    case(isFloat(input)):
        f_input = std::stof(input);
        break ;
    case (isDouble(input)):
        d_input = std::stod(input);
        break ;
    case (isChar(input))
        c_input = &input[0];
        break ;
}
}


