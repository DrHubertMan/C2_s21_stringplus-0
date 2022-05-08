#include"s21_string.c"
#include<stdio.h>
#include<string.h>
#include<signal.h>

int main() {
    char str1[10] = "bidon";
    char str2[10] = "joe";
    size_t n = 100;
    strncat(str1, str2, n);
    printf("%s\n", str1);
    char str3[10] = "bidon";
    char str4[10] = "joe";
    s21_strncat(str3, str4, n);
    printf("%s\n", str3);
    return 0;
}
