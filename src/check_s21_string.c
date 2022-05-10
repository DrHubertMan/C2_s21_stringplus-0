/*
 * DO NOT EDIT THIS FILE. Generated by checkmk.
 * Edit the original source file "check_s21_string.check" instead.
 */

#include <check.h>

#line 1 "check_s21_string.check"
#include <string.h>
#include <stdlib.h>
#include "s21_string.h"

START_TEST(memmove_1)
{
#line 6
char dest[] = "123";
char str1[] = "abc";
size_t n = 3;
ck_assert_ptr_eq(memmove(dest, str1, n), s21_memmove(dest, str1, n));

}
END_TEST

START_TEST(memmove_2)
{
#line 12
char dest[] = "123";
char str1[] = "abc";
size_t n = 2;
ck_assert_ptr_eq(memmove(dest, str1, n), s21_memmove(dest, str1, n));

}
END_TEST

START_TEST(memmove_3)
{
#line 18
char dest[] = "123456";
char str1[] = "abc";
size_t n = 3;
ck_assert_ptr_eq(memmove(dest, str1, n), s21_memmove(dest, str1, n));

}
END_TEST

START_TEST(memmove_4)
{
#line 24
char dest[] = "lolkek";
size_t n = 3;
ck_assert_ptr_eq(memmove(&dest[2], &dest[0], n), s21_memmove(&dest[2], &dest[0], n));

}
END_TEST

START_TEST(strncpy_5)
{
#line 29
char dest[50] = "hohol";
char src[8] = "vatnik";
size_t n = 10;
ck_assert_ptr_eq(strncpy(dest, src, n), s21_strncpy(dest, src, n));

}
END_TEST

START_TEST(strncmp_5)
{
#line 35
char str1[] = "12345";
char str2[] = "12345";
size_t n = 10;
ck_assert_int_eq(strncmp(str1, str2, n), s21_strncmp(str1, str2, n));

}
END_TEST

START_TEST(memset_1)
{
#line 41
char str1[] = "1234567890";
int c = '1';
size_t n = 10;
ck_assert_ptr_eq(memset(str1, c, n), s21_memset(str1, c, n));

}
END_TEST

START_TEST(memset_2)
{
#line 47
char str1[] = "obama";
int c = 'e';
size_t n = 1;
ck_assert_ptr_eq(memset(str1, c, n), s21_memset(str1, c, n));

}
END_TEST

START_TEST(memset_3)
{
#line 53
char str1[] = "14785";
int c = 'e';
size_t n = 4;
ck_assert_ptr_eq(memset(str1, c, n), s21_memset(str1, c, n));

}
END_TEST

START_TEST(memset_4)
{
#line 59
char str1[] = "shrek=love";
int c = '*';
size_t n = 5;
ck_assert_ptr_eq(memset(str1, c, n), s21_memset(str1, c, n));

}
END_TEST

START_TEST(strncat_1)
{
#line 65
char dest[10] = "bidon";
char src[10] = "joe";
size_t n = 4;
ck_assert_ptr_eq(strncat(dest, src, n), s21_strncat(dest, src, n));

}
END_TEST

START_TEST(strncat_2)
{
#line 71
char dest[10] = "4:20";
char src[10] = "4:19";
size_t n = 4;
ck_assert_ptr_eq(strncat(dest, src, n), s21_strncat(dest, src, n));

}
END_TEST

START_TEST(strncat_3)
{
#line 77
char dest[50] = "pants";
char src[20] = "za 40 griven";
size_t n = 5;
ck_assert_ptr_eq(strncat(dest, src, n), s21_strncat(dest, src, n));

}
END_TEST

START_TEST(strncat_4)
{
#line 83
char dest[30] = "435564536";
char src[30] = "5195195561";
size_t n = 8;
ck_assert_ptr_eq(strncat(dest, src, n), s21_strncat(dest, src, n));

}
END_TEST

START_TEST(strcmp_1)
{
#line 89
char str1[] = "12345";
char str2[] = "12345";
ck_assert_int_eq(strcmp(str1, str2), s21_strcmp(str1, str2));

}
END_TEST

START_TEST(strcmp_2)
{
#line 94
char str1[] = "zrada";
char str2[] = "peremoga";
ck_assert_int_eq(strcmp(str1, str2), s21_strcmp(str1, str2));

}
END_TEST

START_TEST(strcmp_3)
{
#line 99
char str1[] = "8888";
char str2[] = "XX";
ck_assert_int_eq(strcmp(str1, str2), s21_strcmp(str1, str2));

}
END_TEST

START_TEST(strcmp_4)
{
#line 104
char str1[] = "1234567890";
char str2[] = "1234567809";
ck_assert_int_eq(strcmp(str1, str2), s21_strcmp(str1, str2));

}
END_TEST

START_TEST(strcpy_1)
{
#line 109
char dest[] = "ahmat sila";
char src[] = "";
ck_assert_ptr_eq(strcpy(dest, src), s21_strcpy(dest, src));

}
END_TEST

START_TEST(strcpy_2)
{
#line 114
char dest[] = "625159151";
char src[] = "";
ck_assert_ptr_eq(strcpy(dest, src), s21_strcpy(dest, src));

}
END_TEST

START_TEST(strcpy_3)
{
#line 119
char dest[] = "$K^G$J&^*";
char src[] = "";
ck_assert_ptr_eq(strcpy(dest, src), s21_strcpy(dest, src));

}
END_TEST

START_TEST(strcpy_4)
{
#line 124
char dest[] = "Vechniye_deti!";
char src[] = "";
ck_assert_ptr_eq(strcpy(dest, src), s21_strcpy(dest, src));

}
END_TEST

START_TEST(strncpy_1)
{
#line 129
char dest[] = "ahmat";
char src[] = "sila";
size_t n = 3;
ck_assert_ptr_eq(strncpy(dest, src, n), s21_strncpy(dest, src, n));

}
END_TEST

START_TEST(strncpy_2)
{
#line 135
char dest[] = "6251";
char src[] = "5494";
size_t n = 2;
ck_assert_ptr_eq(strncpy(dest, src, n), s21_strncpy(dest, src, n));

}
END_TEST

START_TEST(strncpy_3)
{
#line 141
char dest[] = "$K^G$J&^*";
char src[] = "YNYTn53636";
size_t n = 4;
ck_assert_ptr_eq(strncpy(dest, src, n), s21_strncpy(dest, src, n));

}
END_TEST

START_TEST(strncpy_4)
{
#line 147
char dest[] = "Vechniye_";
char src[] = "deti!";
size_t n = 1;
ck_assert_ptr_eq(strncpy(dest, src, n), s21_strncpy(dest, src, n));

}
END_TEST

START_TEST(strncmp_1)
{
#line 153
char str1[] = "12345";
char str2[] = "12345";
size_t n = 5;
ck_assert_int_eq(strncmp(str1, str2, n), s21_strncmp(str1, str2, n));

}
END_TEST

START_TEST(strncmp_2)
{
#line 159
char str1[] = "zrada";
char str2[] = "peremoga";
size_t n = 4;
ck_assert_int_eq(strncmp(str1, str2, n), s21_strncmp(str1, str2, n));

}
END_TEST

START_TEST(strncmp_3)
{
#line 165
char str1[] = "8888";
char str2[] = "XX";
size_t n = 1;
ck_assert_int_eq(strncmp(str1, str2, n), s21_strncmp(str1, str2, n));

}
END_TEST

START_TEST(strncmp_4)
{
#line 171
char str1[] = "1234567890";
char str2[] = "1234567809";
size_t n = 3;
ck_assert_int_eq(strncmp(str1, str2, n), s21_strncmp(str1, str2, n));


}
END_TEST

START_TEST(strcspn_1)
{
#line 178
char str1[] = "devkazarulem";
char str2[] = "mel";
ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));

}
END_TEST

START_TEST(strcspn_2)
{
#line 183
char str1[] = "01823456789";
char str2[] = "9876";
ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));

}
END_TEST

START_TEST(strcspn_3)
{
#line 188
char str1[] = "GHtrH^$Y$GFD";
char str2[] = "^$Y";
ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));

}
END_TEST

START_TEST(strcspn_4)
{
#line 193
char str1[] = "zahashihzanashih";
char str2[] = "nashih";
ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));

}
END_TEST

START_TEST(strpbrk_1)
{
#line 198
char str1[] = "ahmat-sila";
char str2[] = "sila-ahmat";
ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));

}
END_TEST

START_TEST(strpbrk_2)
{
#line 203
char str1[] = "6251";
char str2[] = "5194";
ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));

}
END_TEST

START_TEST(strpbrk_3)
{
#line 208
char str1[] = "$K^G$J&^*";
char str2[] = "YNYTn5*3636";
ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));

}
END_TEST

START_TEST(strpbrk_4)
{
#line 213
char str1[] = "Vechniye_";
char str2[] = "deti!";
ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));

}
END_TEST

START_TEST(strtok_1)
{
#line 218
char str[] = "test1/test2/test3/test4";
char delim[] = "/";
ck_assert_ptr_eq(strtok(str, delim), s21_strtok(str, delim));

}
END_TEST

START_TEST(strtok_2)
{
#line 223
char str[] = "test1/test2/test3/test4";
char delim[] = "\\";
ck_assert_ptr_eq(strtok(str, delim), s21_strtok(str, delim));

}
END_TEST

START_TEST(strtok_3)
{
#line 228
char str[] = "papapapapapa";
char delim[] = "pa";
ck_assert_ptr_eq(strtok(str, delim), s21_strtok(str, delim));

}
END_TEST

START_TEST(strtok_4)
{
#line 233
char str[] = "hochu-hinkali";
char delim[] = "-";
ck_assert_ptr_eq(strtok(str, delim), s21_strtok(str, delim));

}
END_TEST

START_TEST(strrchr_1)
{
#line 238
char str1[] = "abob1a";
int c = '1';
ck_assert_ptr_eq(strrchr(str1, c), s21_strrchr(str1, c));

}
END_TEST

START_TEST(strrchr_2)
{
#line 243
char str1[] = "1561651695168518";
int c = '5';
ck_assert_ptr_eq(strrchr(str1, c), s21_strrchr(str1, c));

}
END_TEST

START_TEST(strrchr_3)
{
#line 248
char str1[] = "ccrtgerE^TG^RTGerfgetGDRTg35#T$T";
int c = '5';
ck_assert_ptr_eq(strrchr(str1, c), s21_strrchr(str1, c));

}
END_TEST

START_TEST(strrchr_4)
{
#line 253
char str1[] = "___XKjui87{____";
int c = 'X';
ck_assert_ptr_eq(strrchr(str1, c), s21_strrchr(str1, c));

}
END_TEST

START_TEST(strstr_1)
{
#line 258
char str1[] = "0123456789";
char str2[] = "345";
ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));

}
END_TEST

START_TEST(strstr_2)
{
#line 263
char str1[] = "aboba";
char str2[] = "b";
ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));

}
END_TEST

START_TEST(strstr_3)
{
#line 268
char str1[] = "8888888XXXX88";
char str2[] = "X";
ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));

}
END_TEST

START_TEST(strstr_4)
{
#line 273
char str1[] = "jvbnuo5nignte9orh89vher8";
char str2[] = "nig";
ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));

}
END_TEST

START_TEST(strcat_1)
{
#line 278
char dest[20] = "bidon";
char src[] = "joe";
ck_assert_ptr_eq(strcat(dest, src), s21_strcat(dest, src));

}
END_TEST

START_TEST(strcat_2)
{
#line 283
char dest[20] = "4:20";
char src[] = "4:19";
ck_assert_ptr_eq(strcat(dest, src), s21_strcat(dest, src));

}
END_TEST

START_TEST(strcat_3)
{
#line 288
char dest[40] = "pants";
char src[] = "za 40 griven";
ck_assert_ptr_eq(strcat(dest, src), s21_strcat(dest, src));

}
END_TEST

START_TEST(strcat_4)
{
#line 293
char dest[50] = "435564536";
char src[] = "5195195561";
ck_assert_ptr_eq(strcat(dest, src), s21_strcat(dest, src));

}
END_TEST

START_TEST(strspn_1)
{
#line 298
char str1[] = "devka za rulem";
char str2[] = "za";
ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));

}
END_TEST

START_TEST(strspn_2)
{
#line 303
char str1[] = "0123456789";
char str2[] = "210";
ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));

}
END_TEST

START_TEST(strspn_3)
{
#line 308
char str1[] = "GHtrH^$Y$GFD";
char str2[] = "^$Y";
ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));

}
END_TEST

START_TEST(strspn_4)
{
#line 313
char str1[] = "zahashihzanashih";
char str2[] = "nashih";
ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));

}
END_TEST

START_TEST(strerror_1)
{
#line 318
int errnum = 10;
ck_assert_str_eq(strerror(errnum), s21_strerror(errnum));

}
END_TEST

START_TEST(strerror_2)
{
#line 322
int errnum = 120;
ck_assert_str_eq(strerror(errnum), s21_strerror(errnum));

}
END_TEST

START_TEST(strerror_3)
{
#line 326
int errnum = -5;
ck_assert_str_eq(strerror(errnum), s21_strerror(errnum));

}
END_TEST

START_TEST(strerror_4)
{
#line 330
int errnum = 170;
ck_assert_str_eq(strerror(errnum), s21_strerror(errnum));
}
END_TEST

int main(void)
{
    Suite *s1 = suite_create("Core");
    TCase *tc1_1 = tcase_create("Core");
    SRunner *sr = srunner_create(s1);
    int nf;

    suite_add_tcase(s1, tc1_1);
    tcase_add_test(tc1_1, memmove_1);
    tcase_add_test(tc1_1, memmove_2);
    tcase_add_test(tc1_1, memmove_3);
    tcase_add_test(tc1_1, memmove_4);
    tcase_add_test(tc1_1, strncpy_5);
    tcase_add_test(tc1_1, strncmp_5);
    tcase_add_test(tc1_1, memset_1);
    tcase_add_test(tc1_1, memset_2);
    tcase_add_test(tc1_1, memset_3);
    tcase_add_test(tc1_1, memset_4);
    tcase_add_test(tc1_1, strncat_1);
    tcase_add_test(tc1_1, strncat_2);
    tcase_add_test(tc1_1, strncat_3);
    tcase_add_test(tc1_1, strncat_4);
    tcase_add_test(tc1_1, strcmp_1);
    tcase_add_test(tc1_1, strcmp_2);
    tcase_add_test(tc1_1, strcmp_3);
    tcase_add_test(tc1_1, strcmp_4);
    tcase_add_test(tc1_1, strcpy_1);
    tcase_add_test(tc1_1, strcpy_2);
    tcase_add_test(tc1_1, strcpy_3);
    tcase_add_test(tc1_1, strcpy_4);
    tcase_add_test(tc1_1, strncpy_1);
    tcase_add_test(tc1_1, strncpy_2);
    tcase_add_test(tc1_1, strncpy_3);
    tcase_add_test(tc1_1, strncpy_4);
    tcase_add_test(tc1_1, strncmp_1);
    tcase_add_test(tc1_1, strncmp_2);
    tcase_add_test(tc1_1, strncmp_3);
    tcase_add_test(tc1_1, strncmp_4);
    tcase_add_test(tc1_1, strcspn_1);
    tcase_add_test(tc1_1, strcspn_2);
    tcase_add_test(tc1_1, strcspn_3);
    tcase_add_test(tc1_1, strcspn_4);
    tcase_add_test(tc1_1, strpbrk_1);
    tcase_add_test(tc1_1, strpbrk_2);
    tcase_add_test(tc1_1, strpbrk_3);
    tcase_add_test(tc1_1, strpbrk_4);
    tcase_add_test(tc1_1, strtok_1);
    tcase_add_test(tc1_1, strtok_2);
    tcase_add_test(tc1_1, strtok_3);
    tcase_add_test(tc1_1, strtok_4);
    tcase_add_test(tc1_1, strrchr_1);
    tcase_add_test(tc1_1, strrchr_2);
    tcase_add_test(tc1_1, strrchr_3);
    tcase_add_test(tc1_1, strrchr_4);
    tcase_add_test(tc1_1, strstr_1);
    tcase_add_test(tc1_1, strstr_2);
    tcase_add_test(tc1_1, strstr_3);
    tcase_add_test(tc1_1, strstr_4);
    tcase_add_test(tc1_1, strcat_1);
    tcase_add_test(tc1_1, strcat_2);
    tcase_add_test(tc1_1, strcat_3);
    tcase_add_test(tc1_1, strcat_4);
    tcase_add_test(tc1_1, strspn_1);
    tcase_add_test(tc1_1, strspn_2);
    tcase_add_test(tc1_1, strspn_3);
    tcase_add_test(tc1_1, strspn_4);
    tcase_add_test(tc1_1, strerror_1);
    tcase_add_test(tc1_1, strerror_2);
    tcase_add_test(tc1_1, strerror_3);
    tcase_add_test(tc1_1, strerror_4);

    srunner_run_all(sr, CK_ENV);
    nf = srunner_ntests_failed(sr);
    srunner_free(sr);

    return nf == 0 ? 0 : 1;
}
