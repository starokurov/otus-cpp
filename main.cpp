#include "lib.h"

#include <iostream>

int main(int argc, char *argv[])
{
	MyTest t;
	std::cout << "Version = " << t.version() << std::endl;

    return 0;
}
