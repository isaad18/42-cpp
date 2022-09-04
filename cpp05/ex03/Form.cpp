#include "Form.hpp"

Form::Form(): name("Default"), _signed(false), s_rate(75), x_rate(75){
	std::cout << "Default Form has been constructed" << std::endl;
}

Form::Form(std::string name, int s_rate, int x_rate): name(name), _signed(false), s_rate(s_rate), x_rate(x_rate){
	if (this->x_rate > 150 || this->s_rate > 150)
		throw GradeTooLowException();
	if (this->x_rate < 1 || this->s_rate < 1)
		throw GradeTooHighException();
	std::cout << name << " Form has been constructed" << std::endl;
}

Form &Form::operator=(const Form& other){
	const_cast<std::string&>(this->name) = other.name;
	const_cast<int&>(this->x_rate) = other.x_rate;
	const_cast<int&>(this->s_rate) = other.s_rate;
	return (*this);
}

Form::~Form(){
	std::cout << "Form for " << this->name << " has been destroyed" << std::endl;
}

int Form::get_s_rate() const{
	return (s_rate);
}

int Form::get_x_rate() const{
	return (x_rate);
}

std::string Form::get_name() const{
	return (name);
}

bool Form::get__signed() const{
	return (_signed);
}

const char* Form::GradeTooLowException::what() const throw(){
	return "Form Grade Too Low";
}

const char* Form::GradeTooHighException::what() const throw(){
	return "Form Grade Too High";
}

const char* Form::FormNotSignedException::what() const throw(){
	return "Form Not Signed";
}

void Form::beSigned(Bureaucrat &B){
	if (B.getGrade() < this->s_rate)
	{
		this->_signed = true;
		std::cout << "Form for " << B.getName() << " has been signed" << std::endl;
	}
	else
		throw GradeTooLowException();
}

std::ostream &operator<<(std::ostream &s, Form const &_new){
	s << _new.get_name() << " Form of sign rate " << _new.get_s_rate() << ", execute rate " << _new.get_x_rate();
	return s;
}
