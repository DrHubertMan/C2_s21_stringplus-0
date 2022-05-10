#include"s21_string.c"
#include<stdio.h>
#include<string.h>
#include<signal.h>

int main() {
    for (int errnum = -10; errnum <= MAX_ERRORS; errnum++) {
        printf("%s - %s\n", strerror(errnum), s21_strerror(errnum));
    }
}
