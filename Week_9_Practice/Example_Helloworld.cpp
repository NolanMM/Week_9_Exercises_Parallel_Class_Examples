#include "Examples.h"

void Example_Hello_World() {
#pragma omp parallel
	{
		int ID = omp_get_thread_num();
		std::cout << "hello(" << ID << ")" << std::endl;
		std::cout << "world(" << ID << ")" << std:: endl;
	}
}