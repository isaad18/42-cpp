#include "Span.hpp"

int main(){


	try{
	Span a(6);
	a.addNumber(6);
	a.crazyAddNumber(3, 99);
	a.proAddNumber(1, 11);
	std::cout << a.shortestSpan() << std::endl;
	std::cout << a.longestSpan() << std::endl;
	}
	catch (const std::exception& e){
		std::cerr << e.what() << std::endl;
	}


	try{
	Span a(6);
	std::vector<int> b(3);
	b.push_back(3);
	b.push_back(233);
	b.push_back(323);
	a.addNumber(b.begin() , b.end());
	std::cout << a.shortestSpan() << std::endl;
	std::cout << a.longestSpan() << std::endl;
	}
	catch (const std::exception& e){
		std::cerr << e.what() << std::endl;
	}


	try{
		Span b(0);
	}
	catch (const std::exception& e){
		std::cerr << e.what() << std::endl;
	}


	try{
		Span c(5);
		std::cout << c.shortestSpan() << std::endl;
	}
	catch (const std::exception& e){
		std::cerr << e.what() << std::endl;
	}


	try{
		Span c(5);
		c.addNumber(1);
		std::cout << c.shortestSpan() << std::endl;
	}
	catch (const std::exception& e){
		std::cerr << e.what() << std::endl;
	}


}