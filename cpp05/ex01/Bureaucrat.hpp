#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>

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
};
std::ostream &operator<<(std::ostream &s, Bureaucrat const &_new);


#endif
