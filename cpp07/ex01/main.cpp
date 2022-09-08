#include "iter.hpp"

int main(){

//  _________________string__________________

	std::string str = "helloo";
	iter(str, 6, func);
	std::cout << str << std::endl;
	int s[5] = {1, 2, 3, 4, 5};

//  _________________int array__________________

	iter(s, 5, func);
	for (int i = 0; i < 5; i++)
		std::cout << s[i] << std::endl;
}