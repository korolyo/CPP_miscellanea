#include <iostream>

int main()
{
	std::string 	brain;
	brain = "HI THIS IS BRAIN";

	std::string*	brainPtr = &brain;
	std::string& 	brainRef = brain;
	std::cout << "Mem addr of a brain : " << &brain << std::endl;
	std::cout << "Mem addr of a brain ref : "  << &brainRef << std::endl;
	std::cout << "Mem addr of a brain ptr : "  << &brainPtr << std::endl;

	std::cout << "Value of a brain : " << brain << std::endl;
	std::cout << "Value of a brain ref : "  << brainRef << std::endl;
	std::cout << "Value of a brain ptr : "  << brainPtr << std::endl;
	return (0);
}
