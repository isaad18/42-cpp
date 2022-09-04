#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat {
	private:
		const std::string name;
		int grade;
	public:
		Bureaucrat(const std::string &name, int grade);
		Bureaucrat();
		virtual ~Bureaucrat();
		std::string getName() const;
		int getGrade() const;
		void incGrade();
		void decGrade();
		Bureaucrat &operator=(const Bureaucrat &other);
		class GradeTooHighException: public std::exception
		{
			const char* what() const throw();
		};
		class GradeTooLowException: public std::exception
		{
			const char* what() const throw();
		};
		void signForm(Form &F);
		void executeForm(Form const & form);
};
std::ostream &operator<<(std::ostream &s, Bureaucrat const &_new);


#endif
