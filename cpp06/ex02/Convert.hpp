#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <string>
#include <iostream>
#include <cstdlib>
#include <stdint.h>

typedef struct s_data{
	float F;
	int I;
	double D;
	char C;
} Data;

class Base{
	public:
		virtual ~Base(){}
};

class A: public Base{
	public:
		void print();
};

class B: public Base{
	public:
		void print();
};

class C: public Base{
	public:
		void print();
};

#endif // !CONVERT_HPP
