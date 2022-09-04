#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <string>
#include <exception>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include<iostream>
#include<fstream>
#include<sstream>

class Bureaucrat;
class ShrubberyCreationForm : public Form{
	private:
		ShrubberyCreationForm();
		const std::string target;
	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm& other);
		virtual ~ShrubberyCreationForm();
		std::string get_target() const;
		void execute(Bureaucrat const & executor) const;
};

#endif
