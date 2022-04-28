#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>

Base * generate()
{
	std::srand(std::time(0));
	int randDigit = std::rand() % 3;
	switch (randDigit)
	{
		case 0:
			std::cout << "A class - was created" << std::endl;
			return new A();
		case 1:
			std::cout << "B class - was created" << std::endl;
			return new B();
		case 2:
			std::cout << "C class - was created" << std::endl;
			return new C();
		default:
			std::cout << "Base class - was created" << std::endl;
			return new Base();
	}
}

void identify(Base* p)
{
	A* A_ptr = dynamic_cast<A*>(p);
	if (A_ptr)
		std::cout << "The type of the object pointed to by: A class" << std::endl;
	B* B_ptr = dynamic_cast<B*>(p);
	if (B_ptr)
		std::cout << "The type of the object pointed to by: B class" << std::endl;
	C* C_ptr = dynamic_cast<C*>(p);
	if (C_ptr)
		std::cout << "The type of the object pointed to by: C class" << std::endl;
}

void  identify(Base& p)
{
	try
	{
		A& A_ref = dynamic_cast<A&>(p);
		(void) A_ref;
		std::cout << "The type of the object pointed to by: A class" << std::endl;
	}
	catch (const std::exception& ex) {}
	try
	{
		B& B_ref = dynamic_cast<B&>(p);
		(void) B_ref;
		std::cout << "The type of the object pointed to by: B class" << std::endl;
	}
	catch (const std::exception& ex) {}
	try
	{
		C& C_ref = dynamic_cast<C&>(p);
		(void) C_ref;
		std::cout << "The type of the object pointed to by: C class" << std::endl;
	}
	catch (const std::exception& ex) {}
}
