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

		bool operator==(const Fixed &other) const;
		bool operator!=(const Fixed &other) const;
		bool operator<(const Fixed &other) const;
		bool operator>(const Fixed &other) const;
		bool operator<=(const Fixed &other) const;
		bool operator>=(const Fixed &other) const;

		Fixed operator*(Fixed const &b4);
		Fixed operator/(Fixed const &b4);
		Fixed operator+(Fixed const &b4);
		Fixed operator-(Fixed const &b4);

		Fixed operator++();
		Fixed operator++(int);
		Fixed operator--();
		Fixed operator--(int);

		int getRawBits(void) const;
		void setRawBits(int const raw);

		static Fixed const &min(Fixed const &one, Fixed const &two);
		static Fixed const &max(Fixed const &one, Fixed const &two);
		static Fixed &min(Fixed &one, Fixed &two);
		static Fixed &max(Fixed &one, Fixed &two);

		float toFloat(void) const;
		int toInt(void) const;
};
std::ostream &operator<<(std::ostream &s, Fixed const &_new);
Fixed const &min(Fixed const &one, Fixed const &two);
Fixed const &max(Fixed const &one, Fixed const &two);
Fixed &min(Fixed &one, Fixed &two);
Fixed &max(Fixed &one, Fixed &two);

#endif
