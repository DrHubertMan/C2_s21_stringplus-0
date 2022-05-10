CC = gcc
CFLAGS = -Wall -Werror -Wextra -c -fprofile-arcs -ftest-coverage

all: gcov_report

gcov_report: test_run
	lcov -t "test" -o test.info -c -d . --rc lcov_branch_coverage=1
	genhtml -o report test.info  --rc lcov_branch_coverage=1

test_run: test
	./test.out

test: libs21_string.a check_s21_string.o
	$(CC) -o test.out -coverage check_s21_string.o -lcheck -L. -ls21_string

libs21_string.a: s21_string.o
	ar rc libs21_string.a s21_string.o
	ranlib libs21_string.a

s21_string.o: s21_string.c s21_string.h
	$(CC) $(CFLAGS) s21_string.c -lcheck

check_s21_string.o: check_s21_string.c
	$(CC) $(CFLAGS) check_s21_string.c 

check_s21_string.c: check_s21_string.check
	checkmk check_s21_string.check > check_s21_string.c

clean:
	rm -rf *.o *.gcno *.gcda *.out *.info *.a report

rebuild: clean all