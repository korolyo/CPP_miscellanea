#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() { }

Intern::Intern(Intern const &copy) {
	*this = copy;
}

Intern::~Intern() { }

Intern	&Intern::operator=(Intern const &intern) {
	if (this == &intern)
		return *this;
	return *this;
}

Form	*Intern::makeForm(std::string const &formName, std::string const &target) const {
	ShrubberyCreationForm shrub(target);
	RobotomyRequestForm robot(target);
	PresidentialPardonForm pres(target);

	Form *formArray[] = {&shrub, &robot, &pres};

	for (int i = 0; i <= 2; i++)
	{
		if (formName == formArray[i]->getName())
		{
			std::cout << "Intern creates " << formName << " form." << std::endl;
			return formArray[i]->clone();
		}
	}
	std::cout << "Error: Intern doesn't recognize this form." << std::endl;
	return NULL;
}
