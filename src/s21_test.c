#include"s21_string.h"
#include<stdio.h>

int main() {
    char kek1[30] = "012345678";
    char kek3[30] = "345";
    char *istr;
    istr = s21_strstr(kek1, kek3);
    printf("%s\n", istr); 
    return 0;
}
