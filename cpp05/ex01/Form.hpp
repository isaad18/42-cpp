#ifndef FORM_HPP
#define FORM_HPP

#include "string"
#include "iostream"
#include "exception"
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form{
	private:
		const std::string name;
		bool _signed;
		const int s_rate;
		const int x_rate;
	public:
		Form();
		Form(std::string name, int s_rate, int x_rate);
		Form &operator=(const Form& other);
		int get_s_rate() const;
		int get_x_rate() const;
		bool get__signed() const;
		std::string get_name() const;
		void beSigned(Bureaucrat&);
		class GradeTooHighException: public std::exception
		{
			const char* what() const throw();
		};
		class GradeTooLowException: public std::exception
		{
			const char* what() const throw();
		};
};
std::ostream &operator<<(std::ostream &s, Form const &_new);

#endif
