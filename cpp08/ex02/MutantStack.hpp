#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <deque>

#define RED "\033[0;31m"
#define GREEN "\033[1;32m"
#define CYAN "\033[0;36m"
#define YELLOW "\033[1;33m"
#define RESET "\033[0m"

template <typename T>
class MutantStack: public std::stack<T>
{

public:
	typedef typename std::stack<T>::container_type::iterator iterator;
	MutantStack<T>() : std::stack<T>() {}
	MutantStack<T>(const MutantStack<T>& other) : std::stack<T>() {*this = other;}

	MutantStack &operator=(const MutantStack<T>& other) { *this = other; return *this; }
	virtual ~MutantStack() {}
	iterator begin() { return this->c.begin(); }
	iterator end() { return this->c.end(); }

	iterator begin() const { return this->c.begin(); }
	iterator end() const { return this->c.end(); }
};

#endif