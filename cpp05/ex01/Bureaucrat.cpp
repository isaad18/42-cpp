#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name, int grade){
	this->name = name;
	this->grade = grade;
	std::cout << " Bureaucrat: " << name << ", has been created with Grade " << grade << "." << std::endl;
	try
	{
		if (this->grade > 0 && this->grade < 151)
			std::cout << "No exception needed for this grade " << this->grade << std::endl;
		else if (this->grade < 1)
			throw -2;
		else if (this->grade > 150)
			throw -1;
	}
	catch(int myNum)
	{
		if (myNum == -1)
			Bureaucrat::GradeTooLowException();
		else if (myNum == -2)
			Bureaucrat::GradeTooHighException();
	}

}

void Bureaucrat::GradeTooHighException() const{
	std::cout << "Bureaucrat: Grade too high exception." << std::endl;
}

void Bureaucrat::GradeTooLowException() const{
	std::cout << "Bureaucrat: Grade too Low exception." << std::endl;
}

Bureaucrat::~Bureaucrat(){
	std::cout << " Bureaucrat: " << this->name << ", of Grade " << this->grade << " has been destroyed."<< std::endl;
}

std::string Bureaucrat::getName() const{
	return this->name;
}

int Bureaucrat::getGrade() const{
	return this->grade;
}

void Bureaucrat::incrementGrade(){
	std::cout << "Incremented successfully." << std::endl;
	this->grade--;
}

void Bureaucrat::decrementGrade(){
	std::cout << "Decremented successfully." << std::endl;
	this->grade++;
}

std::ostream &operator<<(std::ostream &s, Bureaucrat const &_new){
	s << _new.getName() << " bureaucrat grade " << _new.getGrade();
	return s;
}
