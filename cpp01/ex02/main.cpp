#include <iostream>
#include<string>

int main(){
	std::string brain = "HI THIS IS BRAIN";
	std::string *brainPTR = &brain;
	std::string &brainREF = brain;

	std::cout << std::endl << "memory address: " << std::endl;
	std::cout << "brain >> ";
	std::cout << &brain << std::endl;
	std::cout << "brainPTR >> ";
	std::cout << brainPTR << std::endl;
	std::cout << "brainREF >> ";
	std::cout << &brainREF << std::endl;
	std::cout << "_____________________________________________\n" << std::endl;
	std::cout << "value: " << std::endl;
	std::cout << "brain >> ";
	std::cout << brain << std::endl;
	std::cout << "brainPTR >> ";
	std::cout << *brainPTR << std::endl;
	std::cout << "brainREF >> ";
	std::cout << brainREF << std::endl << std::endl;
}