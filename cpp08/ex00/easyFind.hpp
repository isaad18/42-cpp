#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <vector>
#include <iostream>
#include <string>
#include <array>
#include <algorithm>

#define RED "\033[0;31m"
#define GREEN "\033[1;32m"
#define CYAN "\033[0;36m"
#define YELLOW "\033[1;33m"
#define RESET "\033[0m"

class PeacefulSegFault: public std::exception
{
	const char* what() const throw(){
		return RED "segmentation fault" RESET;
	}
};

template <typename T>
int easyFind(T a, int b){
	int result;
	bool exists = std::find(a.begin(), a.end(), b) != a.end();
	if (!exists)
		throw PeacefulSegFault();
	result = std::distance(a.begin(), std::find(a.begin(), a.end(), b));
	return result;
}

#endif