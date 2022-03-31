#include <iostream>
#include <fstream>

std::string	ft_replace(std::string line, int pos, int len, std::string s2)
{
	std::string	before;
	std::string after;
	std::string newline;

	before = line.substr(0, pos);
	after = line.substr(pos + len, line.length() - pos + len);
	newline = before + s2 + after;
	return (newline);
}

int main(int argc, char **argv)
{
	std::string	filename;
	std::string	line;
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];
	size_t		pos;

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
		if ((pos = line.find(s1)) != std::string::npos)
			line = ft_replace(line, pos, s1.length(), s2);
		output << line << std::endl;
	}
	return 0;
}
