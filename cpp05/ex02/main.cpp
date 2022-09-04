#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{

	// Form	f;
	// ShrubberyCreationForm s("FORM", 11, 22);
	// s.getName();

	ShrubberyCreationForm shrubbery("S");
	RobotomyRequestForm robotomy("R");
	PresidentialPardonForm presidential("P");
	Bureaucrat ber1("shsh", 1);
	Bureaucrat ber2("shsh2", 146);
	Bureaucrat ber3("shsh3", 6);
	Bureaucrat ber4("shsh4", 26);

	// ber1.signForm(shrubbery);
	// ber1.executeForm(shrubbery);
	// ber2.signForm(shrubbery);
	// ber2.executeForm(shrubbery);

	ber1.signForm(robotomy);
	ber1.executeForm(robotomy);
	ber1.signForm(presidential);
	ber3.executeForm(presidential);
	// ber2.signForm(robotomy);
	// ber2.executeForm(robotomy);
}
