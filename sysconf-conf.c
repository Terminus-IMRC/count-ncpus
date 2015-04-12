#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

long int get_ncpus_sysconf_conf()
{
	long int ncpus;

	if((ncpus=sysconf(_SC_NPROCESSORS_CONF))==-1){
		perror("sysconf(_SC_NPROCESSORS_CONF)");
		exit(EXIT_FAILURE);
	}

	return ncpus;
}
