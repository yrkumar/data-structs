# the compiler: gcc for C program, define as g++ for C++
CC = gcc

# compiler flags:
#  -DDEBUG 		
#  -gstabs		add debugging info to the exe
#  -Wall		turn on most compiler warnings
#  -Wextra		enable extra warnings
#  -Werror		make all warnings errors
#  -std=c99		set language standard c99
#  -pedantic	issue all warnings 
CFLAGS  = -DDEBUG -Wall -Wextra -Werror -std=c99 -pedantic 

SRC = $(wildcard *.c)

test: $(SRC)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	$(RM) test

