#ifndef MAKROS
#define MAKROS
#define s21_NULL ((void *)0)
typedef long unsigned int size_t;
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
char *s21_strtok(char * str, const char *delim);
int s21_strcmp(const char *str1, const char *str2);
int s21_strncmp(const char *str1, const char *str2, size_t n);
char *s21_strcpy(char *dest, const char *src);
char *s21_strncpy(char *dest, const char *src, size_t n);
size_t s21_strcspn(const char *str1, const char *str2);
char *s21_strerror(int errnum);

#endif  // MAKROS 