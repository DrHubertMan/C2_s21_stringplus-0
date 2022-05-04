CC = gcc
CFLAGS = -Wall -Werror -Wextra -c

all: s21_test

s21_test: s21_string.o s21_test.o
	$(CC) -o s21_test.out s21_test.o s21_string.o

s21_test.o: s21_test.c 
	$(CC) $(CFLAGS) s21_test.c 

s21_string.o: s21_string.c s21_string.h
	$(CC) $(CFLAGS) s21_string.c 

clean:
	rm -rf *.o

rebuild: clean all