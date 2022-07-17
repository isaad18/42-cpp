#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed {
	private:
		int value;
		static const int bits = 8;
	public:
		Fixed();
		Fixed(float _new);
		Fixed(int _new);
		Fixed(Fixed const &_new);
		virtual ~Fixed();
		Fixed &operator=(Fixed const &_new);
		Fixed operator*(Fixed const &b4);
		int getRawBits( void ) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
};
std::ostream &operator<<(std::ostream &s, Fixed const &_new);

#endif
