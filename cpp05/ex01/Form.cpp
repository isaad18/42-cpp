#include "Form.hpp"

const char* Form::GradeTooLowException::what() const throw(){
	return "Grade Too Low";
}

const char* Form::GradeTooHighException::what() const throw(){
	return "Grade Too High";
}
