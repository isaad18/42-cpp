#include "whatever.hpp"

int main(){
// ______________________ MAX ______________________
	std:: cout << "Max char " << ::max('e', 'x') << std::endl;
	std:: cout << "Max int " << ::max<double>(88, 88.3) << std::endl;

// ______________________ MIN ______________________

	std:: cout << "Max char " << ::min('e', 'x') << std::endl;
	std:: cout << "Max int " << ::min<double>(88, 88.3) << std::endl;

// ______________________ SWAP ______________________

	int i = 856;
	int j = 45;
	std::cout << "before Swap int " << i << "  " << j << std::endl;
	::swap(i, j);
	std::cout << "after Swap int " << i << "  " << j << std::endl;

	std::string s = "hello";
	std::string str = "bye";
	std::cout << "before Swap string " << s << "  " << str << std::endl;
	::swap(s, str);
	std::cout << "after Swap string " << s << "  " << str << std::endl;
	return 0;
}

// int main( void ) {
// int a = 2;
// int b = 3;
// ::swap( a, b );
// std::cout << "a = " << a << ", b = " << b << std::endl;
// std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
// std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
// std::string c = "chaine1";
// std::string d = "chaine2";
// ::swap(c, d);
// std::cout << "c = " << c << ", d = " << d << std::endl;
// std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
// std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
// return 0;
// }