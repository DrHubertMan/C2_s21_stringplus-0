#include"s21_string.h"
#include<stdio.h>

int main() {
    char kek1[30] = "012345678";
    char kek3[30] = "3210";
    size_t a;
    a = s21_strspn(kek1, kek3);
    printf("%ld\n", a);
    return 0;
}
