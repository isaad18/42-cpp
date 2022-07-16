#include"Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor called\n";
	this->value = 0;
}

Fixed::Fixed(Fixed &_new){
	std::cout << "Copy constructor called\n";
	this->value = _new.getRawBits();
}

Fixed::~Fixed(){
	std::cout << "Destructor called\n";
}

Fixed &Fixed::operator=(Fixed &_new){
	std::cout << "Copy assignment operator called\n";
	this->value = _new.getRawBits();
	return *this;
}

int Fixed::getRawBits( void ) const{
	std::cout << "getRawBits member function called\n";
	return this->value;
}

void Fixed::setRawBits(int const raw){
	std::cout << "setRawBits member function called\n";
	this->value = raw;
}

int main( void ) {
Fixed a;
Fixed b( a );
Fixed c;
c = b;
std::cout << a.getRawBits() << std::endl;
std::cout << b.getRawBits() << std::endl;
std::cout << c.getRawBits() << std::endl;
return 0;
}
