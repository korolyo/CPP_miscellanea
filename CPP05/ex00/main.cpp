#include "Bureaucrat.hpp"

int main( void ) {

	Bureaucrat jorgen;

	jorgen.setGrade(150);
	jorgen.decrementGrade();
	jorgen.decrementGrade();

	return 0;
}
