#include <stdio.h> //подключаем в тестах
#include "s21_string.c"
#include <string.h>


int main() {
    char src[]  = "abcde";
    char * result = s21_insert(src, "322", 0);
    if ( result == NULL ) {
        printf("%s\n", "NULL");
    } else {
        printf("%s\n", result);
        free(result);
    }
    
    return 0;
}
