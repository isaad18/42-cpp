#include "Intern.hpp"

Intern &Intern::operator=(const Intern &other){
	this->form = other.form;
	this->target = other.target;
	return *this;
}

Intern::Intern(): target("Default"), form("Default"){
	std::cout << "Default Intern has been constructed" << std::endl;
}

Intern::~Intern(){
	std::cout << "Default Intern has been destructed" << std::endl;
}

Form*		Intern::makeShrubbery(std::string target){ return new ShrubberyCreationForm(target);}

Form*		Intern::makeRobotomy(std::string target){ return new RobotomyRequestForm(target);}

Form*		Intern::makePresidential(std::string target){ return new PresidentialPardonForm(target);}

const char* Intern::InternNotFoundException::what() const throw(){
	return "no Form Found";
}

Form* 		Intern::makeForm(std::string form, std::string target)
{
	std::string formName[3] = {"Shrubbery Creation", "Robotomy Request", "Presidential Pardon"};
	ptr funcPointers[3] = {&Intern::makeShrubbery, &Intern::makeRobotomy, &Intern::makePresidential};
	try
	{
		for(int i = 0; i < 3; i++)
		{
			if(formName[i] == form)
				return(	(this->*funcPointers[i])(target));
		}
		throw InternNotFoundException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return NULL;
	}
}
