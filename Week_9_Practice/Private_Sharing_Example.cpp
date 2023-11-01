#include "Examples.h"

void wrong_Private_Shared_Example() {
	int tmp = 0;
#pragma omp for private(tmp)
	
		for (int j = 0; j < 1000; ++j) {
			tmp += j;
		}
	
	std::cout << tmp << std::endl;
}

// Result: 0
