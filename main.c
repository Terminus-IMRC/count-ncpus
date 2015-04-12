#include <stdio.h>

extern long int get_ncpus_sched();
extern long int get_ncpus_sysconf();
extern long int get_ncpus_sysconf_conf();

int main()
{
	printf("sched: %ld\n", get_ncpus_sched());
	printf("sysconf: %ld\n", get_ncpus_sysconf());
	printf("sysconf(CONF): %ld\n", get_ncpus_sysconf_conf());

	return 0;
}
