all: rod_cut

cc = gcc
CFLAGS = -Wall

rod_cut: rod_cut.o
	$(cc) $(CFLAGS) -o rod_cut rod_cut.o

rod_cut.o: rod_cut.c

clean:
	rm -f rod_cut * .o