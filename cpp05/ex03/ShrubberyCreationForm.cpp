#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form("Default", 145, 137), target("Default"){
	std::cout << "ShrubberyCreationForm has created a " << target << " target" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("Default", 145, 137), target(target){
	std::cout << "ShrubberyCreationForm copy constructor has created a " << target << " target" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other){
	const_cast<std::string&>(target) = other.target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
	std::cout << "ShrubberyCreationForm has destroyed a " << target << " target" << std::endl;
}

std::string ShrubberyCreationForm::get_target() const{
	return (this->target);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	if (this->get__signed()){
		if (executor.getGrade() <= this->get_x_rate()){
			std::ofstream newfile (this->get_target() + "_shrubbery");
			newfile << " ###########################  V##'############################" << std::endl;
			newfile << " ###########################'`################################" << std::endl;
			newfile << " #########################V'  `V  ############################" << std::endl;
			newfile << " ########################V'      ,############################" << std::endl;
			newfile << " #########`#############V      ,A###########################V" << std::endl;
			newfile << " ########' `###########V      ,###########################V',#" << std::endl;
			newfile << " ######V'   ###########l      ,####################V~~~~'',###" << std::endl;
			newfile << " #####V'    ###########l      ##P' ###########V~~'   ,A#######" << std::endl;
			newfile << " #####l      d#########l      V'  ,#######V~'       A#########" << std::endl;
			newfile << " #####l      ##########l         ,####V''         ,###########" << std::endl;
			newfile << " #####l        `V######l        ,###V'   .....;A##############" << std::endl;
			newfile << " #####A,         `######A,     ,##V' ,A#######################" << std::endl;
			newfile << " #######A,        `######A,    #V'  A########'''''##########''" << std::endl;
			newfile << " ##########,,,       `####A,           `#''           '''  ,,," << std::endl;
			newfile << " #############A,                               ,,,     ,######" << std::endl;
			newfile << " ######################oooo,                 ;####, ,#########" << std::endl;
			newfile << " ##################P'                   A,   ;#####V##########" << std::endl;
			newfile << " #####P'    ''''       ,###             `#,     `V############" << std::endl;
			newfile << " ##P'                ,d###;              ##,       `V#########" << std::endl;
			newfile << " ##########A,,   #########A              )##,    ##A,..,ooA###" << std::endl;
			newfile << " #############A, Y#########A,            )####, ,#############" << std::endl;
			newfile << " ###############A ############A,        ,###### ##############" << std::endl;
			newfile << " ###############################       ,#######V##############" << std::endl;
			newfile << " ###############################      ,#######################" << std::endl;
			newfile << " ##############################P    ,d########################" << std::endl;
			newfile << " ##############################'    d#########################" << std::endl;
			newfile << " ##############################     ##########################" << std::endl;
			newfile << " ##############################     ##########################" << std::endl;
			newfile << " #############################P     ##########################" << std::endl;
			newfile << " #############################'     ##########################" << std::endl;
			newfile << " ############################P      ##########################" << std::endl;
			newfile << " ###########################P'     ;##########################" << std::endl;
			newfile << " ###########################'     ,###########################" << std::endl;
			newfile << " ##########################       ############################" << std::endl;
			newfile << " #########################       ,############################" << std::endl;
			newfile << " ########################        d###########P'    `Y#########" << std::endl;
			newfile << " #######################        ,############        #########" << std::endl;
			newfile << " ######################        ,#############        #########" << std::endl;
			newfile << " #####################        ,##############b.    ,d#########" << std::endl;
			newfile << " ####################        ,################################" << std::endl;
			newfile << " ###################         #################################" << std::endl;
			newfile << " ##################          #######################P'  `V##P'" << std::endl;
			newfile << " #######P'     `V#           ###################P'" << std::endl;
			newfile << " #####P'                    ,#################P'" << std::endl;
			newfile << " ###P'                      d##############P''" << std::endl;
			newfile << " ##P'                       V##############'" << std::endl;
			newfile << " #P'                         `V###########'" << std::endl;
			newfile << " #'                             `V##P'" << std::endl;
		}
		else
			throw GradeTooLowException();

	}
	else
		throw FormNotSignedException();
}
