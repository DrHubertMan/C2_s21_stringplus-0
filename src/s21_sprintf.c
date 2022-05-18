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
    content pars;
    va_start(args, format);
    while (*format) {
        if (*format == '%') {
            pars.plus = 0;
            pars.minus = 0;
            pars.zero = 0;
            pars.accuracy = 0;
            pars.space = 0;
            pars.leng = 0;
            pars.width = 0;
            pars.point = 0;
            pars.type = 0;
            format++;
            if (*format == 'd') {
                int value_int = va_arg(args, int);
                char sign_i = value_int + '0';
                int len_int_dest = s21_strlen(dest);
                dest[len_int_dest] = ' ';
                dest[len_int_dest + 1] = sign_i;
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
            } else if (*format == 'u') {
                size_t value_u = va_arg(args, size_t);
                int len_u_dest = s21_strlen(dest);
                char sign_u = value_u + '0';
                dest[len_u_dest] = ' ';
                dest[len_u_dest + 1];
                format++;
            }
        }
        format++;
    }
    va_end(args);
    return 0;
}