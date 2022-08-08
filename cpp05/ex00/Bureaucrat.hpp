#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>

class Bureaucrat {
	private:
		const std::string name;
		int grade;
	public:
		Bureaucrat(const std::string &name, int grade);
		virtual ~Bureaucrat();
		std::string getName() const;
		int getGrade() const;
		void GradeTooHighException();
		void GradeTooLowException();
};

std::ostream &operator<<(std::ostream &s, Bureaucrat const &_new);

#endif
