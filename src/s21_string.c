#include"s21_string.h"
#include<stdio.h>

// 1
void *s21_memchr(const void *str, int f, size_t n) {
    const unsigned char *buf = str;
    size_t i;
    for ( i = 0; i < n; i++ ) {
        if ( buf[i] == f ) {
            return (void*) buf + i;
        }
    }
    return s21_NULL;
}

// 2
int s21_memcmp(const void* str1, const void* str2, size_t n) {
    const unsigned char *buf1 = str1;
    const unsigned char *buf2 = str2;
    size_t i, back;
    back = 0;
    for (i = 0; i < n; i++) {
        if (*buf1 == *buf2) {
            buf1++;
            buf2++;
      } else {
            back = (*buf1-*buf2);
        }
    }
    return back;
}

// 3
void *s21_memcpy(void* dest, const void* str1, size_t n) {
    char *d = dest;
    const unsigned char *buf = str1;
    for ( size_t i = 0; i < n; i++ ) {
        d[i] = buf[i];
    }
    return dest;
}

// 4
void *s21_memmove(void *dest, void *str1, size_t n) {
    void *d = dest;
    if (dest <= str1 || (char*)dest >= ((char*)str1 + n)) {
        while (n--) {
            *(char*)dest++ = *(char*)str1++;
        }
  } else {
        dest = (char*)dest + n - 1;
        str1 = (char*)str1 + n - 1;
        while (n--) {
            *(char*)dest-- = *(char*)str1--;
        }
    }
    return d;
}

// 5
void *s21_memset(void *str, int c, size_t n) {
    unsigned char *d = str;
    const unsigned char zc = c;
    for (size_t i = 0; i < n; i++) {
        *d++ = zc;
    }
    return str;
}

// 6
char *s21_strcat(char *dest, const char *src) {
    size_t length_dest = s21_strlen(dest);
    size_t length_src = s21_strlen(src);
    s21_memcpy(dest + length_dest, src, length_src + 1);
    return dest;
}

// 7
char *s21_strncat(char *dest, const char *src, size_t n) {
    size_t length_dest = s21_strlen(dest);
    s21_memcpy(dest + length_dest, src, n);
    dest[length_dest + n] = '\0';
    return dest;
}

// 8
char *s21_strchr(const char *str, int c) {
    size_t length_str = s21_strlen(str);
    return s21_memchr(str, c, length_str);
}

// 9
int s21_strcmp(const char *str1, const char *str2) {
    size_t length_str1 = s21_strlen(str1);
    size_t length_str2 = s21_strlen(str2);
    int result = 0;
    if ( length_str1 == length_str2 ) {
        result = s21_memcmp(str1, str2, length_str1);
    } else if ( length_str1 > length_str2 ) {
        result = s21_memcmp(str1, str2, length_str1);
    } else {
        result = s21_memcmp(str1, str2, length_str2);
    }
    return result;
}

// 10
int s21_strncmp(const char *str1, const char *str2, size_t n) {
    int result = 0;
    size_t lenght_str1 = s21_strlen(str1);
    size_t length_str2 = s21_strlen(str2);
    //находим максимальную на тот случай, если n > какой-либо из длин
    size_t max_length = lenght_str1 > length_str2 ? lenght_str1 : length_str2;
    if ( n > max_length ) {
        result = s21_memcmp(str1, str2, max_length);
    } else {
         result = s21_memcmp(str1, str2, n);
    }
    return result;
}

// 11
char *s21_strcpy(char *dest, const char *src) {
    size_t length_src = s21_strlen(src) + 1;
    return s21_memcpy(dest, src, length_src);
}

// 12
char *s21_strncpy(char *dest, const char *src, size_t n) {
    size_t length_src = s21_strlen(src);
    if ( length_src >= n ) {
        s21_memcpy(dest, src, n);
    } else {
        s21_memcpy(dest, src, length_src);
        s21_memset(dest + length_src, '\0', n - length_src);
    }
    return dest;
}

// 13
size_t s21_strcspn(const char *str1, const char *str2) {
    size_t length_str1 = s21_strlen(str1);
    size_t length_str2 = s21_strlen(str2);
    size_t min_length = length_str1;
    for ( size_t i = 0; i < length_str2; i++ ) {
        char* occurrence =  s21_memchr(str1, str2[i], length_str1);
        if ( occurrence != s21_NULL ) {
            size_t tmp = occurrence - str1;
            min_length = min_length > tmp ? tmp : min_length;
        }
    }
    return min_length;
}

//// 14
//char *s21_strerror(int errnum) {
//    return ERRORS[errnum];
//}

// 15
size_t s21_strlen(const char *str) {
    int result;
    for ( result = 0; str[result] != '\0'; result++ ) ;
    return result;
}

// 16
char *s21_strpbrk(const char *str1, const char *str2) {
    const char *buf1 = str1;
    const char *buf2 = str2;
    char *back = s21_NULL;
    while (*buf1 != '\0') {
        buf2 = str2;
        while (*buf2 != '\0') {
            if (*buf2 == *buf1) {
                back = (char*)buf1;
                break;
            }
            buf2++;
        }
        if (*buf2 == *buf1) {
                break;
            }
        buf1++;
    }
    return back;
}

// 17
char *s21_strrchr(const char* str, int c) {
    const char f = c;
    const char *buf = str;
    for (; *str != '\0'; str++) {
        if (*str == f) {
            buf = str;
        }
    }
    return (char*)buf;
}

// 18
size_t s21_strspn(const char *str1, const char *str2) {
    const char *buf = str1;
    size_t a = 0;
    size_t l2 = s21_strlen(str2);
    size_t l1 = s21_strlen(str1);
    if (s21_memchr(str2, str1[0], l2) != s21_NULL) {
        a = 1;
        for (size_t i = 0; i < l2; i++) {
            for (size_t j = 0; j < l1 ; j++) {
                str1++;
                if (s21_memchr(buf, *str2, (size_t)(buf - str1)) != s21_NULL) {
                    a+=1;
              } else { 
                    break;
                }
            }
          }
        }
    return a;
    // 0123456789
    // 210
    //const char *buf1 = str1;
    //const char *buf2;
    //for (; *buf1 != '\0'; buf1++) {
    //    buf2 = str2;
    //    for (; ; buf2++) {
    //        if (*buf2 == '\0') {
    //            return ((size_t)(buf1 - str1));
    //      } else if (*buf1 == *buf2) {
    //            break;
    //      }
    //    }
    //}
    //return ((size_t)(buf1 - str1));
}

// 19 half WORK YA NE EBU POCH
char *s21_strstr(const char *haystack, const char *needle) {
    if (*needle == '\0') {
        return ((char*)haystack);
    }
    for (; (haystack = s21_strchr(haystack, *needle)) != s21_NULL; ++haystack) {
        const char *str1, *str2;
        for (str1 = haystack, str2 = needle; ;) {
            if (*++str2 == '\0') {
                return ((char*)haystack);
          } else if (*++str1 != *str2) {
                break;
            }
        }
    }
    return s21_NULL;
}

// 20
char *s21_strtok(char * str, const char *delim) {
    static char * s = s21_NULL;
    char * ret = s21_NULL;
    if (str != s21_NULL) {
      s = str;
    }
    if (s != s21_NULL && s21_strlen(s)) {
        const size_t dlen = s21_strlen(delim);
        while (*s && s21_memchr(delim, *s, dlen) != s21_NULL) {
          ++s;
        }
        if (*s) {
            ret = s;
            while (*s) {
                if (s21_memchr(delim, *s, dlen) != s21_NULL) {
                    break;
              } else {
                    ++s;
                }
            }
            if (*s) {
                s[0] = 0;
                ++s;
            }
        }
    }
    return ret;
}
