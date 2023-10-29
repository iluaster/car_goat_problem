all: car_goat_prob 

CC=gcc
CFLAGS= -std=c99 -g 
shellcode: car_goat_prob.o
		$(CC) $(CFLAGS) -o car_goat_prob car_goat_prob.o
shellcode.o:car_goat_prob.c
		$(CC) $(CFLAGS) -c car_goat_prob.c
			
clean:
		rm -f car_goat_prob.o
