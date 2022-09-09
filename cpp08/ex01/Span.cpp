#include "Span.hpp"

Span::Span(){}

Span::Span(unsigned int num): max(num){
	if (num <= 0)
		throw PeacefulSegFault();
	a.reserve(num);
}

Span::Span(const Span &other): max(other.max){
	this->a.reserve(other.max);
	this->a = other.a;
}

Span::~Span(){}

Span &Span::operator=(const Span &other){
	this->max = other.max;
	this->a.reserve(other.max);
	this->a = other.a;
	return *this;
}

void Span::addNumber(int num){
	static unsigned long i;
	i++;
	if (i > this->max)
		throw PeacefulSegFault();
	this->a.push_back(num);
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end){
	if(static_cast<size_t> (end - begin) > (this->max - this->a.size()))
		throw PeacefulSegFault();
	for (std::vector<int>::iterator i = begin; i < end; i++){
		a.push_back(*i);
	}
}

void Span::proAddNumber(int numToAdd, ...){
	va_list ap;
	va_start(ap, numToAdd);
	for (int i = 0; i < numToAdd; i++)
	{
		if (a.size() == this->max)
			throw PeacefulSegFault();
		a.push_back(va_arg(ap, int));
	}
}

void Span::crazyAddNumber(int num, int limit){
	for (int i = 0; i < num; i++){
		if (a.size() == this->max)
			throw PeacefulSegFault();
		a.push_back(std::rand() % limit);
	}
}

int Span::longestSpan(){
	if (a.size() <= 1)
		throw PeacefulSegFault();
	return (*max_element(a.begin(), a.end()) - *min_element(a.begin(), a.end()));
}

int Span::shortestSpan(){
	if (a.size() <= 1)
		throw PeacefulSegFault();
	std::vector<int> b(a);
	sort(b.begin(), b.end());
	unsigned long i = 0;
	int j = 0;
	int x = 0;
	x = (b.at(1) - b.at(0));
	while (i < b.size() - 1){
		j = (b.at(i + 1) - b.at(i));
		if (j < x)
			x = j;
		i++;
	}
	return (x);
}