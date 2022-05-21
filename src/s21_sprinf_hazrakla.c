#include "s21_sprintf_hazrakla.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "s21_string.c"

int extract_flags(const char* format, struct format *f);
int extract_width(const char* format, struct format *f);
int extract_precision(const char* format, struct format *f);
int extract_length(const char* format, struct format *f);
int extract_spec(const char* format, struct format *f);
int s21_sprintf(char *str, const char *format, ...);
char* spec_string(struct format f, va_list* args);
char* spec_d(struct format f, va_list* args);
char* spec_s(struct format f, va_list* args);
char* spec_c(struct format f, va_list* args);
int s21_atoi(const char* str, int n);
char* s21_itoa(long int c);

//%[флаги][ширина][.точность][длина]спецификатор
int main() {
    char str[1024];
    s21_sprintf(str, "%c\n", '324');
    printf("%s\n", str);

    printf("%c\n", -434);

    return 0;
}

int s21_sprintf(char *str, const char *format, ...) {
    str[0] = '\0'; //для корректной работы strcat
    va_list args;
    va_start(args, format);
    size_t format_length = s21_strlen(format);
    for (int i = 0; i < format_length;) {
        if ( format[i] == '%' ) {
            int start = i;

            struct format f;
            f.spec = unknown_spec;
            f.plus = 0;
            f.minus = 0;
            f.space = 0;
            f.width = -1;
            f.precision = -1;
            f.length = unknown_len;

            i++;
            i += extract_flags(format + i, &f);
            i += extract_width(format + i, &f);
            i += extract_precision(format + i, &f);
            i += extract_length(format + i, &f);
            i += extract_spec(format + i, &f);

            if ( f.spec == unknown_spec ) {
                char local[2] = {format[start], '\0'};
                s21_strcat(str, local);
                i = start + 1;
            } else {
                char* spec = spec_string(f, &args);
                s21_strcat(str, spec);
                free(spec);
            }

        } else {
            char local[2] = {format[i], '\0'};
            s21_strcat(str, local);
            i++;
        }
    }
    va_end(args);
    return 0; //что должен возвращать?
    
}

int extract_flags(const char* format, struct format *f) {
    int flags_len = s21_strspn(format, "+- ");
    for ( int i = 0; i < flags_len; i++ ) {
        switch( format[i] ) {
            case '+':
                f -> plus += 1;
                break;
            case '-':
                f -> minus += 1;
                break;
            case ' ':
                f -> space += 1;
                break;
            default:
                break; 
        }
    }
    return flags_len;
}


int extract_width(const char* format, struct format *f) {
    int number_len = s21_strspn(format, "0123456789");
    if ( number_len != 0 ) {
        f -> width = s21_atoi(format, number_len);
    }
    return number_len;
}

int extract_precision(const char* format, struct format *f) {
    int dot_found = 0;
    int number_len = 0;
    if ( *format == '.' ) {
        dot_found = 1;
        number_len = s21_strspn(format + 1, "0123456789");
        if ( number_len == 0 ) {
            f -> precision = 0;
        } else {
            f -> precision = s21_atoi(format + 1, number_len);
        }
    }
    return dot_found + number_len;
}

int extract_length(const char* format, struct format *f) {
    int length_found;
    switch( *format ) {
        case 'l':
            length_found = 1;
            f -> length = l_len;
            break;
        case 'h':
            length_found = 1;
            f -> length = h_len;
            break;
        default:
            length_found = 0;
            break;
    }
    return length_found;
}

int extract_spec(const char* format, struct format *f) {
    int spec_found = 1;
    switch ( *format )
    { 
        case 'c':
            f->spec=c_spec;
            break;
        case 'd':
            f->spec=d_spec;
            break;
        case 'i':
            f->spec=i_spec;
            break;
        case 'f':
            f->spec=f_spec;
            break;
        case 's':
            f->spec=s_spec;
            break;
        case 'u':
            f->spec=u_spec;
            break;
        case '%':
            f->spec=percent_spec;
            break;
        default:
            spec_found = 0;
            break;
    }
    return spec_found;
}


int s21_atoi(const char* str, int n) {
    int result = 0;
    int mult = 1;
    for ( int i = n; i > 0; i-- ) {
        result += (str[i - 1] - 48) * mult;
        mult *= 10;
    }
    return result;
}

char* spec_string(struct format f, va_list* args) {
    switch ( f.spec ) {
    case d_spec:
        spec_d(f, args);
        break;
    case s_spec:
        spec_s(f, args);
        break;
    case c_spec:
        spec_c(f, args);
        break;
    default:
        calloc(1, 1);
        break;
    }
}

char* spec_d(struct format f, va_list* args) {
    char* result = calloc(1000, sizeof(char));
    int n = va_arg(*args, int);
    char* str = s21_itoa(n);
    if ( n < 0 ) {
        result[0] = '-';
    }
    s21_strcat(result, str);
    free(str);
    return result;
}

char* s21_itoa(long int c) {
    if ( c < 0 ) {
        c = -c;
    }

    int a = 10;
    int i = 1;
    while ( 1 ) {
        div_t n = div(c, a);
        if ( n.quot != 0 ) {
            i += 1;
            a *= 10;
        } else {
            break;
        }
    }
    a = 10;
    char* str = malloc(sizeof(char) * (i + 1));
    for ( int j = i - 1; j >= 0; j-- ) {
        div_t n = div(c, a);
        str[j] = n.rem + 48;
        c = n.quot;
    }
    str[i] = '\0';
    return str;
}

char* spec_s(struct format f, va_list* args) {
    char* str = va_arg(*args, char*);
    size_t str_len = s21_strlen(str);
    char* result = malloc(sizeof(char) * (str_len + 1));
    s21_strcat(result, str);
    result[str_len + 1] = '\0';
    return result;
}

char* spec_c(struct format f, va_list* args) {
    char* str = malloc(sizeof(char) * 2);
    int c = va_arg(*args, int);
    str[0] = c;
    str[1] = '\0';
    return str;
}
