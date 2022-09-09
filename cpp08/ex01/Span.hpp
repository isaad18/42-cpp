#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <array>
#include <stdarg.h>

#define RED "\033[0;31m"
#define GREEN "\033[1;32m"
#define CYAN "\033[0;36m"
#define YELLOW "\033[1;33m"
#define RESET "\033[0m"

class Span{
	private:
		unsigned int max;
		std::vector<int> a;
		Span();
	public:
		Span(unsigned int num);
		Span(const Span& other);
		virtual ~Span();
		Span &operator=(Span const &other);
		void addNumber(int num);
		void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		void proAddNumber(int num, ...);
		void crazyAddNumber(int num, int limit);
		int longestSpan();
		int shortestSpan();
		class PeacefulSegFault: public std::exception
		{
			const char* what() const throw(){
				return RED"segmentation fault"RESET;
			}
		};
};

#endif