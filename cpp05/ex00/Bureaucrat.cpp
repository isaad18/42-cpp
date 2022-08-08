#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name, int grade){
	this->name = name;
	this->grade = grade;
	std::cout << " Bureaucrat: " << name << ", has been created with Grade " << grade << "." << std::endl;
}

Bureaucrat::~Bureaucrat(){
	std::cout << " Bureaucrat: " << name << ", of Grade " << grade << " has been destroyed."<< std::endl;
}

std::string Bureaucrat::getName() const{
	return this->name;
}

int Bureaucrat::getGrade() const{
	return this->grade;
}


