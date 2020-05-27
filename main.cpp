#include <iostream>
#include "int.h"

int main(int argc, char** argv)
{
	Int a(8), b(3), res;
	res = a + b;
	res.print();
	res += a;
	std::cout << res << std::endl;

	return 0;
}