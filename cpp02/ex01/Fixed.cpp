#include"Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor called\n";
	this->value = 0;
}

Fixed::Fixed(Fixed const &_new){
	std::cout << "Copy constructor called\n";
	this->value = _new.getRawBits();
}

Fixed::Fixed(float _new):
value(roundf(_new * (1 << bits))){}

Fixed::Fixed(int _new):
value(_new * (1 << bits)){}


Fixed::~Fixed(){
	std::cout << "Destructor called\n";
}

Fixed &Fixed::operator=(Fixed const &_new){
	std::cout << "Copy assignment operator called\n";
	this->value = _new.getRawBits();
	return *this;
}

std::ostream &operator<<(std::ostream &s, Fixed const &_new)
{s << _new.toFloat(); return s;}

int Fixed::getRawBits( void ) const{
	std::cout << "getRawBits member function called\n";
	return this->value;
}

void Fixed::setRawBits(int const raw){
	std::cout << "setRawBits member function called\n";
	this->value = raw;
}

int Fixed::toInt(void) const
{return ((int)value / (1 << bits));}

float Fixed::toFloat(void) const
{return ((float)value / (1 << bits));}
