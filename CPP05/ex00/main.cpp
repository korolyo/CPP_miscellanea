#include "Bureaucrat.hpp"

int main( void ) {


	std::cout << "--- 1. Trying to create a bur with sign grade 0 ---" << std::endl;
		try
		{
			Bureaucrat a("a", 0);

			std::cout << a;
			std::cout << "if you can read this, there a mistake and final mark is 0" << std::endl;
		}
		catch(std::exception &ex2)
		{
			std::cout << "Exception caught: " << e.what() << std::endl;
		}
	std::cout << std::endl;

	std::cout << "--- 2. Trying to create a form with sign grade 151 ---" << std::endl;
		try
		{
			Bureaucrat a("a", 151);
		
			std::cout << a;
			std::cout << "if you can read this, there a mistake and final mark is 0" << std::endl;
		}
		catch(std::exception &ex1)
		{
			std::cout << "Exception caught: " << e.what() << std::endl;
		}
	std::cout << std::endl;

	std::cout << "--- 3. Trying to create a form and show it ---" << std::endl;
	Form coolForm("Form from 3", 20, 25);
	std::cout << coolForm;
	std::cout << std::endl;

	Bureaucrat	buro1;
	Bureaucrat	buro2 = Bureaucrat("yo", 150);
	Bureaucrat	buro3 = Bureaucrat("yo1", 1);

	buro2.decrementGrade();
	buro3.incrementGrade();
	buro1 = Bureaucrat("Buro", -4);

	return 0;
}
