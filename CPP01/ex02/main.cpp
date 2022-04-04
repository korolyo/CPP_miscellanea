#include <iostream>

int main()
{
	std::string 	brain;

	brain = "HI THIS IS BRAIN";
	std::string*	brainPTR = &brain;
	std::string& 	brainREF = brain;

	std::cout << "Mem addr of a brain : " << &brain << std::endl;
	std::cout << "Mem addr of a brainPTR : "  << &brainPTR << std::endl;
	std::cout << "Mem addr of a brainREF : "  << &brainREF << std::endl;

	std::cout << "Value of a brain : " << brain << std::endl;
	std::cout << "Value of a brainPTR : "  << *brainPTR << std::endl;
	std::cout << "Value of a brainREF : "  << brainREF << std::endl;
	return (0);
}
