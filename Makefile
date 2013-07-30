# the compiler: gcc for C program, define as g++ for C++
CC = gcc

# compiler flags:
#  -DDEBUG 		
#  -gstabs		add debugging info to the exe
#  -Wall		turn on most compiler warnings
#  -Wextra		enable extra warnings
#  -Werror		make all warnings errors
#  -stc=c99		set language standard c99
#  -pedantic	issue all warnings 
CFLAGS  = -DDEBUG -gstabs -Wall -Wextra -std=c99 -pedantic 

all: $(TARGET)

$(TARGET): $(TARGET).c
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c

clean:
	$(RM) $(TARGET)
