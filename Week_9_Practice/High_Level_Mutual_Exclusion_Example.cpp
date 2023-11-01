#include "Examples.h"

void High_Level_Mutual_Exclusion_Example()
{
	omp_set_num_threads(4);
#pragma omp parallel
	{
		int ID = omp_get_thread_num();
#pragma omp critical
		{
			hello(ID);
		}
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