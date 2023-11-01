#include "Examples.h"

void hello(int ID)
{
	std::cout << "Hello World from thread " << ID << std::endl;
}

void Example_Specifying_Num_Thread() {
	omp_set_num_threads(4);
#pragma omp parallel num_threads(4)
	{
		int ID = omp_get_thread_num();
		hello(ID);
	}
}

/*
 Results 1:
 Hello Week_9_Practice.cpp...
 Hello World from thread 0
 Hello World from thread 3
 Hello World from thread 2
 Hello World from thread 1

 Results 2:
 Hello Week_9_Practice.cpp...
 Hello World from thread 0
 Hello World from thread 2
 Hello World from thread 1
 Hello World from thread 3
 */