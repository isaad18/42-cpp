#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template<typename T> void func(T& st)
{
	std::cout << "passed through here  " << st << std::endl;
}

template <typename T>
void iter(T *s, int size, void (func)(T const &)){
	if (size == 0)
		return ;
	for (int i = 0; i < size; i++)
		func(s[i]);
}

#endif