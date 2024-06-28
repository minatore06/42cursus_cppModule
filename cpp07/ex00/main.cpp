#include "whatever.hpp"
#include <iostream>

class test
{
private:
public:
	int x;
	test(int x);
	~test();
};

test::test(int x) : x(x)
{
}

test::~test()
{
}


int main( void ) {
int a = 2;
int b = 3;
test t1(1);
test t2(2);
::swap( t1, t2 );
::swap( a, b );
std::cout << "t1 = " << &t1 << ", t2 = " << &t2 << std::endl;
std::cout << "a = " << a << ", b = " << b << std::endl;
std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
std::string c = "chaine1";
std::string d = "chaine2";
::swap(c, d);
std::cout << "c = " << c << ", d = " << d << std::endl;
std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
return 0;
}