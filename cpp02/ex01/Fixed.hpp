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
		Fixed(Fixed &_new);
		Fixed(float _new); //float
		Fixed(int _new); //int
		virtual ~Fixed();
		std::ostream &operator<<(std::ostream &s, Fixed &_new);
		Fixed &operator=(Fixed &_new);
		int getRawBits( void ) const;
		void setRawBits(int const raw);
		float toFloat(void) const; //float
		int toInt(void) const; //int
};

#endif
