#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <string>

typedef struct s_data{
	float F;
	int I;
	double D;
	char C;
} Data;

class Base{
	public:
		virtual void print();
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
