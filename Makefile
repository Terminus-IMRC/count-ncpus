CFLAGS=-Wall -Wextra
OBJS=main.o sched.o sysconf.o sysconf-conf.o

main: $(OBJS)

.PHONY: clean
clean:
	$(RM) main $(OBJS)
