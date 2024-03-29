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

Fixed &Fixed::operator=(Fixed const &_new){std::cout << "Copy assignment operator called\n";this->value = _new.getRawBits();return *this;}

bool Fixed::operator==(const Fixed &other) const{
	return this->value == other.value;
}

bool Fixed::operator!=(const Fixed &other) const{
	return this->value != other.value;
}

bool Fixed::operator<(const Fixed &other) const{
	return this->value < other.value;
}

bool Fixed::operator>(const Fixed &other) const{
	return this->value > other.value;
}

bool Fixed::operator<=(const Fixed &other) const{
	return this->value <= other.value;
}

bool Fixed::operator>=(const Fixed &other) const{
	return this->value >= other.value;
}

std::ostream &operator<<(std::ostream &s, Fixed const &_new){s << _new.toFloat(); return s;}

Fixed Fixed::operator*(Fixed const &b4){
	Fixed N;
	N.setRawBits((this->toFloat() * b4.toFloat()) * (1 << Fixed::bits));
	return (N);
}

Fixed Fixed::operator++(){
	this->value++;
	return (*this);
}

Fixed Fixed::operator--(){
	this->value--;
	return (*this);
}

Fixed Fixed::operator++(int){
	Fixed N(this->toFloat());
	this->value++;
	return (N);
}

Fixed Fixed::operator--(int){
	Fixed N(this->toFloat());
	this->value--;
	return (N);
}

Fixed Fixed::operator/(Fixed const &b4){
	Fixed N(0);
	N.setRawBits((this->toFloat() / b4.toFloat()) * (1 << Fixed::bits));
	return (N);
}

Fixed Fixed::operator+(Fixed const &b4){
	Fixed N(0);
	N.setRawBits((this->toFloat() + b4.toFloat()) * (1 << Fixed::bits));
	return (N);
}

Fixed Fixed::operator-(Fixed const &b4){
	Fixed N(0);
	N.setRawBits((this->toFloat() - b4.toFloat()) * (1 << Fixed::bits));
	return (N);
}

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

 Fixed const &Fixed::min(Fixed const &one, Fixed const &two){
	if (one > two)
		return two;
	return one;
}
 Fixed const &Fixed::max(Fixed const &one, Fixed const &two){
	if (one > two)
		return one;
	return two;
}
 Fixed &Fixed::min(Fixed &one, Fixed &two){
	if (one > two)
		return two;
	return one;
}
 Fixed &Fixed::max(Fixed &one, Fixed &two){
	if (one > two)
		return one;
	return two;
}

Fixed const &min(Fixed const &one, Fixed const &two){
	return ( Fixed::min(one, two));
}

Fixed const &max(Fixed const &one, Fixed const &two){
	return ( Fixed::max(one, two));
}

Fixed &min(Fixed &one, Fixed &two){
	return ( Fixed::min(one, two));
}

Fixed &max(Fixed &one, Fixed &two){
	return ( Fixed::max(one, two));
}
