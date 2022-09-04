#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <string>
#include <exception>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include<iostream>
#include<fstream>
#include<sstream>

class Bureaucrat;
class RobotomyRequestForm : public Form{
	private:
		RobotomyRequestForm();
		const std::string target;
	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm &operator=(const RobotomyRequestForm& other);
		virtual ~RobotomyRequestForm();
		std::string get_target() const;
		void execute(Bureaucrat const & executor) const;
};
std::ostream &operator<<(std::ostream &s, RobotomyRequestForm const &_new);

#endif
