#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("Default", 25, 5), target("Default"){
	std::cout << "PresidentialPardonForm has created a " << target << " target" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("Default", 25, 5), target(target){
	std::cout << "PresidentialPardonForm copy constructor has created a " << target << " target" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm& other){
	const_cast<std::string&>(target) = other.target;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(){
	std::cout << "PresidentialPardonForm has destroyed a " << target << " target" << std::endl;
}

std::string PresidentialPardonForm::get_target() const{
	return (this->target);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	if (this->get__signed()){
		if (executor.getGrade() <= this->get_x_rate()){
			std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
		}
		else
			throw GradeTooLowException();

	}
	else
		throw FormNotSignedException();
}
