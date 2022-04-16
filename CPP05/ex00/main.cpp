#include "Bureaucrat.hpp"

int main( void ) {

	Bureaucrat	buro1;
	Bureaucrat	buro2 = Bureaucrat("yo", 150);
	Bureaucrat	buro3 = Bureaucrat("yo1", 1);

	buro2.decrementGrade();
	buro3.incrementGrade();
	buro1 = Bureaucrat("Buro", -4);

	return 0;
}
