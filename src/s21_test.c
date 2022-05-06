#include"s21_string.h"
#include<stdio.h>
#include<check.h>
#include<signal.h>

int main() {
    char kek1[30] = "test1/test2/test3/test4";
    char kek3[30] = "/";
    char *istr;
    istr = s21_strtok(kek1, kek3);
    while (istr != s21_NULL) {
        printf("%s\n", istr);
        istr = s21_strtok(s21_NULL, kek3);
    }
    return 0;
}
