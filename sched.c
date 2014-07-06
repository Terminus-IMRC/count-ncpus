#define _GNU_SOURCE
#include <sched.h>
#include <stdio.h>
#include <stdlib.h>

long int get_ncpus_sched()
{
	int i;
	long int count;
	cpu_set_t cs;

	CPU_ZERO(&cs);
	if(sched_getaffinity(0, sizeof(cs), &cs)==-1){
		perror("sched_getaffinity");
		exit(EXIT_FAILURE);
	}

	count=0;
	for(i=0; i<CPU_SETSIZE; i++)
		if(CPU_ISSET(i, &cs))
			count++;

	return count;
}
