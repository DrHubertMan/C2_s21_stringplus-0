#define s21_NULL ((void *)0)
typedef long unsigned int size_t;
#include"s21_string.h"

//1
void *s21_memchr(const void *str, int f, size_t n) {
    const unsigned char *buf = str;
    size_t i;
    void *back = s21_NULL;
    for (i = 0; i < n; i++, buf++) {
        if (*buf == f) {
            back = (void*)buf;
        }
    }
    return back;
}

//2
int s21_memcmp(const void* str1, const void* str2, size_t n) {
    const unsigned char *buf1 = str1;
    const unsigned char *buf2 = str2;
    size_t i, back;
    back = 0;
    for (i = 0; i < n; i++) {
        if (*buf1 == *buf2) {
            buf1++;
            buf2++;
        }
        else {
            back = (*buf1-*buf2);
        }
    }
    return back;
}

//3
void *s21_memcpy(void* dest, const void* str1, size_t n) {
    char *d = dest;
    const unsigned char *buf = str1;
    for ( size_t i = 0; i < n; i++ ) {
        d[i] = buf[i];
    }
    return dest;
}

//4
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

//5
void *s21_memset (void *str, int c, size_t n) {
    unsigned char *d = str;
    const unsigned char zc = c;
    for (size_t i = 0; i < n; i++) {
        *d++ = zc;
    }
    return str;
}

//6
char *s21_strcat(char *dest, const char *src) {
    size_t length_dest = s21_strlen(dest);
    size_t length_src = s21_strlen(src); 
    s21_memcpy(dest + length_dest, src, length_src + 1);
    return dest;
}

//7
char *s21_strncat(char *dest, const char *src, size_t n) {
    size_t length_dest = s21_strlen(dest);
    char* tmp = (char*) s21_memcpy(dest + length_dest, src, n);
    dest[length_dest + n] = '\0';
    tmp++; // ругается на неиспользованную переменную при компиляции ))0))
    return dest;
}

//8
char *s21_strchr(const char *str, int c) {
    size_t length_str = s21_strlen(str);
    return s21_memchr(str, c, length_str);
}

//15
size_t s21_strlen(const char *str) {
    int result;
    for ( result = 0; str[result] != '\0'; result++ ) ;
    return result;
}

//16
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

//17
char *s21_strrchr(const char* str, int c) {
    const char f = c;
    const char *buf = str;
    for (; *str != '\0'; str++) {
        if (*str == f){
            buf = str;
        }
    }
    return (char*)buf;
}

//18 
size_t s21_strspn(const char *str1, const char *str2) {
    const char *buf1 = str1;
    const char *buf2;
    for (; *buf1 != '\0'; buf1++) {
        buf2 = str2;
        for (; ; buf2++){
            if (*buf2 == '\0') {
                return ((size_t)(buf1 - str1));
          } else if (*buf1 == *buf2) {
                break;
          }
        }
    }
    return ((size_t)(buf1 - str1));
}

//19 NO WORK YA EBU POCH
char *s21_strstr (const char *haystack, const char *needle) {
    const char *needle_ptr = s21_NULL;
    const char *haystack_ptr = s21_NULL;
    if (haystack == s21_NULL || needle == s21_NULL) {
        return s21_NULL;
    }
    while (*haystack) {
        if (*haystack == *needle) {
            int trigger_out = 1;
            needle_ptr = needle;
            haystack_ptr = haystack;
            while (*needle_ptr && *haystack_ptr) {
                trigger_out = trigger_out && (*needle_ptr == *haystack_ptr);
            } 
            if (trigger_out) {
                return (char*)haystack;
            }
    }
        ++haystack;
    }
    return s21_NULL;
}

//20
char*  strtok_r(char* string_org,const char* demial) {
    static unsigned char* last; 
    unsigned char* str;         
    const unsigned char* ctrl = (const unsigned char*)demial;
    unsigned char map[32]; 
    int count;

    for (count =0; count <32; count++){
     map[count] = 0;
    }   
    do {
     map[*ctrl >> 3] |= (1 << (*ctrl & 7));
    } while (*ctrl++);     
    if (string_org){
     str = (unsigned char*)string_org;
    } else{
     str = last;
    }
    while ((map[*str >> 3] & (1 << (*str & 7)))  && *str){
     str++;
    } 
    string_org = (char*)str; 
    for (;*str; str++){
     if ( map[*str >> 3] & (1 << (*str & 7))){
      *str++ = '\0';
      break;         
     }         
    }    
    last =str;    
    if (string_org == (char*)str){
     return NULL; 
    }else{
     return string_org;
    }
}