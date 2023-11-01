#include "Examples.h"

int Checking_Funtions()
{
	int tmp = 0;
	for (int j = 0; j < 1000; ++j) {
		tmp += j;
	}
	std::cout << tmp << std::endl;
	return tmp;
}