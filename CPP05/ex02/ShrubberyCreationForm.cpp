#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm( std::string const &target ) : Form("Shrubbery", 145, 137, target) { }

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const &copy) {
	*this = copy;
}

ShrubberyCreationForm::~ShrubberyCreationForm() { }

ShrubberyCreationForm	&ShrubberyCreationForm::operator=( ShrubberyCreationForm const &shrub ) {
	std::string something = shrub.getName();
	return *this;
}

void	ShrubberyCreationForm::execute( Bureaucrat const &executor ) const {
	if (!this->isSigned())
		throw Form::FormNotSignedException();
	if (executor.getGrade() > this->getGradeExec() )
		throw Form::GradeTooLowException();

	std::ofstream	newFs;
	std::string		fileName = this->getTarget() + "_shrubbery";

	newFs.open(fileName.c_str());
	if (!(newFs.good()))
	{
		std::cout << "There has been an error opening the file " << fileName << std::endl;
	}
	newFs << "   @@@@@@@@@@                " << std::endl;
	newFs << "   @__%\\ @@@@@             " << std::endl;
	newFs << "  ##@@ |% \\ /@@@@           " << std::endl;
	newFs << "    @_@_ \\__@'@@            " << std::endl;
	newFs << "         //                  " << std::endl;
	newFs << "         ||                  " << std::endl;
	newFs << " ________\\_________         " << std::endl;
}
