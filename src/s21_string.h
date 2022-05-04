#ifndef MAKROS
#define MAKROS
#include<stddef.h>

void *s21_memchr(const void *str, int f, size_t n);
int s21_memcmp(const void *str1, const void* str2, size_t n);
void *s21_memcpy(void* dest, const void* str1, size_t n);
void *s21_memmove(void *dest, void *str1, size_t n);
void *s21_memset (void *str, int c, size_t n);
char *s21_strpbrk(const char *str, const char *sym);
char *s21_strrchr(const char* str, int c);
size_t s21_strspn(const char *str1, const char *str2);
char *s21_strstr(const char *str1, const char *str2);
char *s21_strchr(const char *str, int c);
size_t s21_strlen(const char *str);
char *s21_strncat(char *dest, const char *src, size_t n);
char *s21_strcat(char *dest, const char *src);

#endif  // MAKROS 