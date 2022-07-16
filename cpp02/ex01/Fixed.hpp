#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed {
	private:
		int value;
		static const int def = 8;
	public:
		Fixed();
		Fixed(Fixed &_new);
		Fixed(int _new); //int
		Fixed(float _new); //float
		virtual ~Fixed();
		Fixed &operator=(Fixed &_new);
		int getRawBits( void ) const;
		void setRawBits(int const raw);
		float toFloat(void) const; //float
		int toInt(void) const; //int
};

#endif
