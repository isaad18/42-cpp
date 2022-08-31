#include "Bureaucrat.hpp"

int main(){
	Bureaucrat test("wow", -77);
	std::cout << test << std::endl;
	test.incrementGrade();
	std::cout << test << std::endl;
	test.decrementGrade();
	std::cout << test << std::endl;
}
