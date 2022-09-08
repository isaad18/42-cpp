#include "iter.hpp"

int main(){

//  _________________string__________________

	std::string str[6] = {"helloo", "j", "kk", "jn", "gbh", "ftg"};
	iter<std::string> (str, 6, func);
	// std::cout << str << std::endl;

//  _________________int array________________

	int s[5] = {1, 2, 3, 4, 5};
	iter<int> (s, 5, func);
	// for (int i = 0; i < 5; i++)
	// std::cout << s[i] << std::endl;
}