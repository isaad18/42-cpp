#include "Bureaucrat.hpp"

int main(){
	Bureaucrat test("wow", 77);
	try{
	Bureaucrat tesst("wow", -77);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << test << std::endl;
	test.incrementGrade();
	std::cout << test << std::endl;
	test.decrementGrade();
	std::cout << test << std::endl;
}
