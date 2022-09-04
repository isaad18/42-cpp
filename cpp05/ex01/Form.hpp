#ifndef FORM_HPP
#define FORM_HPP

#include "string"
#include "iostream"
#include "exception"

class Form{
	private:
		const std::string name;
		bool _signed;
		const int s_rate;
		const int x_rate
	public:
		int get_s_rate() const;
		int get_s_rate() const;
		int get_s_rate() const;
		class GradeTooHighException: public std::exception
		{
			const char* what() const throw();
		};
		class GradeTooLowException: public std::exception
		{
			const char* what() const throw();
		};
};

#endif
