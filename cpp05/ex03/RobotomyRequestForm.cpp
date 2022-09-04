#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form("Default", 72, 45), target("Default"){
	std::cout << "RobotomyRequestForm has created a " << target << " target" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("Default", 72, 45), target(target){
	std::cout << "RobotomyRequestForm copy constructor has created a " << target << " target" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm& other){
	const_cast<std::string&>(target) = other.target;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(){
	std::cout << "RobotomyRequestForm has destroyed a " << target << " target" << std::endl;
}

std::string RobotomyRequestForm::get_target() const{
	return (this->target);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	if (this->get__signed()){
		if (executor.getGrade() <= this->get_x_rate()){
			std::cout << "!!" << "SOME DRILLING NOISES" << "!!" << std::endl;
			if ((rand() % 100) <= 50)
				std::cout << this->target << "has been robotomized successfully" << std::endl;
			else
				std::cout << "Robotomy has failed" << std::endl;
		}
		else
			throw GradeTooLowException();

	}
	else
		throw FormNotSignedException();
}
