#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("default"), grade(150){
	std::cout << "Bureaucrat: " << name << ", has been created with Grade " << grade << "." << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade): name(name){
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
		std::cout << "No exception needed for this grade " << grade << std::endl;
	this->grade = grade;
	std::cout << "Bureaucrat: " << name << ", has been created with Grade " << grade << "." << std::endl;

}

const char* Bureaucrat::GradeTooLowException::what() const throw(){return "Grade Too Low";}

const char* Bureaucrat::GradeTooHighException::what() const throw(){return "Grade Too High";}

Bureaucrat::~Bureaucrat(){
	std::cout << "Bureaucrat: " << this->name << ", of Grade " << this->grade << " has been destroyed."<< std::endl;
}

std::string Bureaucrat::getName() const{
	return this->name;
}

int Bureaucrat::getGrade() const{
	return this->grade;
}

void Bureaucrat::incGrade(){
	if (this->grade - 1 < 1)
		throw GradeTooHighException();
	std::cout << "Incremented successfully." << std::endl;
	this->grade--;
}

void Bureaucrat::decGrade(){
	if (this->grade + 1 > 150)
		throw GradeTooLowException();
	std::cout << "Decremented successfully." << std::endl;
	this->grade++;
}

std::ostream &operator<<(std::ostream &s, Bureaucrat const &_new){
	s << _new.getName() << " bureaucrat grade " << _new.getGrade();
	return s;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other){
	const_cast<std::string&>(this->name) = other.getName();
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
		std::cout << "No exception needed for this grade " << grade << std::endl;
	this->grade = other.getGrade();
	return *this;
}

void Bureaucrat::signForm(Form &F){
	try{
		F.beSigned(*this);
		std::cout << "Form has been signed successfully" << std::endl;
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(Form const & form){
	try{
		form.execute(*this);
		std::cout << "Form has been executed successfully by Bureaucrat" << std::endl;
	}
	catch (Form::GradeTooLowException &e){
		std::cerr << "Bureaucrat failed to execute for because of the low grade" << std::endl;
	}
	catch (Form::FormNotSignedException &e){
		std::cerr << "Bureaucrat failed to execute for because the Form is not signed" << std::endl;
	}
}
