#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
	std::string	filename;
	std::string	line;
	std::string	s1 = argv[2];
	std::string *s_buf = &s1;
	std::string	s2 = argv[3];
	int			pos;

	if (argc != 4)
	{
		std::cout << "Wrong number of arguments! Try again\n " << std::endl;
		exit(1);
	}
	filename = argv[1];

	std::ifstream input(filename);
	std::ofstream output(filename + ".replace");
	while (std::getline(input, line))
	{
		if ((pos = line.find(*s_buf)) != std::string::npos)
		{
			*s_buf = s2;
			std::cout << line << std::endl;
		}
		output << line << std::endl;
	}
	return 0;
}
