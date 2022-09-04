#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class Bureaucrat;
class Form;
class Intern{
	private:
		std::string target;
		std::string form;
	public:
		Intern();
		Intern &operator=(const Intern& other);
		virtual ~Intern();
		Form*	makeShrubbery(std::string);
		Form*	makeRobotomy(std::string);
		Form*	makePresidential(std::string);
		class InternNotFoundException: public std::exception
		{
			const char* what() const throw();
		};
		Form *makeForm(std::string form, std::string target);
		typedef Form *(Intern::*ptr)(std::string);
};

#endif
