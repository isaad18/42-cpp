#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename T>
void func(unsigned int i, T &to_iter){
	to_iter[i] = '0';
}

template <typename T>
void iter(T &s, int size, void (*func)(unsigned int index, T &to_iter)){
	if (size == 0)
		return ;
	for (int i = 0; i < size; i++)
		(*func)(i, s);
}

#endif