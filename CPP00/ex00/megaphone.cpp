#include <iostream>

int main(int ac, char **av)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (av[++i])
		{
			j = -1;
			while (av[i][++j])
			{
				c = toupper(av[i][j]);
				std::cout << c;
			}
		}
		std::cout << std::endl;
	}
	return 0;
}
