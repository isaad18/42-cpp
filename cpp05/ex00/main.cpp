#include "Bureaucrat.hpp"

int main(){
	// try{
	// Bureaucrat tesst("wow", -77);
	// }
	// catch(std::exception &e){
	// 	std::cerr << e.what() << std::endl;
	// }
	// Bureaucrat test("wow", 77);
	// std::cout << test << std::endl;
	// test.incrementGrade();
	// std::cout << test << std::endl;
	// test.decrementGrade();
	// std::cout << test << std::endl;


	Bureaucrat a("www", 1);
	std::cout << a << std::endl;
	Bureaucrat b(a);
	std::cout << b << std::endl;
	Bureaucrat c;
	std::cout << c << std::endl;

	try
	{
		//Bureaucrat  ber("imad", 0);
		Bureaucrat  ber("imad", 150);
		//Bureaucrat  ber("imad", 151);
		std::cout << ber.getGrade() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat ber1("imad1", 1);
		ber1.incGrade();
		std::cout << ber1.getGrade() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat ber2("imad2", 150);
		ber2.decGrade();
		std::cout << ber2.getGrade() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
