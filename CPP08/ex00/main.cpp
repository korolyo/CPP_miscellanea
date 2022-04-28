#include "easyfind.hpp"
#include <list>
#include <vector>

int main()
{
	std::vector<int> vec;
	std::list<int> lst;

	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(5);

	lst.push_back(7);
	lst.push_back(8);
	lst.push_back(9);
	lst.push_back(11);
	try
	{
		easyfind(vec, 1);
		std::cout << "Integer is found" <<std::endl;
	}
	catch (char const * err)
	{
		std::cerr << err <<std::endl;
	}

	try
	{
		easyfind(lst, 11);
		std::cout << "Integer is found" <<std::endl;
	}
	catch (char const * err)
	{
		std::cerr << err <<std::endl;
	}
	return 0;
}
