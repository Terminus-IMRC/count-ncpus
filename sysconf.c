#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

long int get_ncpus_sysconf()
{
	long int ncpus;

	if((ncpus=sysconf(_SC_NPROCESSORS_ONLN))==-1){
		perror("sysconf(_SC_NPROCESSORS_ONLN)");
		exit(EXIT_FAILURE);
	}

	return ncpus;
}
