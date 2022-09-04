#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	Intern someRandomIntern;
	Form* rrf;
	rrf = someRandomIntern.makeForm("Robotomy Request", "Bender");

	Bureaucrat ber1("Moa", 1);
	if(rrf)
	{
		ber1.signForm(*rrf);
		ber1.executeForm(*rrf);
	}

	delete rrf;
}
