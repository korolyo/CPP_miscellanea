#include "Bureaucrat.hpp"

int main( void ) {


	std::cout << "--- 1. Trying to create a bur with grade 250 ---" << std::endl;
		try
		{
			Bureaucrat a("a", 250);

			std::cout << a;
		}
		catch(std::exception &ex2)
		{
			std::cout << "Exception caught: " << ex2.what() << std::endl;
		}
	std::cout << std::endl;

	std::cout << "--- 2. Trying to create a bur with grade 0 ---" << std::endl;
		try
		{
			Bureaucrat a("a", 0);
		
			std::cout << a;
		}
		catch(std::exception &ex1)
		{
			std::cout << "Exception caught: " << ex1.what() << std::endl;
		}
	std::cout << std::endl;

	std::cout << "--- 3. Trying to increment grade more than 1 ---" << std::endl;
		try
		{
			Bureaucrat b("Ingvar", 4);

			std::cout << b;
			std::cout << "Increment grade" << std::endl;
			b.incrementGrade();
			std::cout << b;
			std::cout << "Increment grade" << std::endl;
			b.incrementGrade();
			std::cout << b;
			std::cout << "Increment grade" << std::endl;
			b.incrementGrade();
			std::cout << b;
			std::cout << "Increment grade" << std::endl;
			b.incrementGrade();
			std::cout << b;
			std::cout << "Increment grade" << std::endl;
			b.incrementGrade();

		}
		catch(std::exception &ex1)
		{
			std::cout << "Exception: " << ex1.what() << std::endl;
		}
	std::cout << std::endl;

//	Bureaucrat	buro1;
//	Bureaucrat	buro2 = Bureaucrat("yo", 150);
//	Bureaucrat	buro3 = Bureaucrat("yo1", 1);
//
//	buro2.decrementGrade();
//	buro3.incrementGrade();
//	buro1 = Bureaucrat("Buro", -4);

	return 0;
}
