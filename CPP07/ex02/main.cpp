#include "Array.hpp"

int main(int, char**)
{
	std::cout << "Out of range test:" << std::endl;
	Array<int>numbers(8);
	try
	{
		std::cout << numbers[7] << std::endl;
	}
	catch (std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}
}
