#include"s21_string.c"
#include<stdio.h>
#include<string.h>
#include<signal.h>

int main() {
    char str1[] = "0123456789";
    char str2[] = "210";
    printf("%ld\n", s21_strspn(str1, str2));
    return 0;
}
