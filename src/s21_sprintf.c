#include"s21_sprintf.h"
#include<stdio.h>
#include"s21_string.c"
#include<stdarg.h>
#include<stdlib.h>

int s21_sprintf(char *dest, const char *format, ...);

int main() {
    char str[1024] = "1";
    s21_sprintf(str, "%c %d %s", '3', 8, "one");
    printf("%s\n", str);
    return 0;
}

int s21_sprintf(char *dest, const char *format, ...) {
    va_list args;
    va_start(args, format);
    while (*format) {
        if (*format == '%') {
            format++;
            if (*format == 'd') {
                int value_int = va_arg(args, int);
                char sign = value_int + '0';
                int len_int_dest = s21_strlen(dest);
                dest[len_int_dest] = ' ';
                dest[len_int_dest + 1] = sign;
                format++;
            } else if (*format == 'c') {
                int value_char = va_arg(args, int);
                int len_char_dest = s21_strlen(dest);
                dest[len_char_dest] = ' ';
                dest[len_char_dest + 1] = value_char;
                format++;
            } else if (*format == 's') {
                const char *value_str = va_arg(args, const char*);
                int len_str_dest = s21_strlen(dest);
                dest[len_str_dest] = ' ';
                int len_value_str = s21_strlen(value_str);
                int i = 1;
                while (len_value_str--) {
                    dest[len_str_dest + i] = value_str[i - 1];
                    i++;
                }
            }

        }
        format++;
    }
    va_end(args);
    return 0;
}