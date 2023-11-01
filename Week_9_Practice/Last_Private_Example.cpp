#include "Examples.h"

void Last_Private_Example() {
	int tmp = 0;
#pragma omp parallel
	{
#pragma omp for lastprivate(tmp)
		for (int j = 0; j < 1000; ++j) {
			tmp += j;
		}

	}
	std::cout << tmp << std::endl;
}

// Results: 79514