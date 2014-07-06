#include <stdio.h>

extern long int get_ncpus_sched();
extern long int get_ncpus_sysconf();

int main()
{
	printf("sched: %ld\n", get_ncpus_sched());
	printf("sysconf: %ld\n", get_ncpus_sysconf());

	return 0;
}
