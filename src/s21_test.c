#include <stdio.h> //подключаем в тестах
#include "s21_string.c"
#include <string.h>


int main() {
    char src[] = ".....'My name is '****";
    char trim_chars[] = "*.";
    
    char* result = s21_trim(src, trim_chars);
    if ( result == NULL ) {
        printf("%s\n", "NULL");
    } else {
        printf("%s\n", result);
        free(result);
    }
    
    return 0;
}
