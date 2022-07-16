#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed {
	private:
		int value;
		static const int def = 8;
	public:
		Fixed();
		Fixed(Fixed &_new);
		virtual ~Fixed();
		Fixed &operator=(Fixed &_new);
		int getRawBits( void ) const;
		void setRawBits(int const raw);
};

#endif
