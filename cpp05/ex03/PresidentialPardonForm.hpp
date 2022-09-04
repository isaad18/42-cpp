#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <string>
#include <exception>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include<iostream>
#include<fstream>
#include<sstream>

class Bureaucrat;
class PresidentialPardonForm : public Form{
	private:
		PresidentialPardonForm();
		const std::string target;
	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm &operator=(const PresidentialPardonForm& other);
		virtual ~PresidentialPardonForm();
		std::string get_target() const;
		void execute(Bureaucrat const & executor) const;
};

#endif
