#include "Bureaucrat.hpp"
#include "Form.hpp"

int main( void ) {

	std::cout << "--- 1. Trying to create a form with sign grade 0 ---" << std::endl;
		try
		{
			Form a("a", 0, 1);

			std::cout << a;
			std::cout << "if you can read this, there a mistake and final mark is 0" << std::endl;
		}
		catch(std::exception &e)
		{
			std::cout << "Exception caught: " << e.what() << std::endl;
		}
	std::cout << std::endl;

	std::cout << "--- 2. Trying to create a form with sign grade 151 ---" << std::endl;
		try
		{
			Form a("a", 0, 151);

			std::cout << a;
			std::cout << "if you can read this, there a mistake and final mark is 0" << std::endl;
		}
		catch(std::exception &e)
		{
			std::cout << "Exception caught: " << e.what() << std::endl;
		}
	std::cout << std::endl;

	std::cout << "--- 3. Trying to create a form and show it ---" << std::endl;
			Form coolForm("Form from 3", 20, 25);
			std::cout << coolForm;
	std::cout << std::endl;

	std::cout << "--- 4. Creating a valid Bureaucrat and describing it ---" << std::endl;
	Bureaucrat bob("Bobby", 14);
	std::cout << bob;
	std::cout << std::endl;

	std::cout << "--- 5. Bobby tries to sign a form too high for him ---" << std::endl;
	bob.signForm(coolForm);
	std::cout << bob;
	std::cout << coolForm;
	std::cout << std::endl;

	std::cout << "--- 6		. Bobby gets a couple promotion and tries again ---" << std::endl;
	bob.incrementGrade();
	std::cout << bob;
	bob.incrementGrade();
	std::cout << bob;
	bob.incrementGrade();
	std::cout << bob;
	bob.incrementGrade();
	std::cout << bob;
	bob.signForm(coolForm);
	std::cout << coolForm;
	std::cout << std::endl;

	return 0;
}
