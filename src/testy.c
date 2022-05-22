 -fsanitize=address

#include <check.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <locale.h>
#include "s21_string.h"

START_TEST(memchr_1) {
#line 8
char str1[] = "abc";
int c = 'a';
size_t n = 3;
ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
} END_TEST

START_TEST(memchr_2) {
#line 14
char str1[] = "abc";
int c = 'b';
size_t n = 3;
ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_3) {
#line 19
char str1[] = "abc";
int c = 'c';
size_t n = 3;
ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
} END_TEST

START_TEST(memchr_4) {
#line 25
char str1[] = "abc";
int c = 'd';
size_t n = 2;
ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
} END_TEST

START_TEST(memchr_5) {
#line 31
char str1[] = "abc";
int c = 'a';
size_t n = 2;
ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
} END_TEST

START_TEST(memchr_6) {
#line 37
char str1[] = "abc";
int c = 'b';
size_t n = 2;
ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
} END_TEST

START_TEST(memchr_7) {
#line 43
char str1[] = "abc";
int c = 'c';
size_t n = 2;
ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
} END_TEST

START_TEST(memchr_8) {
#line 49
char str1[] = "abc";
int c = 'a';
size_t n = 1;
ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
} END_TEST

START_TEST(memchr_9) {
#line 55
char str1[] = "abc";
int c = 'b';
size_t n = 1;
ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
} END_TEST

START_TEST(memchr_10) {
#line 61
char str1[] = "abc";
int c = 'c';
size_t n = 1;
ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
} END_TEST

START_TEST(memchr_11) {
#line 67
char str1[] = "abc";
int c = 'a';
size_t n = 2;
ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
} END_TEST

START_TEST(memchr_12) {
#line 73
char str1[] = "abc";
int c = 'a';
size_t n = 0;
ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
} END_TEST

START_TEST(memchr_13) {
#line 79
char str1[] = "abc";
int c = 'd';
size_t n = 2;
ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
} END_TEST

START_TEST(memchr_14) {
#line 85
char str1[] = "abc";
int c = 'd';
size_t n = 2;
ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
} END_TEST

START_TEST(memchr_15) {
#line 91
char str1[] = "abc";
int c = 'd';
size_t n = 2;
ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
} END_TEST

START_TEST(memchr_16) {
#line 97
char str1[] = "abc";
int c = 'd';
size_t n = 1;
ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
} END_TEST

START_TEST(memchr_17) {
#line 103
char str1[] = "abc";
int c = 'd';
size_t n = 0;
ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
} END_TEST

START_TEST(memchr_18) {
#line 109
char str1[] = "abc";
int c = 'd';
size_t n = 2;
ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
} END_TEST

START_TEST(memchr_19) {
#line 115
char str1[] = "";
int c = 'd';
size_t n = 0;
ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
} END_TEST

START_TEST(memchr_20) {
#line 121
char str1[] = "";
int c = '\0';
size_t n = 0;
ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
} END_TEST

START_TEST(memchr_21) {
#line 127
char str1[] = " ";
int c = 'd';
size_t n = 1;
ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
} END_TEST

START_TEST(memchr_22) {
char str1[] = "abcabc";
int c = 'b';
size_t n = 3;
ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
} END_TEST

START_TEST(memchr_23) {
#line 138
char str1[] = "abcabc";
int c = 'c';
size_t n = 3;
ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
} END_TEST

START_TEST(memchr_24) {
#line 144
char str1[] = "abcabc";
int c = 'd';
size_t n = 3;
ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
} END_TEST

START_TEST(memchr_25) {
#line 150
char str1[] = "abcabc";
int c = 'a';
size_t n = 2;
ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
} END_TEST

START_TEST(memchr_26) {
#line 156
char str1[] = "abcabc";
int c = 'b';
size_t n = 2;
ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
} END_TEST

START_TEST(memchr_27) {
#line 162
char str1[] = "abcabc";
int c = 'c';
size_t n = 2;
ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
} END_TEST

START_TEST(memchr_28) {
#line 168
char str1[] = "abcabc";
int c = 'a';
size_t n = 1;
ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
} END_TEST

START_TEST(memchr_29) {
#line 174
char str1[] = "abcabc";
int c = 'b';
size_t n = 1;
ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
} END_TEST

START_TEST(memchr_30) {
#line 180
char str1[] = "abcabc";
int c = 'c';
size_t n = 1;
ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
} END_TEST

START_TEST(memchr_31) {
#line 186
char str1[] = "abcabc";
int c = 'a';
size_t n = 5;
ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
} END_TEST

START_TEST(memchr_32) {
#line 192
char str1[] = "abcabc";
int c = 'a';
size_t n = 0;
ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
} END_TEST

START_TEST(memchr_33) {
#line 198
char str1[] = "abcabc";
int c = 'd';
size_t n = 3;
ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
} END_TEST

START_TEST(memchr_34) {
#line 204
char str1[] = "abcabc";
int c = 'd';
size_t n = 2;
ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
} END_TEST

START_TEST(memchr_35) {
#line 210
char str1[] = "abcabc";
int c = 'd';
size_t n = 2;
ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
} END_TEST

START_TEST(memchr_36) {
#line 216
char str1[] = "abcabc";
int c = 'd';
size_t n = 1;
ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
} END_TEST

START_TEST(memchr_37) {
#line 222
char str1[] = "abcabc";
int c = 'd';
size_t n = 0;
ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
} END_TEST

START_TEST(memchr_38) {
#line 228
char str1[] = "abcabc";
int c = 'd';
size_t n = 0;
ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
} END_TEST

START_TEST(memchr_39) {
#line 234
char str1[] = "abcabc";
int c = 'a';
size_t n = 3;
ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
} END_TEST

START_TEST(memchr_40) {
#line 240
char str1[] = "abc\nabc";
int c = 'a';
size_t n = 3;
ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
} END_TEST

START_TEST(memchr_41) {
#line 246
char str1[] = "abc\0abc";
int c = 'a';
size_t n = 3;
ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
} END_TEST

START_TEST(memchr_42) {
#line 252
char str1[] = "\0abcabc";
int c = 'a';
size_t n = 3;
ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
} END_TEST

START_TEST(memchr_43) {
#line 258
char str1[] = "abcabc\0";
int c = 'a';
size_t n = 3;
ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
} END_TEST

START_TEST(memcmp_1) {
#line 264
char str1[] = "abc";
char str2[] = "abc";
int n = 3;
ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
} END_TEST

START_TEST(memcmp_2) {
#line 270
char str1[] = "Abc";
char str2[] = "abc";
int n = 3;
ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
} END_TEST

START_TEST(memcmp_3) {
#line 276
char str1[] = "abc";
char str2[] = "Abc";
int n = 3;
ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
} END_TEST

START_TEST(memcmp_4) {
#line 282
char str1[] = "abC";
char str2[] = "abc";
int n = 3;
ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
} END_TEST

START_TEST(memcmp_5) {
#line 288
char str1[] = "abc";
char str2[] = "abC";
int n = 3;
ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
} END_TEST

START_TEST(memcmp_6) {
#line 294
char str1[] = "ABC";
char str2[] = "abc";
int n = 3;
ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
} END_TEST

START_TEST(memcmp_7) {
#line 300
char str1[] = "abc";
char str2[] = "ABC";
int n = 3;
ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
} END_TEST

START_TEST(memcmp_8) {
#line 306
char str1[] = "a b c";
char str2[] = "abc";
int n = 3;
ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
} END_TEST

START_TEST(memcmp_9) {
#line 312
char str1[] = "abc";
char str2[] = "a b c";
int n = 3;
ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
} END_TEST

START_TEST(memcmp_10) {
#line 318
char str1[] = "";
char str2[] = "abc";
int n = 0;
ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
} END_TEST

START_TEST(memcmp_11) {
#line 324
char str1[] = "abc";
char str2[] = "";
int n = 1;
ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
} END_TEST

START_TEST(memcmp_12) {
#line 330
char str1[] = " ";
char str2[] = "abc";
int n = 1;
ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
} END_TEST

START_TEST(memcmp_13) {
#line 336
char str1[] = "abc";
char str2[] = " ";
int n = 2;
ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
} END_TEST

START_TEST(memcmp_14) {
#line 342
char str1[] = "9087";
char str2[] = "657";
int n = 3;
ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
} END_TEST

START_TEST(memcmp_15) {
#line 348
char str1[] = "";
char str2[] = "";
int n = 0;
ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
} END_TEST

START_TEST(memcmp_16) {
#line 354
char str1[] = " ";
char str2[] = " ";
int n = 2;
ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
} END_TEST

START_TEST(memcmp_17) {
#line 360
char str1[] = "abc ";
char str2[] = "abc";
int n = 3;
ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
} END_TEST

START_TEST(memcmp_18) {
#line 366
char str1[] = "abc";
char str2[] = "abc ";
int n = 3;
ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
} END_TEST

START_TEST(memcmp_19) {
#line 372
char str1[] = " abc";
char str2[] = "abc";
int n = 3;
ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
} END_TEST

START_TEST(memcmp_20) {
#line 378
char str1[] = "abc";
char str2[] = " abc";
int n = 3;
ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
} END_TEST

START_TEST(memcmp_21) {
#line 384
char str1[] = "123";
char str2[] = "123";
int n = 3;
ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
} END_TEST

START_TEST(memcmp_22) {
#line 390
char str1[] = "123";
char str2[] = "321";
int n = 3;
ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
} END_TEST

START_TEST(memcmp_23) {
#line 396
char str1[] = "321";
char str2[] = "321";
int n = 3;
ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
} END_TEST

START_TEST(memcmp_24) {
#line 402
char str1[] = "321";
char str2[] = "123";
int n = 3;
ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
} END_TEST

START_TEST(memcmp_25) {
#line 408
char str1[] = "1234";
char str2[] = "123";
int n = 3;
ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
} END_TEST

START_TEST(memcmp_26) {
#line 414
char str1[] = "132";
char str2[] = "1234";
int n = 3;
ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
} END_TEST

START_TEST(memcmp_27) {
#line 420
char str1[] = "abcd";
char str2[] = "abc";
int n = 3;
ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
} END_TEST

START_TEST(memcmp_28) {
#line 426
char str1[] = "abc";
char str2[] = "abcd";
int n = 3;
ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
} END_TEST

START_TEST(memcmp_29) {
#line 432
char str1[] = "12ab";
char str2[] = "12ab";
int n = 3;
ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
} END_TEST

START_TEST(memcmp_30) {
#line 438
char str1[] = "ab12";
char str2[] = "12ab";
int n = 3;
ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
} END_TEST

START_TEST(memcmp_31) {
#line 444
char str1[] = "abc";
char str2[] = "abc";
int n = 3;
ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
} END_TEST

START_TEST(memcmp_32) {
#line 450
char str1[] = "Abc";
char str2[] = "abc";
int n = 4;
ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
} END_TEST

START_TEST(memcmp_33) {
#line 456
char str1[] = "abc";
char str2[] = "Abc";
int n = 4;
ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
} END_TEST

START_TEST(memcmp_34) {
#line 462
char str1[] = "abC";
char str2[] = "abc";
int n = 4;
ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
} END_TEST

START_TEST(memcmp_35) {
#line 468
char str1[] = "abc";
char str2[] = "abC";
int n = 4;
ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
} END_TEST

START_TEST(memcmp_36) {
#line 474
char str1[] = "ABC";
char str2[] = "abc";
int n = 4;
ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
} END_TEST

START_TEST(memcmp_37) {
#line 480
char str1[] = "abc";
char str2[] = "ABC";
int n = 4;
ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
} END_TEST

START_TEST(memcmp_38) {
#line 486
char str1[] = "a b c";
char str2[] = "abc";
int n = 4;
ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
} END_TEST

START_TEST(memcmp_39) {
#line 492
char str1[] = "abc";
char str2[] = "a b c";
int n = 4;
ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
} END_TEST

START_TEST(memcmp_50) {
#line 498
char str1[] = "abc";
char str2[] = " abc";
int n = 0;
ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
} END_TEST

START_TEST(memcmp_51) {
#line 504
char str1[] = "123";
char str2[] = "123";
int n = 0;
ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
} END_TEST

START_TEST(memcmp_52) {
#line 510
char str1[] = "123";
char str2[] = "321";
int n = 0;
ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
} END_TEST

START_TEST(memcmp_53) {
#line 516
char str1[] = "321";
char str2[] = "321";
int n = 0;
ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
} END_TEST

START_TEST(memcmp_54) {
#line 522
char str1[] = "321";
char str2[] = "123";
int n = 0;
ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
} END_TEST

START_TEST(memcmp_55) {
#line 528
char str1[] = "1234";
char str2[] = "123";
int n = 0;
ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
} END_TEST

START_TEST(memcmp_56) {
#line 534
char str1[] = "132";
char str2[] = "1234";
int n = 0;
ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
} END_TEST

START_TEST(memcmp_57) {
#line 540
char str1[] = "abcd";
char str2[] = "abc";
int n = 0;
ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
} END_TEST

START_TEST(memcmp_58) {
#line 546
char str1[] = "abc";
char str2[] = "abcd";
int n = 0;
ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
} END_TEST

START_TEST(memcmp_59) {
#line 552
char str1[] = "12ab";
char str2[] = "12ab";
int n = 0;
ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
} END_TEST

START_TEST(memcmp_60) {
#line 558
char str1[] = "ab12";
char str2[] = "12ab";
int n = 0;
ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
} END_TEST

START_TEST(memcpy_1) {
#line 564
char str1[9] = "abc";
char str2[] = "def";
char str3[9] = "abc";
s21_size_t n = 1;
ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
} END_TEST

START_TEST(memcpy_2) {
#line 571
char str1[9] = "ab\nc";
char str2[] = "def";
char str3[9] = "ab\nc";
int n = 1;
ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
} END_TEST

START_TEST(memcpy_3) {
#line 578
char str1[9] = "ab\0c";
char str2[] = "def";
char str3[9] = "ab\0c";
int n = 1;
ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
} END_TEST

START_TEST(memcpy_4) {
#line 585
char str1[9] = "abc";
char str2[] = "de\0f";
char str3[9] = "abc";
int n = 1;
ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
} END_TEST

START_TEST(memcpy_5) {
#line 592
char str1[9] = "abc";
char str2[] = "de\nf";
char str3[9] = "abc";
int n = 1;
ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
} END_TEST

START_TEST(memcpy_6) {
#line 599
char str1[9] = "ab\0c";
char str2[] = "def";
char str3[9] = "ab\0c";
int n = 4;
ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
} END_TEST

START_TEST(memcpy_7) {
#line 606
char str1[9] = "abc";
char str2[] = "de\0f";
char str3[9] = "abc";
int n = 4;
ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
} END_TEST

START_TEST(memcpy_8) {
#line 613
char str1[9] = "";
char str2[] = "def";
char str3[9] = "";
int n = 3;
memcpy(str1, str2, n);
s21_memcpy(str3, str2, n);
ck_assert_str_eq(str1, str3);
} END_TEST

START_TEST(memcpy_9) {
#line 622
char str1[9] = "abc";
char str2[] = "";
char str3[9] = "abc";
int n = 1;
ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
} END_TEST

START_TEST(memcpy_10) {
#line 629
char str1[9] = "abc";
char str2[] = "def";
char str3[9] = "abc";
int n = 1;
ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
} END_TEST

START_TEST(memcpy_11) {
#line 636
char str1[9] = "abc";
char str2[] = "def";
char str3[9] = "abc";
int n = 1;
ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
} END_TEST

START_TEST(memcpy_12) {
#line 643
char str1[9] = "ab\nc";
char str2[] = "def";
char str3[9] = "ab\nc";
int n = 4;
ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
} END_TEST

START_TEST(memcpy_13) {
#line 650
char str1[9] = "ab\0c";
char str2[] = "def";
char str3[9] = "ab\0c";
int n = 0;
ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
} END_TEST

START_TEST(memcpy_14) {
#line 657
char str1[9] = "abc";
char str2[] = "de\0f";
char str3[9] = "abc";
int n = 0;
ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
} END_TEST

START_TEST(memcpy_15) {
#line 664
char str1[9] = "abc";
char str2[] = "de\nf";
char str3[9] = "abc";
int n = 0;
ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
} END_TEST

START_TEST(memcpy_16) {
#line 671
char str1[9] = "ab\0c";
char str2[] = "def";
char str3[9] = "ab\0c";
int n = 4;
ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
} END_TEST

START_TEST(memcpy_17) {
#line 678
char str1[9] = "abc";
char str2[] = "de\0f";
char str3[9] = "ab\0c";
int n = 3;
ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
} END_TEST

START_TEST(memcpy_18) {
#line 685
char str1[9] = "";
char str2[] = "def";
char str3[9] = "";
int n = 1;
ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
} END_TEST

START_TEST(memcpy_19) {
#line 692
char str1[9] = "";
char str2[] = "";
char str3[9] = "";
int n = 1;
ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
} END_TEST

START_TEST(memcpy_20) {
#line 699
char str1[9] = " ";
char str2[] = " ";
char str3[9] = " ";
int n = 0;
ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
} END_TEST

START_TEST(memmove_1) {
#line 706
char str1[9] = "abc";
char str2[] = "def";
char str3[9] = "abc";
s21_size_t n = 1;
ck_assert_str_eq(memmove(str1, str2, n), s21_memmove(str3, str2, n));
} END_TEST

START_TEST(memmove_2) {
#line 713
char str1[9] = "ab\nc";
char str2[] = "def";
char str3[9] = "ab\nc";
int n = 1;
ck_assert_str_eq(memmove(str1, str2, n), s21_memmove(str3, str2, n));
} END_TEST

START_TEST(memmove_3) {
#line 720
char str1[9] = "ab\0c";
char str2[] = "def";
char str3[9] = "ab\0c";
int n = 1;
ck_assert_str_eq(memmove(str1, str2, n), s21_memmove(str3, str2, n));
} END_TEST

START_TEST(memmove_4) {
#line 727
char str1[9] = "abc";
char str2[] = "de\0f";
char str3[9] = "abc";
int n = 1;
ck_assert_str_eq(memmove(str1, str2, n), s21_memmove(str3, str2, n));
} END_TEST

START_TEST(memmove_5) {
#line 734
char str1[9] = "abc";
char str2[] = "de\nf";
char str3[9] = "abc";
int n = 1;
ck_assert_str_eq(memmove(str1, str2, n), s21_memmove(str3, str2, n));
} END_TEST

START_TEST(memmove_6) {
#line 741
char str1[9] = "ab\0c";
char str2[] = "def";
char str3[9] = "ab\0c";
int n = 4;
ck_assert_str_eq(memmove(str1, str2, n), s21_memmove(str3, str2, n));
} END_TEST

START_TEST(memmove_7) {
#line 748
char str1[9] = "abc";
char str2[] = "de\0f";
char str3[9] = "abc";
int n = 4;
ck_assert_str_eq(memmove(str1, str2, n), s21_memmove(str3, str2, n));
} END_TEST

START_TEST(memmove_8) {
#line 755
char str1[9] = "";
char str2[] = "def";
char str3[9] = "";
int n = 3;
memmove(str1, str2, n);
s21_memmove(str3, str2, n);
ck_assert_str_eq(str1, str3);
} END_TEST

START_TEST(memmove_9) {
#line 764
char str1[9] = "abc";
char str2[] = "";
char str3[9] = "abc";
int n = 1;
ck_assert_str_eq(memmove(str1, str2, n), s21_memmove(str3, str2, n));
} END_TEST

START_TEST(memmove_10) {
#line 771
char str1[9] = "abc";
char str2[] = "def";
char str3[9] = "abc";
int n = 1;
ck_assert_str_eq(memmove(str1, str2, n), s21_memmove(str3, str2, n));
} END_TEST

START_TEST(memmove_11) {
#line 778
char str1[9] = "abc";
char str2[] = "def";
char str3[9] = "abc";
int n = 1;
ck_assert_str_eq(memmove(str1, str2, n), s21_memmove(str3, str2, n));
} END_TEST

START_TEST(memmove_12) {
#line 785
char str1[9] = "ab\nc";
char str2[] = "def";
char str3[9] = "ab\nc";
int n = 4;
ck_assert_str_eq(memmove(str1, str2, n), s21_memmove(str3, str2, n));
} END_TEST

START_TEST(memmove_13) {
#line 792
char str1[9] = "ab\0c";
char str2[] = "def";
char str3[9] = "ab\0c";
int n = 0;
ck_assert_str_eq(memmove(str1, str2, n), s21_memmove(str3, str2, n));
} END_TEST

START_TEST(memmove_14) {
#line 799
char str1[9] = "abc";
char str2[] = "de\0f";
char str3[9] = "abc";
int n = 0;
ck_assert_str_eq(memmove(str1, str2, n), s21_memmove(str3, str2, n));
} END_TEST

START_TEST(memmove_15) {
#line 806
char str1[9] = "abc";
char str2[] = "de\nf";
char str3[9] = "abc";
int n = 3;
ck_assert_str_eq(memmove(str1, str2, n), s21_memmove(str3, str2, n));
} END_TEST

START_TEST(memmove_16) {
#line 813
char str1[9] = "ab\0c";
char str2[] = "def";
char str3[9] = "ab\0c";
int n = 4;
ck_assert_str_eq(memmove(str1, str2, n), s21_memmove(str3, str2, n));
} END_TEST

START_TEST(memmove_17) {
#line 820
char str1[9] = "abc";
char str2[] = "de\0f";
char str3[9] = "ab\0c";
int n = 3;
ck_assert_str_eq(memmove(str1, str2, n), s21_memmove(str3, str2, n));
} END_TEST

START_TEST(memmove_18) {
#line 827
char str1[9] = "";
char str2[] = "def";
char str3[9] = "";
int n = 1;
ck_assert_str_eq(memmove(str1, str2, n), s21_memmove(str3, str2, n));
} END_TEST

START_TEST(memmove_19) {
#line 834
char str1[9] = "";
char str2[] = "";
char str3[9] = "";
int n = 1;
ck_assert_str_eq(memmove(str1, str2, n), s21_memmove(str3, str2, n));
} END_TEST

START_TEST(memmove_20) {
#line 841
char str1[] = " ";
char str2[] = " ";
char str3[] = " ";
int n = 0;
ck_assert_str_eq(memmove(str1, str2, n), s21_memmove(str3, str2, n));
} END_TEST

START_TEST(memmove_21) {
#line 848
char str1[] = "abcdefgh123";
char str2[] = "abcde";
char str3[] = "abcdefgh123";
int n = 4;
ck_assert_str_eq(memmove(str1, str2, n), s21_memmove(str3, str2, n));
} END_TEST

START_TEST(memmove_22) {
#line 855
char str1[] = "abcdefgh123";
char str2[] = "abcde";
char str3[] = "abcdefgh123";
int n = 1;
ck_assert_str_eq(memmove(str1, str2, n), s21_memmove(str3, str2, n));
} END_TEST

START_TEST(memmove_23) {
#line 862
char str1[7] = "a";
char str2[8] = "abctu6";
char str3[7] = "a";
int n = 4;
ck_assert_str_eq(memmove(str1, str2, n), s21_memmove(str3, str2, n));
} END_TEST

START_TEST(memmove_24) {
#line 869
char str1[7] = "a";
char str2[8] = "abctu6";
char str3[7] = "a";
int n = 2;
ck_assert_str_eq(memmove(&str1[4], &str2[2], n), s21_memmove(&str3[4], &str2[2], n));
} END_TEST

START_TEST(memmove_25) {
#line 876
unsigned char str1[15]="1234567890";
unsigned char str2[15]="1234567890";
ck_assert_str_eq(memmove(&str1[11], &str1[3], 3), s21_memmove(&str2[11], &str2[3], 3));
} END_TEST

START_TEST(memmove_26) {
#line 881
char str1[] = "1234567890";
char str2[] = "1234567890";
ck_assert_str_eq(memmove(&str1[4], &str2[3], 3), s21_memmove(&str1[4], &str2[3], 3));
} END_TEST

START_TEST(memset_1) {
#line 886
char str1[] = "abcdefghij";
char str2[] = "abcdefghij";
int c = '2';
int n = 10;
ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
} END_TEST

START_TEST(memset_2) {
#line 893
char str1[] = "abcdefghij";
char str2[] = "abcdefghij";
int c = 'a';
int n = 10;
ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
} END_TEST

START_TEST(memset_3) {
#line 900
char str1[] = "abcdefghij";
char str2[] = "abcdefghij";
int c = '2';
int n = 5;
ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
} END_TEST

START_TEST(memset_4) {
#line 907
char str1[] = "abcdefghij";
char str2[] = "abcdefghij";
int c = 'a';
int n = 5;
ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
} END_TEST

START_TEST(memset_5) {
#line 914
char str1[] = "abcdefghij";
char str2[] = "abcdefghij";
int c = '2';
int n = 1;
ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
} END_TEST

START_TEST(memset_6) {
#line 921
char str1[] = "abcdefghij";
char str2[] = "abcdefghij";
int c = 'a';
int n = 1;
ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
} END_TEST

START_TEST(memset_7) {
#line 928
char str1[] = "abcdefghij";
char str2[] = "abcdefghij";
int c = '2';
int n = 0;
ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
} END_TEST

START_TEST(memset_8) {
#line 935
char str1[] = "abcdefghij";
char str2[] = "abcdefghij";
int c = 'a';
int n = 0;
ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
} END_TEST

START_TEST(memset_9) {
#line 942
char str1[] = "abcdefghij";
char str2[] = "abcdefghij";
int c = '2';
int n = 7;
ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
} END_TEST

START_TEST(memset_10) {
#line 949
char str1[] = "abcdefghij";
char str2[] = "abcdefghij";
int c = 'a';
int n = 3;
ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
} END_TEST

START_TEST(memset_11) {
#line 956
char str1[] = "1234567890";
char str2[] = "1234567890";
int c = '2';
int n = 10;
ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
} END_TEST

START_TEST(memset_12) {
#line 963
char str1[] = "1234567890";
char str2[] = "1234567890";
int c = 'a';
int n = 10;
ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
} END_TEST

START_TEST(memset_13) {
#line 970
char str1[] = "1234567890";
char str2[] = "1234567890";
int c = '2';
int n = 5;
ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
} END_TEST

START_TEST(memset_14) {
#line 977
char str1[] = "1234567890";
char str2[] = "1234567890";
int c = 'a';
int n = 5;
ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
} END_TEST

START_TEST(memset_15) {
#line 984
char str1[] = "1234567890";
char str2[] = "1234567890";
int c = '2';
int n = 1;
ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
} END_TEST

START_TEST(memset_16) {
#line 991
char str1[] = "1234567890";
char str2[] = "1234567890";
int c = 'a';
int n = 1;
ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
} END_TEST

START_TEST(memset_17) {
#line 998
char str1[] = "1234567890";
char str2[] = "1234567890";
int c = '2';
int n = 0;
ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
} END_TEST

START_TEST(memset_18) {
#line 1005
char str1[] = "1234567890";
char str2[] = "1234567890";
int c = 'a';
int n = 0;
ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
} END_TEST

START_TEST(memset_19) {
#line 1012
char str1[] = "1234567890";
char str2[] = "1234567890";
int c = '2';
int n = 10;
ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
} END_TEST

START_TEST(memset_20) {
#line 1019
char str1[] = "1234567890";
char str2[] = "1234567890";
int c = 'a';
int n = 0;
ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
} END_TEST

START_TEST(memset_21) {
#line 1026
char str1[] = "abcde67890";
char str2[] = "abcde67890";
int c = '2';
int n = 10;
ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
} END_TEST

START_TEST(memset_22) {
#line 1033
char str1[] = "abcde67890";
char str2[] = "abcde67890";
int c = 'a';
int n = 10;
ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
} END_TEST

START_TEST(memset_23) {
#line 1040
char str1[] = "abcde67890";
char str2[] = "abcde67890";
int c = '2';
int n = 5;
ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
} END_TEST

START_TEST(memset_24) {
#line 1047
char str1[] = "abcde67890";
char str2[] = "abcde67890";
int c = 'a';
int n = 5;
ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
} END_TEST

START_TEST(memset_25) {
#line 1054
char str1[] = "abcde67890";
char str2[] = "abcde67890";
int c = '2';
int n = 1;
ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
} END_TEST

START_TEST(memset_26) {
#line 1061
char str1[] = "abcde67890";
char str2[] = "abcde67890";
int c = 'a';
int n = 1;
ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
} END_TEST

START_TEST(memset_27) {
#line 1068
char str1[] = "abcde67890";
char str2[] = "abcde67890";
int c = '2';
int n = 0;
ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
} END_TEST

START_TEST(memset_28) {
#line 1075
char str1[] = "abcde67890";
char str2[] = "abcde67890";
int c = 'a';
int n = 0;
ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
} END_TEST

START_TEST(memset_29) {
#line 1082
char str1[] = "abcde67890";
char str2[] = "abcde67890";
int c = '2';
int n = 7;
ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
} END_TEST

START_TEST(memset_30) {
#line 1089
char str1[] = "abcde67890";
char str2[] = "abcde67890";
int c = 'a';
int n = 7;
ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
} END_TEST

START_TEST(memset_31) {
#line 1096
char str1[] = ")(*&^UTYfghjkliuy7oi6";
char str2[] = ")(*&^UTYfghjkliuy7oi6";
int c = '2';
int n = 10;
ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
} END_TEST

START_TEST(memset_32) {
#line 1103
char str1[] = ")(*&^UTYfghjkliuy7oi6";
char str2[] = ")(*&^UTYfghjkliuy7oi6";
int c = 'a';
int n = 10;
ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
} END_TEST

START_TEST(memset_33) {
#line 1110
char str1[] = ")(*&^UTYfghjkliuy7oi6";
char str2[] = ")(*&^UTYfghjkliuy7oi6";
int c = '2';
int n = 5;
ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
} END_TEST

START_TEST(memset_34) {
#line 1117
char str1[] = ")(*&^UTYfghjkliuy7oi6";
char str2[] = ")(*&^UTYfghjkliuy7oi6";
int c = 'a';
int n = 5;
ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
} END_TEST

START_TEST(memset_35) {
#line 1124
char str1[] = ")(*&^UTYfghjkliuy7oi6";
char str2[] = ")(*&^UTYfghjkliuy7oi6";
int c = '2';
int n = 1;
ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
} END_TEST

START_TEST(memset_36) {
#line 1131
char str1[] = ")(*&^UTYfghjkliuy7oi6";
char str2[] = ")(*&^UTYfghjkliuy7oi6";
int c = 'a';
int n = 1;
ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
} END_TEST

START_TEST(memset_37) {
#line 1138
char str1[] = ")(*&^UTYfghjkliuy7oi6";
char str2[] = ")(*&^UTYfghjkliuy7oi6";
int c = '2';
int n = 0;
ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
} END_TEST

START_TEST(memset_38) {
#line 1145
char str1[] = ")(*&^UTYfghjkliuy7oi6";
char str2[] = ")(*&^UTYfghjkliuy7oi6";
int c = 'a';
int n = 0;
ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
} END_TEST

START_TEST(memset_39) {
#line 1152
char str1[] = ")(*&^UTYfghjkliuy7oi6";
char str2[] = ")(*&^UTYfghjkliuy7oi6";
int c = '2';
int n = 11;
ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
} END_TEST

START_TEST(memset_40) {
#line 1159
char str1[] = ")(*&^UTYfghjkliuy7oi6";
char str2[] = ")(*&^UTYfghjkliuy7oi6";
int c = 'a';
int n = 11;
ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
} END_TEST

START_TEST(memset_41) {
#line 1166
char str1[] = "";
char str2[] = "";
int c = 'a';
int n = 0;
ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
} END_TEST

START_TEST(memset_42) {
#line 1173
char str1[] = " ";
char str2[] = " ";
int c = 'a';
int n = 1;
ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
} END_TEST

START_TEST(memset_43) {
#line 1180
char str1[] = ")(*&^UTYfgh\0jkliuy7oi6";
char str2[] = ")(*&^UTYfgh\0jkliuy7oi6";
int c = 'a';
int n = 11;
ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
} END_TEST

START_TEST(memset_44) {
#line 1187
char str1[] = ")(*&^UTYfgh\njkliuy7oi6";
char str2[] = ")(*&^UTYfgh\njkliuy7oi6";
int c = 'a';
int n = 11;
ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
} END_TEST

START_TEST(memset_45) {
#line 1194
char str1[] = ")(*&^UTYfghjkliuy7oi6\0";
char str2[] = ")(*&^UTYfghjkliuy7oi6\0";
int c = 'a';
int n = 11;
ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
} END_TEST

START_TEST(memset_46) {
#line 1201
char str1[] = "\0)(*&^UTYfgh\0jkliuy7oi6";
char str2[] = "\0)(*&^UTYfgh\0jkliuy7oi6";
int c = 'a';
int n = 11;
ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
} END_TEST

START_TEST(strcat_1) {
#line 1208
char str1[9] = "abc";
char str2[9] = "abc";
char str3[] = "def";
ck_assert_str_eq(strcat(str1, str3), s21_strcat(str2, str3));
} END_TEST

START_TEST(strcat_2) {
#line 1214
char str1[9] = "abc\0";
char str2[9] = "abc\0";
char str3[] = "def";
ck_assert_str_eq(strcat(str1, str3), s21_strcat(str2, str3));
} END_TEST

START_TEST(strcat_3) {
#line 1220
char str1[9] = "abc\n";
char str2[9] = "abc\n";
char str3[] = "def";
ck_assert_str_eq(strcat(str1, str3), s21_strcat(str2, str3));
} END_TEST

START_TEST(strcat_4) {
#line 1226
char str1[9] = "ab\0c";
char str2[9] = "ab\0c";
char str3[] = "def";
ck_assert_str_eq(strcat(str1, str3), s21_strcat(str2, str3));
} END_TEST

START_TEST(strcat_5) {
#line 1232
char str1[9] = "a\nbc";
char str2[9] = "a\nbc";
char str3[] = "def";
ck_assert_str_eq(strcat(str1, str3), s21_strcat(str2, str3));
} END_TEST

START_TEST(strcat_6) {
#line 1238
char str1[9] = "abc ";
char str2[9] = "abc ";
char str3[] = "def";
ck_assert_str_eq(strcat(str1, str3), s21_strcat(str2, str3));
} END_TEST

START_TEST(strcat_7) {
#line 1244
char str1[9] = " abc";
char str2[9] = " abc";
char str3[] = "def";
ck_assert_str_eq(strcat(str1, str3), s21_strcat(str2, str3));
} END_TEST

START_TEST(strcat_8) {
#line 1250
char str1[9] = "abc";
char str2[9] = "abc";
char str3[] = " def";
ck_assert_str_eq(strcat(str1, str3), s21_strcat(str2, str3));
} END_TEST

START_TEST(strcat_9) {
#line 1256
char str1[9] = "abc";
char str2[9] = "abc";
char str3[] = "def ";
ck_assert_str_eq(strcat(str1, str3), s21_strcat(str2, str3));
} END_TEST

START_TEST(strcat_10) {
#line 1262
char str1[9] = "abc";
char str2[9] = "abc";
char str3[] = "def00";
ck_assert_str_eq(strcat(str1, str3), s21_strcat(str2, str3));
} END_TEST

START_TEST(strcat_11) {
#line 1268
char str1[9] = "";
char str2[9] = "";
char str3[] = "12\0";
ck_assert_str_eq(strcat(str1, str3), s21_strcat(str2, str3));
} END_TEST

START_TEST(strcat_12) {
#line 1274
char str1[9] = "12\0";
char str2[9] = "12\0";
char str3[] = "";
ck_assert_str_eq(strcat(str1, str3), s21_strcat(str2, str3));
} END_TEST

START_TEST(strcat_13) {
#line 1280
char str1[9] = "32\1";
char str2[9] = "32\1";
char str3[] = "";
ck_assert_str_eq(strcat(str1, str3), s21_strcat(str2, str3));
} END_TEST

START_TEST(strcat_14) {
#line 1286
char str1[9] = "21\3c";
char str2[9] = "21\3c";
char str3[] = " ";
ck_assert_str_eq(strcat(str1, str3), s21_strcat(str2, str3));
} END_TEST

START_TEST(strcat_15) {
#line 1292
char str1[9] = "1\n23";
char str2[9] = "1\n23";
char str3[] = "321";
ck_assert_str_eq(strcat(str1, str3), s21_strcat(str2, str3));
} END_TEST

START_TEST(strcat_16) {
#line 1298
char str1[9] = "321";
char str2[9] = "321";
char str3[] = "123";
ck_assert_str_eq(strcat(str1, str3), s21_strcat(str2, str3));
} END_TEST

START_TEST(strcat_17) {
#line 1304
char str1[9] = " ";
char str2[9] = " ";
char str3[] = " ";
ck_assert_str_eq(strcat(str1, str3), s21_strcat(str2, str3));
} END_TEST

START_TEST(strcat_18) {
#line 1310
char str1[9] = "";
char str2[9] = "";
char str3[] = " ";
ck_assert_str_eq(strcat(str1, str3), s21_strcat(str2, str3));
} END_TEST

START_TEST(strcat_19) {
#line 1316
char str1[9] = " ";
char str2[9] = " ";
char str3[] = "";
ck_assert_str_eq(strcat(str1, str3), s21_strcat(str2, str3));
} END_TEST

START_TEST(strcat_20) {
#line 1322
char str1[9] = "";
char str2[9] = "";
char str3[] = "";
ck_assert_str_eq(strcat(str1, str3), s21_strcat(str2, str3));
} END_TEST

START_TEST(strncat_1) {
#line 1328
char str1[9] = "abc";
char str2[9] = "abc";
char str3[] = "def";
int n = 1;
ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
} END_TEST

START_TEST(strncat_2) {
#line 1335
char str1[9] = "ab\nc";
char str2[9] = "ab\nc";
char str3[] = "def";
int n = 1;
ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
} END_TEST

START_TEST(strncat_3) {
#line 1342
char str1[9] = "ab\0c";
char str2[9] = "ab\0c";
char str3[] = "def";
int n = 1;
ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
} END_TEST

START_TEST(strncat_4) {
#line 1349
char str1[9] = "abc";
char str2[9] = "abc";
char str3[] = "de\0f";
int n = 1;
ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
} END_TEST

START_TEST(strncat_5) {
#line 1356
char str1[9] = "abc";
char str2[9] = "abc";
char str3[] = "de\nf";
int n = 1;
ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
} END_TEST

START_TEST(strncat_6) {
#line 1363
char str1[9] = "ab\0c";
char str2[9] = "ab\0c";
char str3[] = "def";
int n = 4;
ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
} END_TEST

START_TEST(strncat_7) {
#line 1370
char str1[9] = "abc";
char str2[9] = "abc";
char str3[] = "de\0f";
int n = 4;
ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
} END_TEST

START_TEST(strncat_8) {
#line 1377
char str1[9] = "";
char str2[9] = "";
char str3[] = "def";
int n = 1;
ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
} END_TEST

START_TEST(strncat_9) {
#line 1384
char str1[9] = "abc";
char str2[9] = "abc";
char str3[] = "";
int n = 1;
ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
} END_TEST

START_TEST(strncat_10) {
#line 1391
char str1[9] = "abc";
char str2[9] = "abc";
char str3[] = "def";
int n = 3;
ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
} END_TEST

START_TEST(strncat_11) {
#line 1398
char str1[9] = "abc";
char str2[9] = "abc";
char str3[] = "def";
int n = 3;
ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
} END_TEST

START_TEST(strncat_12) {
#line 1405
char str1[9] = "ab\nc";
char str2[9] = "ab\nc";
char str3[] = "def";
int n = 3;
ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
} END_TEST

START_TEST(strncat_13) {
#line 1412
char str1[9] = "ab\0c";
char str2[9] = "ab\0c";
char str3[] = "def";
int n = 0;
ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
} END_TEST

START_TEST(strncat_14) {
#line 1419
char str1[9] = "abc";
char str2[9] = "abc";
char str3[] = "de\0f";
int n = 0;
ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
} END_TEST

START_TEST(strncat_16) {
#line 1426
char str1[9] = "ab\0c";
char str2[9] = "ab\0c";
char str3[] = "def";
int n = -4;
ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
} END_TEST

START_TEST(strncat_17) {
#line 1433
char str1[9] = "abc";
char str2[9] = "abc";
char str3[] = "de\0f";
int n = -4;
ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
} END_TEST

START_TEST(strncat_18) {
#line 1440
char str1[9] = "";
char str2[9] = "";
char str3[] = "def";
int n = -1;
ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
} END_TEST

START_TEST(strncat_19) {
#line 1447
char str1[9] = "";
char str2[9] = "";
char str3[] = "";
int n = -1;
ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
} END_TEST

START_TEST(strncat_20) {
#line 1454
char str1[9] = " ";
char str2[9] = " ";
char str3[] = " ";
int n = 0;
ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
} END_TEST

START_TEST(strchr_1) {
#line 1461
char str1[] = "abc";
int n = 'a';
ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
} END_TEST

START_TEST(strchr_2) {
#line 1466
char str1[] = "abc";
int n = 'd';
ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
} END_TEST

START_TEST(strchr_3) {
#line 1471
char str1[] = "abc";
int n = '1';
ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
} END_TEST

START_TEST(strchr_4) {
#line 1476
char str1[] = "abc";
int n = '\\';
ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
} END_TEST

START_TEST(strchr_5) {
#line 1481
char str1[] = "";
int n = 'a';
ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
} END_TEST

START_TEST(strchr_6) {
#line 1486
char str1[] = " ";
int n = 'a';
ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
} END_TEST

START_TEST(strchr_7) {
#line 1491
char str1[] = " ";
int n = ' ';
ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
} END_TEST

START_TEST(strchr_8) {
#line 1496
char str1[] = " ";
int n = '\\';
ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
} END_TEST

START_TEST(strchr_9) {
#line 1501
char str1[] = "021";
int n = '0';
ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
} END_TEST

START_TEST(strchr_10) {
#line 1506
char str1[] = "ab\nc";
int n = 'a';
ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
} END_TEST

START_TEST(strchr_11) {
#line 1511
char str1[] = "ab\nc";
int n = '\n';
ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
} END_TEST

START_TEST(strchr_12) {
#line 1516
char str1[] = "abc";
int n = '\0';
ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
} END_TEST

START_TEST(strchr_13) {
#line 1521
char str1[] = "ab\0c";
int n = 'a';
ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
} END_TEST

START_TEST(strchr_14) {
#line 1526
char str1[] = "ab\0c";
int n = '\0';
ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
} END_TEST

START_TEST(strchr_15) {
#line 1531
char str1[] = "";
int n = '\0';
ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
} END_TEST

START_TEST(strchr_16) {
#line 1536
char str1[] = "\0\0\0";
int n = '\0';
ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
} END_TEST

START_TEST(strchr_17) {
#line 1541
char str1[] = " ";
int n = '\\';
ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
} END_TEST

START_TEST(strchr_18) {
#line 1546
char str1[] = "";
int n = '\\';
ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
} END_TEST

START_TEST(strchr_19) {
#line 1551
char str1[] = "ab,c";
int n = ',';
ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
} END_TEST

START_TEST(strchr_20) {
#line 1556
char str1[] = "abcdefghijklmnopqrst";
int n = 't';
ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
} END_TEST

START_TEST(strchr_21) {
#line 1561
char str1[] = "abcdtefghijktlmnopqrst";
int n = 't';
ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
} END_TEST

START_TEST(strcmp_1) {
char str1[] = "abc";
char str2[] = "abc";
int s21 = s21_strcmp(str1, str2);
int s00 = strcmp(str1, str2);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strcmp_2) {
#line 1571
char str1[] = "Abc";
char str2[] = "abc";
int s21 = s21_strcmp(str1, str2);
int s00 = strcmp(str1, str2);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strcmp_3) {
#line 1576
char str1[] = "abc";
char str2[] = "Abc";
int s21 = s21_strcmp(str1, str2);
int s00 = strcmp(str1, str2);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strcmp_4) {
#line 1581
char str1[] = "abC";
char str2[] = "abc";
int s21 = s21_strcmp(str1, str2);
int s00 = strcmp(str1, str2);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strcmp_5) {
#line 1586
char str1[] = "abc";
char str2[] = "abC";
int s21 = s21_strcmp(str1, str2);
int s00 = strcmp(str1, str2);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strcmp_6) {
#line 1591
char str1[] = "ABC";
char str2[] = "abc";
int s21 = s21_strcmp(str1, str2);
int s00 = strcmp(str1, str2);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strcmp_7) {
#line 1596
char str1[] = "abc";
char str2[] = "ABC";
int s21 = s21_strcmp(str1, str2);
int s00 = strcmp(str1, str2);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strcmp_8) {
#line 1601
char str1[] = "a b c";
char str2[] = "abc";
int s21 = s21_strcmp(str1, str2);
int s00 = strcmp(str1, str2);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strcmp_9) {
#line 1606
char str1[] = "abc";
char str2[] = "a b c";
int s21 = s21_strcmp(str1, str2);
int s00 = strcmp(str1, str2);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strcmp_10) {
#line 1611
char str1[] = "";
char str2[] = "abc";
int s21 = s21_strcmp(str1, str2);
int s00 = strcmp(str1, str2);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strcmp_11) {
#line 1616
char str1[] = "abc";
char str2[] = "";
int s21 = s21_strcmp(str1, str2);
int s00 = strcmp(str1, str2);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strcmp_12) {
#line 1621
char str1[] = " ";
char str2[] = "abc";
int s21 = s21_strcmp(str1, str2);
int s00 = strcmp(str1, str2);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strcmp_13) {
#line 1626
char str1[] = "abc";
char str2[] = " ";
int s21 = s21_strcmp(str1, str2);
int s00 = strcmp(str1, str2);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strcmp_14) {
#line 1631
char str1[] = "9087";
char str2[] = "657";
int s21 = s21_strcmp(str1, str2);
int s00 = strcmp(str1, str2);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strcmp_15) {
#line 1636
char str1[] = "";
char str2[] = "";
int s21 = s21_strcmp(str1, str2);
int s00 = strcmp(str1, str2);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strcmp_16) {
#line 1641
char str1[] = " ";
char str2[] = " ";
int s21 = s21_strcmp(str1, str2);
int s00 = strcmp(str1, str2);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strcmp_17) {
#line 1646
char str1[] = "abc ";
char str2[] = "abc";
int s21 = s21_strcmp(str1, str2);
int s00 = strcmp(str1, str2);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strcmp_18) {
#line 1651
char str1[] = "abc";
char str2[] = "abc ";
int s21 = s21_strcmp(str1, str2);
int s00 = strcmp(str1, str2);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strcmp_19) {
#line 1656
char str1[] = " abc";
char str2[] = "abc";
int s21 = s21_strcmp(str1, str2);
int s00 = strcmp(str1, str2);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strcmp_20) {
#line 1661
char str1[] = "abc";
char str2[] = " abc";
int s21 = s21_strcmp(str1, str2);
int s00 = strcmp(str1, str2);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strcmp_21) {
#line 1666
char str1[] = "123";
char str2[] = "123";
int s21 = s21_strcmp(str1, str2);
int s00 = strcmp(str1, str2);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strcmp_22) {
#line 1671
char str1[] = "123";
char str2[] = "321";
int s21 = s21_strcmp(str1, str2);
int s00 = strcmp(str1, str2);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strcmp_23) {
#line 1676
char str1[] = "321";
char str2[] = "321";
int s21 = s21_strcmp(str1, str2);
int s00 = strcmp(str1, str2);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strcmp_24) {
#line 1681
char str1[] = "321";
char str2[] = "123";
int s21 = s21_strcmp(str1, str2);
int s00 = strcmp(str1, str2);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strcmp_25) {
#line 1686
char str1[] = "1234";
char str2[] = "123";
int s21 = s21_strcmp(str1, str2);
int s00 = strcmp(str1, str2);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strcmp_26) {
#line 1691
char str1[] = "132";
char str2[] = "1234";
int s21 = s21_strcmp(str1, str2);
int s00 = strcmp(str1, str2);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strcmp_27) {
#line 1696
char str1[] = "abcd";
char str2[] = "abc";
int s21 = s21_strcmp(str1, str2);
int s00 = strcmp(str1, str2);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strcmp_28) {
#line 1701
char str1[] = "abc";
char str2[] = "abcd";
int s21 = s21_strcmp(str1, str2);
int s00 = strcmp(str1, str2);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strcmp_29) {
#line 1706
char str1[] = "12ab";
char str2[] = "12ab";
int s21 = s21_strcmp(str1, str2);
int s00 = strcmp(str1, str2);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strcmp_30) {
#line 1711
char str1[9] = "ab12";
char str2[9] = "12ab";
int s21 = s21_strcmp(str1, str2);
int s00 = strcmp(str1, str2);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strncmp_1) {
#line 1716
char str1[] = "abc";
char str2[] = "abc";
int n = 3;
int s21 = s21_strncmp(str1, str2, n);
int s00 = strncmp(str1, str2, n);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strncmp_2) {
#line 1722
char str1[] = "Abc";
char str2[] = "abc";
int n = 3;
int s21 = s21_strncmp(str1, str2, n);
int s00 = strncmp(str1, str2, n);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strncmp_3) {
#line 1728
char str1[] = "abc";
char str2[] = "Abc";
int n = 3;
int s21 = s21_strncmp(str1, str2, n);
int s00 = strncmp(str1, str2, n);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strncmp_4) {
#line 1734
char str1[] = "abC";
char str2[] = "abc";
int n = 3;
int s21 = s21_strncmp(str1, str2, n);
int s00 = strncmp(str1, str2, n);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strncmp_5) {
#line 1740
char str1[] = "abc";
char str2[] = "abC";
int n = 3;
int s21 = s21_strncmp(str1, str2, n);
int s00 = strncmp(str1, str2, n);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strncmp_6) {
#line 1746
char str1[] = "ABC";
char str2[] = "abc";
int n = 3;
int s21 = s21_strncmp(str1, str2, n);
int s00 = strncmp(str1, str2, n);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strncmp_7) {
#line 1752
char str1[] = "abc";
char str2[] = "ABC";
int n = 3;
int s21 = s21_strncmp(str1, str2, n);
int s00 = strncmp(str1, str2, n);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strncmp_8) {
#line 1758
char str1[] = "a b c";
char str2[] = "abc";
int n = 3;
int s21 = s21_strncmp(str1, str2, n);
int s00 = strncmp(str1, str2, n);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strncmp_9) {
#line 1764
char str1[] = "abc";
char str2[] = "a b c";
int n = 3;
int s21 = s21_strncmp(str1, str2, n);
int s00 = strncmp(str1, str2, n);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strncmp_10) {
#line 1770
char str1[] = "";
char str2[] = "abc";
int n = 3;
int s21 = s21_strncmp(str1, str2, n);
int s00 = strncmp(str1, str2, n);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strncmp_11) {
#line 1776
char str1[] = "abc";
char str2[] = "";
int n = 3;
int s21 = s21_strncmp(str1, str2, n);
int s00 = strncmp(str1, str2, n);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strncmp_12) {
#line 1782
char str1[] = " ";
char str2[] = "abc";
int n = 3;
int s21 = s21_strncmp(str1, str2, n);
int s00 = strncmp(str1, str2, n);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strncmp_13) {
#line 1788
char str1[] = "abc";
char str2[] = " ";
int n = 3;
int s21 = s21_strncmp(str1, str2, n);
int s00 = strncmp(str1, str2, n);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strncmp_14) {
#line 1794
char str1[] = "9087";
char str2[] = "657";
int n = 3;
int s21 = s21_strncmp(str1, str2, n);
int s00 = strncmp(str1, str2, n);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strncmp_15) {
#line 1800
char str1[] = "";
char str2[] = "";
int n = 3;
int s21 = s21_strncmp(str1, str2, n);
int s00 = strncmp(str1, str2, n);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strncmp_16) {
#line 1806
char str1[] = " ";
char str2[] = " ";
int n = 3;
int s21 = s21_strncmp(str1, str2, n);
int s00 = strncmp(str1, str2, n);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strncmp_17) {
#line 1812
char str1[] = "abc ";
char str2[] = "abc";
int n = 3;
int s21 = s21_strncmp(str1, str2, n);
int s00 = strncmp(str1, str2, n);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strncmp_18) {
#line 1818
char str1[] = "abc";
char str2[] = "abc ";
int n = 3;
int s21 = s21_strncmp(str1, str2, n);
int s00 = strncmp(str1, str2, n);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strncmp_19) {
#line 1824
char str1[] = " abc";
char str2[] = "abc";
int n = 3;
int s21 = s21_strncmp(str1, str2, n);
int s00 = strncmp(str1, str2, n);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strncmp_20) {
#line 1830
char str1[] = "abc";
char str2[] = " abc";
int n = 3;
int s21 = s21_strncmp(str1, str2, n);
int s00 = strncmp(str1, str2, n);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strncmp_21) {
#line 1836
char str1[] = "123";
char str2[] = "123";
int n = 3;
int s21 = s21_strncmp(str1, str2, n);
int s00 = strncmp(str1, str2, n);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strncmp_22) {
#line 1842
char str1[] = "123";
char str2[] = "321";
int n = 3;
int s21 = s21_strncmp(str1, str2, n);
int s00 = strncmp(str1, str2, n);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strncmp_23) {
#line 1848
char str1[] = "321";
char str2[] = "321";
int n = 3;
int s21 = s21_strncmp(str1, str2, n);
int s00 = strncmp(str1, str2, n);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strncmp_24) {
#line 1854
char str1[] = "321";
char str2[] = "123";
int n = 3;
int s21 = s21_strncmp(str1, str2, n);
int s00 = strncmp(str1, str2, n);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strncmp_25) {
#line 1860
char str1[] = "1234";
char str2[] = "123";
int n = 3;
int s21 = s21_strncmp(str1, str2, n);
int s00 = strncmp(str1, str2, n);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strncmp_26) {
#line 1866
char str1[] = "132";
char str2[] = "1234";
int n = 3;
int s21 = s21_strncmp(str1, str2, n);
int s00 = strncmp(str1, str2, n);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strncmp_27) {
#line 1872
char str1[] = "abcd";
char str2[] = "abc";
int n = 3;
int s21 = s21_strncmp(str1, str2, n);
int s00 = strncmp(str1, str2, n);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strncmp_28) {
#line 1878
char str1[] = "abc";
char str2[] = "abcd";
int n = 3;
int s21 = s21_strncmp(str1, str2, n);
int s00 = strncmp(str1, str2, n);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strncmp_29) {
#line 1884
char str1[] = "12ab";
char str2[] = "12ab";
int n = 3;
int s21 = s21_strncmp(str1, str2, n);
int s00 = strncmp(str1, str2, n);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strncmp_30) {
#line 1890
char str1[] = "ab12";
char str2[] = "12ab";
int n = 3;
int s21 = s21_strncmp(str1, str2, n);
int s00 = strncmp(str1, str2, n);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strncmp_31) {
#line 1896
char str1[] = "abc";
char str2[] = "abc";
int n = 10;
int s21 = s21_strncmp(str1, str2, n);
int s00 = strncmp(str1, str2, n);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strncmp_32) {
#line 1902
char str1[] = "Abc";
char str2[] = "abc";
int n = 10;
int s21 = s21_strncmp(str1, str2, n);
int s00 = strncmp(str1, str2, n);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strncmp_33) {
#line 1908
char str1[] = "abc";
char str2[] = "Abc";
int n = 10;
int s21 = s21_strncmp(str1, str2, n);
int s00 = strncmp(str1, str2, n);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strncmp_34) {
#line 1914
char str1[] = "abC";
char str2[] = "abc";
int n = 10;
int s21 = s21_strncmp(str1, str2, n);
int s00 = strncmp(str1, str2, n);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strncmp_35) {
#line 1920
char str1[] = "abc";
char str2[] = "abC";
int n = 10;
int s21 = s21_strncmp(str1, str2, n);
int s00 = strncmp(str1, str2, n);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strncmp_36) {
#line 1926
char str1[] = "ABC";
char str2[] = "abc";
int n = 10;
int s21 = s21_strncmp(str1, str2, n);
int s00 = strncmp(str1, str2, n);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strncmp_37) {
#line 1932
char str1[] = "abc";
char str2[] = "ABC";
int n = 10;
int s21 = s21_strncmp(str1, str2, n);
int s00 = strncmp(str1, str2, n);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strncmp_38) {
#line 1938
char str1[] = "a b c";
char str2[] = "abc";
int n = 10;
int s21 = s21_strncmp(str1, str2, n);
int s00 = strncmp(str1, str2, n);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strncmp_39) {
#line 1944
char str1[] = "abc";
char str2[] = "a b c";
int n = 10;
int s21 = s21_strncmp(str1, str2, n);
int s00 = strncmp(str1, str2, n);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strncmp_40) {
#line 1950
char str1[] = "";
char str2[] = "abc";
int n = -10;
int s21 = s21_strncmp(str1, str2, n);
int s00 = strncmp(str1, str2, n);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strncmp_41) {
#line 1956
char str1[] = "abc";
char str2[] = "";
int n = -10;
int s21 = s21_strncmp(str1, str2, n);
int s00 = strncmp(str1, str2, n);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strncmp_42) {
#line 1962
char str1[] = " ";
char str2[] = "abc";
int n = -10;
int s21 = s21_strncmp(str1, str2, n);
int s00 = strncmp(str1, str2, n);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strncmp_43) {
#line 1968
char str1[] = "abc";
char str2[] = " ";
int n = -10;
int s21 = s21_strncmp(str1, str2, n);
int s00 = strncmp(str1, str2, n);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strncmp_44) {
#line 1974
char str1[] = "9087";
char str2[] = "657";
int n = -10;
int s21 = s21_strncmp(str1, str2, n);
int s00 = strncmp(str1, str2, n);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strncmp_45) {
#line 1980
char str1[] = "";
char str2[] = "";
int n = -10;
int s21 = s21_strncmp(str1, str2, n);
int s00 = strncmp(str1, str2, n);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strncmp_46) {
#line 1986
char str1[] = " ";
char str2[] = " ";
int n = -10;
int s21 = s21_strncmp(str1, str2, n);
int s00 = strncmp(str1, str2, n);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strncmp_47) {
#line 1992
char str1[] = "abc ";
char str2[] = "abc";
int n = -1;
int s21 = s21_strncmp(str1, str2, n);
int s00 = strncmp(str1, str2, n);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strncmp_48) {
#line 1998
char str1[] = "abc";
char str2[] = "abc ";
int n = -1;
int s21 = s21_strncmp(str1, str2, n);
int s00 = strncmp(str1, str2, n);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strncmp_49) {
#line 2004
char str1[] = " abc";
char str2[] = "abc";
int n = -1;
int s21 = s21_strncmp(str1, str2, n);
int s00 = strncmp(str1, str2, n);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strncmp_50) {
#line 2010
char str1[] = "abc";
char str2[] = " abc";
int n = 0;
int s21 = s21_strncmp(str1, str2, n);
int s00 = strncmp(str1, str2, n);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strncmp_51) {
#line 2016
char str1[] = "123";
char str2[] = "123";
int n = 0;
int s21 = s21_strncmp(str1, str2, n);
int s00 = strncmp(str1, str2, n);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strncmp_52) {
#line 2022
char str1[] = "123";
char str2[] = "321";
int n = 0;
int s21 = s21_strncmp(str1, str2, n);
int s00 = strncmp(str1, str2, n);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strncmp_53) {
#line 2028
char str1[] = "321";
char str2[] = "321";
int n = 0;
int s21 = s21_strncmp(str1, str2, n);
int s00 = strncmp(str1, str2, n);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strncmp_54) {
#line 2034
char str1[] = "321";
char str2[] = "123";
int n = 0;
int s21 = s21_strncmp(str1, str2, n);
int s00 = strncmp(str1, str2, n);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strncmp_55) {
#line 2040
char str1[] = "1234";
char str2[] = "123";
int n = 0;
int s21 = s21_strncmp(str1, str2, n);
int s00 = strncmp(str1, str2, n);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strncmp_56) {
#line 2046
char str1[] = "132";
char str2[] = "1234";
int n = 0;
int s21 = s21_strncmp(str1, str2, n);
int s00 = strncmp(str1, str2, n);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strncmp_57) {
#line 2052
char str1[] = "abcd";
char str2[] = "abc";
int n = 0;
int s21 = s21_strncmp(str1, str2, n);
int s00 = strncmp(str1, str2, n);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strncmp_58) {
#line 2058
char str1[] = "abc";
char str2[] = "abcd";
int n = 0;
int s21 = s21_strncmp(str1, str2, n);
int s00 = strncmp(str1, str2, n);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strncmp_59) {
#line 2064
char str1[] = "12ab";
char str2[] = "12ab";
int n = 0;
int s21 = s21_strncmp(str1, str2, n);
int s00 = strncmp(str1, str2, n);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strncmp_60) {
#line 2070
char str1[] = "ab12";
char str2[] = "12ab";
int n = 0;
int s21 = s21_strncmp(str1, str2, n);
int s00 = strncmp(str1, str2, n);
if (s21 > 1) {
    s21 = 1;
}
if (s21 < -1) {
    s21 = -1;
}
if (s00 > 1) {
    s00 = 1;
}
if (s00 < -1) {
    s00 = -1;
}
ck_assert_int_eq(s21, s00);
} END_TEST

START_TEST(strcpy_1) {
#line 2076
char str1[9] = "abc";
char str2[] = "def";
ck_assert_str_eq(strcpy(str1, str2), s21_strcpy(str1, str2));
} END_TEST

START_TEST(strcpy_2) {
#line 2081
char str1[9] = "abc\0";
char str2[] = "def";
ck_assert_str_eq(strcpy(str1, str2), s21_strcpy(str1, str2));
} END_TEST

START_TEST(strcpy_3) {
#line 2086
char str1[9] = "abc\n";
char str2[] = "def";
ck_assert_str_eq(strcpy(str1, str2), s21_strcpy(str1, str2));
} END_TEST

START_TEST(strcpy_4) {
#line 2091
char str1[9] = "ab\0c";
char str2[] = "def";
ck_assert_str_eq(strcpy(str1, str2), s21_strcpy(str1, str2));
} END_TEST

START_TEST(strcpy_5) {
#line 2096
char str1[9] = "a\nbc";
char str2[] = "def";
ck_assert_str_eq(strcpy(str1, str2), s21_strcpy(str1, str2));
} END_TEST

START_TEST(strcpy_6) {
#line 2101
char str1[9] = "abc ";
char str2[] = "def";
ck_assert_str_eq(strcpy(str1, str2), s21_strcpy(str1, str2));
} END_TEST

START_TEST(strcpy_7) {
#line 2106
char str1[9] = " abc";
char str2[] = "def";
ck_assert_str_eq(strcpy(str1, str2), s21_strcpy(str1, str2));
} END_TEST

START_TEST(strcpy_8) {
#line 2111
char str1[9] = "abc";
char str2[] = " def";
ck_assert_str_eq(strcpy(str1, str2), s21_strcpy(str1, str2));
} END_TEST

START_TEST(strcpy_9) {
#line 2116
char str1[9] = "abc";
char str2[] = "def ";
ck_assert_str_eq(strcpy(str1, str2), s21_strcpy(str1, str2));
} END_TEST

START_TEST(strcpy_10) {
#line 2121
char str1[9] = "abc";
char str2[] = "def00";
ck_assert_str_eq(strcpy(str1, str2), s21_strcpy(str1, str2));
} END_TEST

START_TEST(strcpy_11) {
#line 2126
char str1[9] = "";
char str2[] = "12\0";
ck_assert_str_eq(strcpy(str1, str2), s21_strcpy(str1, str2));
} END_TEST

START_TEST(strcpy_12) {
#line 2131
char str1[9] = "12\0";
char str2[] = "";
ck_assert_str_eq(strcpy(str1, str2), s21_strcpy(str1, str2));
} END_TEST

START_TEST(strcpy_13) {
#line 2136
char str1[9] = "32\1";
char str2[] = "";
ck_assert_str_eq(strcpy(str1, str2), s21_strcpy(str1, str2));
} END_TEST

START_TEST(strcpy_14) {
#line 2141
char str1[9] = "21\3c";
char str2[] = " ";
ck_assert_str_eq(strcpy(str1, str2), s21_strcpy(str1, str2));
} END_TEST

START_TEST(strcpy_15) {
#line 2146
char str1[9] = "1\n23";
char str2[] = "321";
ck_assert_str_eq(strcpy(str1, str2), s21_strcpy(str1, str2));
} END_TEST

START_TEST(strcpy_16) {
#line 2151
char str1[9] = "321";
char str2[] = "123";
ck_assert_str_eq(strcpy(str1, str2), s21_strcpy(str1, str2));
} END_TEST

START_TEST(strcpy_17) {
#line 2156
char str1[9] = " ";
char str2[] = " ";
ck_assert_str_eq(strcpy(str1, str2), s21_strcpy(str1, str2));
} END_TEST

START_TEST(strcpy_18) {
#line 2161
char str1[9] = "";
char str2[] = " ";
ck_assert_str_eq(strcpy(str1, str2), s21_strcpy(str1, str2));
} END_TEST

START_TEST(strcpy_19) {
#line 2166
char str1[9] = " ";
char str2[] = "";
ck_assert_str_eq(strcpy(str1, str2), s21_strcpy(str1, str2));
} END_TEST

START_TEST(strcpy_20) {
#line 2171
char str1[9] = "";
char str2[] = "";
ck_assert_str_eq(strcpy(str1, str2), s21_strcpy(str1, str2));
} END_TEST

START_TEST(strncpy_1) {
#line 2176
char str1[9] = "abc";
char str2[] = "def";
char str3[9] = "abc";
s21_size_t n = 1;
ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
} END_TEST

START_TEST(strncpy_2) {
#line 2183
char str1[9] = "ab\nc";
char str2[] = "def";
char str3[9] = "ab\nc";
int n = 1;
ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
} END_TEST

START_TEST(strncpy_3) {
#line 2190
char str1[9] = "ab\0c";
char str2[] = "def";
char str3[9] = "ab\0c";
int n = 1;
ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
} END_TEST

START_TEST(strncpy_4) {
#line 2197
char str1[9] = "abc";
char str2[] = "de\0f";
char str3[9] = "abc";
int n = 1;
ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
} END_TEST

START_TEST(strncpy_5) {
#line 2204
char str1[9] = "abc";
char str2[] = "de\nf";
char str3[9] = "abc";
int n = 1;
ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
} END_TEST

START_TEST(strncpy_6) {
#line 2211
char str1[9] = "ab\0c";
char str2[] = "def";
char str3[9] = "ab\0c";
int n = 4;
ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
} END_TEST

START_TEST(strncpy_7) {
#line 2218
char str1[9] = "abc";
char str2[] = "de\0f";
char str3[9] = "abc";
int n = 4;
ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
} END_TEST

START_TEST(strncpy_8) {
#line 2225
char str1[9] = "";
char str2[] = "def";
char str3[9] = "";
int n = 3;
strncpy(str1, str2, n);
s21_strncpy(str3, str2, n);
ck_assert_str_eq(str1, str3);
} END_TEST

START_TEST(strncpy_9) {
#line 2234
char str1[9] = "abc";
char str2[] = "";
char str3[9] = "abc";
int n = 1;
ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
} END_TEST

START_TEST(strncpy_10) {
#line 2241
char str1[9] = "abc";
char str2[] = "def";
char str3[9] = "abc";
int n = 1;
ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
} END_TEST

START_TEST(strncpy_11) {
#line 2248
char str1[9] = "abc";
char str2[] = "def";
char str3[9] = "abc";
int n = 1;
ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
} END_TEST

START_TEST(strncpy_12) {
#line 2255
char str1[9] = "ab\nc";
char str2[] = "def";
char str3[9] = "ab\nc";
int n = 9;
ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
} END_TEST

START_TEST(strncpy_13) {
#line 2262
char str1[9] = "ab\0c";
char str2[] = "def";
char str3[9] = "ab\0c";
int n = 0;
ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
} END_TEST

START_TEST(strncpy_14) {
#line 2269
char str1[9] = "abc";
char str2[] = "de\0f";
char str3[9] = "abc";
int n = 0;
ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
} END_TEST

START_TEST(strncpy_15) {
#line 2276
char str1[9] = "abc";
char str2[] = "de\nf";
char str3[9] = "abc";
int n = 7;
ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
} END_TEST

START_TEST(strncpy_16) {
#line 2283
char str1[9] = "ab\0c";
char str2[] = "def";
char str3[9] = "ab\0c";
int n = 4;
ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
} END_TEST

START_TEST(strncpy_17) {
#line 2290
char str1[9] = "abc";
char str2[] = "de\0f";
char str3[9] = "abc";
int n = 8;
ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
} END_TEST

START_TEST(strncpy_18) {
#line 2297
char str1[9] = "";
char str2[] = "def";
char str3[9] = "";
int n = 1;
ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
} END_TEST

START_TEST(strncpy_19) {
#line 2304
char str1[9] = "";
char str2[] = "";
char str3[9] = "";
int n = 1;
ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
} END_TEST

START_TEST(strncpy_20) {
#line 2311
char str1[9] = " ";
char str2[] = " ";
char str3[9] = " ";
int n = 0;
ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
} END_TEST

START_TEST(strcspn_1) {
#line 2318
char str1[] = "abc";
char str2[] = "abc";
ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
} END_TEST

START_TEST(strcspn_2) {
#line 2323
char str1[] = "Abc";
char str2[] = "abc";
ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
} END_TEST

START_TEST(strcspn_3) {
#line 2328
char str1[] = "abc";
char str2[] = "Abc";
ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
} END_TEST

START_TEST(strcspn_4) {
#line 2333
char str1[] = "abC";
char str2[] = "abc";
ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
} END_TEST

START_TEST(strcspn_5) {
#line 2338
char str1[] = "abc";
char str2[] = "abC";
ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
} END_TEST

START_TEST(strcspn_6) {
#line 2343
char str1[] = "ABC";
char str2[] = "abc";
ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
} END_TEST

START_TEST(strcspn_7) {
#line 2348
char str1[] = "abc";
char str2[] = "ABC";
ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
} END_TEST

START_TEST(strcspn_8) {
#line 2353
char str1[] = "a b c";
char str2[] = "abc";
ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
} END_TEST

START_TEST(strcspn_9) {
#line 2358
char str1[] = "abc";
char str2[] = "a b c";
ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
} END_TEST

START_TEST(strcspn_10) {
#line 2363
char str1[] = "";
char str2[] = "abc";
ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
} END_TEST

START_TEST(strcspn_11) {
#line 2368
char str1[] = "abc";
char str2[] = "";
ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
} END_TEST

START_TEST(strcspn_12) {
#line 2373
char str1[] = " ";
char str2[] = "abc";
ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
} END_TEST

START_TEST(strcspn_13) {
#line 2378
char str1[] = "abc";
char str2[] = " ";
ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
} END_TEST

START_TEST(strcspn_14) {
#line 2383
char str1[] = "9087";
char str2[] = "657";
ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
} END_TEST

START_TEST(strcspn_15) {
#line 2388
char str1[] = "";
char str2[] = "";
ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
} END_TEST

START_TEST(strcspn_16) {
#line 2393
char str1[] = " ";
char str2[] = " ";
ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
} END_TEST

START_TEST(strcspn_17) {
#line 2398
char str1[] = "abc ";
char str2[] = "abc";
ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
} END_TEST

START_TEST(strcspn_18) {
#line 2403
char str1[] = "abc";
char str2[] = "abc ";
ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
} END_TEST

START_TEST(strcspn_19) {
#line 2408
char str1[] = " abc";
char str2[] = "abc";
ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
} END_TEST

START_TEST(strcspn_20) {
#line 2413
char str1[] = "abc";
char str2[] = " abc";
ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
} END_TEST

START_TEST(strcspn_21) {
#line 2418
char str1[] = "123";
char str2[] = "123";
ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
} END_TEST

START_TEST(strcspn_22) {
#line 2423
char str1[] = "123";
char str2[] = "321";
ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
} END_TEST

START_TEST(strcspn_23) {
#line 2428
char str1[] = "321";
char str2[] = "321";
ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
} END_TEST

START_TEST(strcspn_24) {
#line 2433
char str1[] = "321";
char str2[] = "123";
ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
} END_TEST

START_TEST(strcspn_25) {
#line 2438
char str1[] = "1234";
char str2[] = "123";
ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
} END_TEST

START_TEST(strcspn_26) {
#line 2443
char str1[] = "132";
char str2[] = "1234";
ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
} END_TEST

START_TEST(strcspn_27) {
#line 2448
char str1[] = "abcd";
char str2[] = "abc";
ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
} END_TEST

START_TEST(strcspn_28) {
#line 2453
char str1[] = "abc";
char str2[] = "abcd";
ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
} END_TEST

START_TEST(strcspn_29) {
#line 2458
char str1[] = "12ab";
char str2[] = "12ab";
ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
} END_TEST

START_TEST(strcspn_30) {
#line 2463
char str1[] = "ab12";
char str2[] = "12ab";
ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strlen_1) {
#line 2469
char str1[] = "abcde";
ck_assert_int_eq(strlen(str1), s21_strlen(str1));
} END_TEST

START_TEST(strlen_2) {
#line 2473
char str1[] = "12345";
ck_assert_int_eq(strlen(str1), s21_strlen(str1));
} END_TEST

START_TEST(strlen_3) {
#line 2477
char str1[] = "00000";
ck_assert_int_eq(strlen(str1), s21_strlen(str1));
} END_TEST

START_TEST(strlen_4) {
#line 2481
char str1[] = ".....";
ck_assert_int_eq(strlen(str1), s21_strlen(str1));
} END_TEST

START_TEST(strlen_5) {
#line 2485
char str1[] = "   ";
ck_assert_int_eq(strlen(str1), s21_strlen(str1));
} END_TEST

START_TEST(strlen_6) {
#line 2489
char str1[] = "+_@$)@)(%*";
ck_assert_int_eq(strlen(str1), s21_strlen(str1));
} END_TEST

START_TEST(strlen_7) {
#line 2493
char str1[] = "\n";
ck_assert_int_eq(strlen(str1), s21_strlen(str1));
} END_TEST

START_TEST(strlen_8) {
#line 2497
char str1[] = " 0";
ck_assert_int_eq(strlen(str1), s21_strlen(str1));
} END_TEST

START_TEST(strlen_9) {
#line 2501
char str1[] = "0 ";
ck_assert_int_eq(strlen(str1), s21_strlen(str1));
} END_TEST

START_TEST(strlen_10) {
#line 2505
char str1[] = "j ";
ck_assert_int_eq(strlen(str1), s21_strlen(str1));
} END_TEST

START_TEST(strlen_11) {
#line 2509
char str1[] = " k";
ck_assert_int_eq(strlen(str1), s21_strlen(str1));
} END_TEST

START_TEST(strlen_12) {
#line 2513
char str1[] = "";
ck_assert_int_eq(strlen(str1), s21_strlen(str1));
} END_TEST

START_TEST(strlen_13) {
#line 2517
char str1[] = "!";
ck_assert_int_eq(strlen(str1), s21_strlen(str1));
} END_TEST

START_TEST(strlen_14) {
#line 2521
char str1[] = "\'";
ck_assert_int_eq(strlen(str1), s21_strlen(str1));
} END_TEST

START_TEST(strlen_15) {
#line 2525
char str1[] = "\0";
ck_assert_int_eq(strlen(str1), s21_strlen(str1));
} END_TEST

START_TEST(strlen_16) {
#line 2529
char str1[] = "k\0";
ck_assert_int_eq(strlen(str1), s21_strlen(str1));
} END_TEST

START_TEST(strlen_17) {
#line 2533
char str1[] = " \0";
ck_assert_int_eq(strlen(str1), s21_strlen(str1));
} END_TEST

START_TEST(strlen_18) {
#line 2537
char str1[] = "\0 0n";
ck_assert_int_eq(strlen(str1), s21_strlen(str1));
} END_TEST

START_TEST(strlen_19) {
#line 2541
char str1[] = "\n klj";
ck_assert_int_eq(strlen(str1), s21_strlen(str1));
} END_TEST

START_TEST(strlen_20) {
#line 2545
char str1[] = "\n\0";
ck_assert_int_eq(strlen(str1), s21_strlen(str1));
} END_TEST

START_TEST(strpbrk_1) {
#line 2549
char str1[] = "this is a test";
char str2[] = "this";
ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
} END_TEST

START_TEST(strpbrk_2) {
#line 2554
char str1[] = "this is a test";
char str2[] = "abc";
ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
} END_TEST

START_TEST(strpbrk_3) {
#line 2559
char str1[] = "abc";
char str2[] = "ccc";
ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
} END_TEST

START_TEST(strpbrk_4) {
#line 2564
char str1[] = "abc123";
char str2[] = "123";
ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
} END_TEST

START_TEST(strpbrk_5) {
#line 2569
char str1[] = "abglk1erw233c";
char str2[] = "321";
ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
} END_TEST

START_TEST(strpbrk_6) {
#line 2574
char str1[] = "ab\nc";
char str2[] = "\n";
ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
} END_TEST

START_TEST(strpbrk_7) {
#line 2579
char str1[] = "a8yuoiytu5u6rtyfkguhubc";
char str2[] = "123i6t5";
ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
} END_TEST

START_TEST(strpbrk_8) {
#line 2584
char str1[] = "a77777bc";
char str2[] = "177723";
ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
} END_TEST

START_TEST(strpbrk_9) {
#line 2589
char str1[] = "ab7itgkhm.,c";
char str2[] = "12hjv3";
ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
} END_TEST

START_TEST(strpbrk_10) {
#line 2594
char str1[] = "ab.,c";
char str2[] = "127863";
ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
} END_TEST

START_TEST(strpbrk_11) {
#line 2599
char str1[] = "abc";
char str2[] = "";
ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
} END_TEST

START_TEST(strpbrk_12) {
#line 2604
char str1[] = " ";
char str2[] = "abc";
ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
} END_TEST

START_TEST(strpbrk_13) {
#line 2609
char str1[] = "abc";
char str2[] = " ";
ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
} END_TEST

START_TEST(strpbrk_14) {
#line 2614
char str1[] = "9087";
char str2[] = "657";
ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
} END_TEST

START_TEST(strpbrk_15) {
#line 2619
char str1[] = "";
char str2[] = "";
ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
} END_TEST

START_TEST(strpbrk_16) {
#line 2624
char str1[] = " ";
char str2[] = " ";
ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
} END_TEST

START_TEST(strpbrk_17) {
#line 2629
char str1[] = "abc ";
char str2[] = "abc";
ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
} END_TEST

START_TEST(strpbrk_18) {
#line 2634
char str1[] = "abc";
char str2[] = "abc ";
ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
} END_TEST

START_TEST(strpbrk_19) {
#line 2639
char str1[] = " abc";
char str2[] = "abc";
ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
} END_TEST

START_TEST(strpbrk_20) {
#line 2644
char str1[] = "abc";
char str2[] = " abc";
ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
} END_TEST

START_TEST(strpbrk_21) {
#line 2649
char str1[] = "123";
char str2[] = "123";
ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
} END_TEST

START_TEST(strpbrk_22) {
#line 2654
char str1[] = "123";
char str2[] = "321";
ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
} END_TEST

START_TEST(strpbrk_23) {
#line 2659
char str1[] = "321";
char str2[] = "321";
ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
} END_TEST

START_TEST(strpbrk_24) {
#line 2664
char str1[] = "321";
char str2[] = "123";
ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
} END_TEST

START_TEST(strpbrk_25) {
#line 2669
char str1[] = "1234";
char str2[] = "123";
ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
} END_TEST

START_TEST(strpbrk_26) {
#line 2674
char str1[] = "132";
char str2[] = "1234";
ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
} END_TEST

START_TEST(strpbrk_27) {
#line 2679
char str1[] = "abcd";
char str2[] = "abc";
ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
} END_TEST

START_TEST(strpbrk_28) {
#line 2684
char str1[] = "abc";
char str2[] = "abcd";
ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
} END_TEST

START_TEST(strpbrk_29) {
#line 2689
char str1[] = "12ab";
char str2[] = "12ab";
ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
} END_TEST

START_TEST(strpbrk_30) {
#line 2694
char str1[] = "ab12";
char str2[] = "12ab";
ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
} END_TEST

START_TEST(strpbrk_31) {
#line 2699
char str1[] = "abc";
char str2[] = "";
ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
} END_TEST

START_TEST(strpbrk_32) {
#line 2704
char str1[] = " ";
char str2[] = "abc";
ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
} END_TEST

START_TEST(strpbrk_33) {
#line 2709
char str1[] = "abc";
char str2[] = " ";
ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
} END_TEST

START_TEST(strpbrk_34) {
#line 2714
char str1[] = "9087";
char str2[] = "657";
ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
} END_TEST

START_TEST(strpbrk_35) {
#line 2719
char str1[] = "";
char str2[] = "";
ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
} END_TEST

START_TEST(strpbrk_36) {
#line 2724
char str1[] = " ";
char str2[] = " ";
ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
} END_TEST

START_TEST(strpbrk_37) {
#line 2729
char str1[] = "abc ";
char str2[] = "abc";
ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
} END_TEST

START_TEST(strpbrk_38) {
#line 2734
char str1[] = "abc";
char str2[] = "abc ";
ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
} END_TEST

START_TEST(strpbrk_39) {
#line 2739
char str1[] = " abc";
char str2[] = "abc";
ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
} END_TEST

START_TEST(strpbrk_40) {
#line 2744
char str1[] = "abc";
char str2[] = " abc";
ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
} END_TEST

START_TEST(strrchr_1) {
#line 2749
char str1[] = "abc";
int n = 'a';
ck_assert_ptr_eq(strrchr(str1, n), s21_strrchr(str1, n));
} END_TEST

START_TEST(strrchr_2) {
#line 2754
char str1[] = "abc";
int n = 'd';
ck_assert_ptr_eq(strrchr(str1, n), s21_strrchr(str1, n));
} END_TEST

START_TEST(strrchr_3) {
#line 2759
char str1[] = "abc";
int n = '1';
ck_assert_ptr_eq(strrchr(str1, n), s21_strrchr(str1, n));
} END_TEST

START_TEST(strrchr_4) {
#line 2764
char str1[] = "abc";
int n = '\\';
ck_assert_ptr_eq(strrchr(str1, n), s21_strrchr(str1, n));
} END_TEST

START_TEST(strrchr_5) {
#line 2769
char str1[] = "";
int n = 'a';
ck_assert_ptr_eq(strrchr(str1, n), s21_strrchr(str1, n));
} END_TEST

START_TEST(strrchr_6) {
#line 2774
char str1[] = " ";
int n = 'a';
ck_assert_ptr_eq(strrchr(str1, n), s21_strrchr(str1, n));
} END_TEST

START_TEST(strrchr_7) {
#line 2779
char str1[] = " ";
int n = ' ';
ck_assert_ptr_eq(strrchr(str1, n), s21_strrchr(str1, n));
} END_TEST

START_TEST(strrchr_8) {
#line 2784
char str1[] = " ";
int n = '\\';
ck_assert_ptr_eq(strrchr(str1, n), s21_strrchr(str1, n));
} END_TEST

START_TEST(strrchr_9) {
#line 2789
char str1[] = "021";
int n = '0';
ck_assert_ptr_eq(strrchr(str1, n), s21_strrchr(str1, n));
} END_TEST

START_TEST(strrchr_10) {
#line 2794
char str1[] = "ab\nc";
int n = 'a';
ck_assert_ptr_eq(strrchr(str1, n), s21_strrchr(str1, n));
} END_TEST

START_TEST(strrchr_11) {
#line 2799
char str1[] = "ab\nc";
int n = '\n';
ck_assert_ptr_eq(strrchr(str1, n), s21_strrchr(str1, n));
} END_TEST

START_TEST(strrchr_12) {
#line 2804
char str1[] = "abc";
int n = '\0';
ck_assert_ptr_eq(strrchr(str1, n), s21_strrchr(str1, n));
} END_TEST

START_TEST(strrchr_13) {
#line 2809
char str1[] = "ab\0c";
int n = 'a';
ck_assert_ptr_eq(strrchr(str1, n), s21_strrchr(str1, n));
} END_TEST

START_TEST(strrchr_14) {
#line 2814
char str1[] = "ab\0c";
int n = '\0';
ck_assert_ptr_eq(strrchr(str1, n), s21_strrchr(str1, n));
} END_TEST

START_TEST(strrchr_15) {
#line 2819
char str1[] = "";
int n = '\0';
ck_assert_ptr_eq(strrchr(str1, n), s21_strrchr(str1, n));
} END_TEST

START_TEST(strrchr_16) {
#line 2824
char str1[] = "\0\0\0";
int n = '\0';
ck_assert_ptr_eq(strrchr(str1, n), s21_strrchr(str1, n));
} END_TEST

START_TEST(strrchr_17) {
#line 2829
char str1[] = " ";
int n = '\\';
ck_assert_ptr_eq(strrchr(str1, n), s21_strrchr(str1, n));
} END_TEST

START_TEST(strrchr_18) {
#line 2834
char str1[] = "";
int n = '\\';
ck_assert_ptr_eq(strrchr(str1, n), s21_strrchr(str1, n));
} END_TEST

START_TEST(strrchr_19) {
#line 2839
char str1[] = "ab,c";
int n = ',';
ck_assert_ptr_eq(strrchr(str1, n), s21_strrchr(str1, n));
} END_TEST

START_TEST(strrchr_20) {
#line 2844
char str1[] = "abcdefghijklmnopqrst";
int n = 't';
ck_assert_ptr_eq(strrchr(str1, n), s21_strrchr(str1, n));
} END_TEST

START_TEST(strspn_1) {
#line 2849
char str1[] = "abc";
char str2[] = "abc";
ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
} END_TEST

START_TEST(strspn_2) {
#line 2854
char str1[] = "Abc";
char str2[] = "abc";
ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
} END_TEST

START_TEST(strspn_3) {
#line 2859
char str1[] = "abc";
char str2[] = "Abc";
ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
} END_TEST

START_TEST(strspn_4) {
#line 2864
char str1[] = "abC";
char str2[] = "abc";
ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
} END_TEST

START_TEST(strspn_5) {
#line 2869
char str1[] = "abc";
char str2[] = "abC";
ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
} END_TEST

START_TEST(strspn_6) {
#line 2874
char str1[] = "ABC";
char str2[] = "abc";
ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
} END_TEST

START_TEST(strspn_7) {
#line 2879
char str1[] = "abc";
char str2[] = "ABC";
ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
} END_TEST

START_TEST(strspn_8) {
#line 2884
char str1[] = "a b c";
char str2[] = "abc";
ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
} END_TEST

START_TEST(strspn_9) {
#line 2889
char str1[] = "abc";
char str2[] = "a b c";
ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
} END_TEST

START_TEST(strspn_10) {
#line 2894
char str1[] = "";
char str2[] = "abc";
ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
} END_TEST

START_TEST(strspn_11) {
#line 2899
char str1[] = "abc";
char str2[] = "";
ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
} END_TEST

START_TEST(strspn_12) {
#line 2904
char str1[] = " ";
char str2[] = "abc";
ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
} END_TEST

START_TEST(strspn_13) {
#line 2909
char str1[] = "abc";
char str2[] = " ";
ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
} END_TEST

START_TEST(strspn_14) {
#line 2914
char str1[] = "9087";
char str2[] = "657";
ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
} END_TEST

START_TEST(strspn_15) {
#line 2919
char str1[] = "";
char str2[] = "";
ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
} END_TEST

START_TEST(strspn_16) {
#line 2924
char str1[] = " ";
char str2[] = " ";
ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
} END_TEST

START_TEST(strspn_17) {
#line 2929
char str1[] = "abc ";
char str2[] = "abc";
ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
} END_TEST

START_TEST(strspn_18) {
#line 2934
char str1[] = "abc";
char str2[] = "abc ";
ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
} END_TEST

START_TEST(strspn_19) {
#line 2939
char str1[] = " abc";
char str2[] = "abc";
ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
} END_TEST

START_TEST(strspn_20) {
#line 2944
char str1[] = "abc";
char str2[] = " abc";
ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
} END_TEST

START_TEST(strspn_21) {
#line 2949
char str1[] = "123";
char str2[] = "123";
ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
} END_TEST

START_TEST(strspn_22) {
#line 2954
char str1[] = "123";
char str2[] = "321";
ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
} END_TEST

START_TEST(strspn_23) {
#line 2959
char str1[] = "321";
char str2[] = "321";
ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
} END_TEST

START_TEST(strspn_24) {
#line 2964
char str1[] = "321";
char str2[] = "123";
ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
} END_TEST

START_TEST(strspn_25) {
#line 2969
char str1[] = "1234";
char str2[] = "123";
ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
} END_TEST

START_TEST(strspn_26) {
#line 2974
char str1[] = "132";
char str2[] = "1234";
ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
} END_TEST

START_TEST(strspn_27) {
#line 2979
char str1[] = "abcd";
char str2[] = "abc";
ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
} END_TEST

START_TEST(strspn_28) {
#line 2984
char str1[] = "abc";
char str2[] = "abcd";
ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
} END_TEST

START_TEST(strspn_29) {
#line 2989
char str1[] = "12ab";
char str2[] = "12ab";
ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
} END_TEST

START_TEST(strspn_30) {
#line 2994
char str1[] = "ab12";
char str2[] = "12ab";
ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
} END_TEST

START_TEST(strspn_31) {
#line 2999
char str1[] = "a231546yutiljkhgtyre565786oiu;jlkhb12";
char str2[] = "12333333333333333333333333333333333ab";
ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
} END_TEST

START_TEST(strstr_1) {
#line 3004
char str1[] = "abc";
char str2[] = "abc";
ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
} END_TEST

START_TEST(strstr_2) {
#line 3009
char str1[] = "Abc";
char str2[] = "abc";
ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
} END_TEST

START_TEST(strstr_3) {
#line 3014
char str1[] = "abc";
char str2[] = "Abc";
ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
} END_TEST

START_TEST(strstr_4) {
#line 3019
char str1[] = "abC";
char str2[] = "abc";
ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
} END_TEST

START_TEST(strstr_5) {
#line 3024
char str1[] = "abc";
char str2[] = "abC";
ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
} END_TEST

START_TEST(strstr_6) {
#line 3029
char str1[] = "ABC";
char str2[] = "abc";
ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
} END_TEST

START_TEST(strstr_7) {
#line 3034
char str1[] = "abc";
char str2[] = "ABC";
ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
} END_TEST

START_TEST(strstr_8) {
#line 3039
char str1[] = "a b c";
char str2[] = "abc";
ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
} END_TEST

START_TEST(strstr_9) {
#line 3044
char str1[] = "abc";
char str2[] = "a b c";
ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
} END_TEST

START_TEST(strstr_10) {
#line 3049
char str1[] = "";
char str2[] = "abc";
ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
} END_TEST

START_TEST(strstr_11) {
#line 3054
char str1[] = "abc";
char str2[] = "";
ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
} END_TEST

START_TEST(strstr_12) {
#line 3059
char str1[] = " ";
char str2[] = "abc";
ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
} END_TEST

START_TEST(strstr_13) {
#line 3064
char str1[] = "abc";
char str2[] = " ";
ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
} END_TEST

START_TEST(strstr_14) {
#line 3069
char str1[] = "9087";
char str2[] = "657";
ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
} END_TEST

START_TEST(strstr_15) {
#line 3074
char str1[] = "";
char str2[] = "";
ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
} END_TEST

START_TEST(strstr_16) {
#line 3079
char str1[] = " ";
char str2[] = " ";
ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
} END_TEST

START_TEST(strstr_17) {
#line 3084
char str1[] = "abc ";
char str2[] = "abc";
ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
} END_TEST

START_TEST(strstr_18) {
#line 3089
char str1[] = "abc";
char str2[] = "abc ";
ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
} END_TEST

START_TEST(strstr_19) {
#line 3094
char str1[] = " abc";
char str2[] = "abc";
ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
} END_TEST

START_TEST(strstr_20) {
#line 3099
char str1[] = "abc";
char str2[] = " abc";
ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
} END_TEST

START_TEST(strstr_21) {
#line 3104
char str1[] = "123";
char str2[] = "123";
ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
} END_TEST

START_TEST(strstr_22) {
#line 3109
char str1[] = "123";
char str2[] = "321";
ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
} END_TEST

START_TEST(strstr_23) {
#line 3114
char str1[] = "321";
char str2[] = "321";
ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
} END_TEST

START_TEST(strstr_24) {
#line 3119
char str1[] = "321";
char str2[] = "123";
ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
} END_TEST

START_TEST(strstr_25) {
#line 3124
char str1[] = "1234";
char str2[] = "123";
ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
} END_TEST

START_TEST(strstr_26) {
#line 3129
char str1[] = "132";
char str2[] = "1234";
ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
} END_TEST

START_TEST(strstr_27) {
#line 3134
char str1[] = "abcd";
char str2[] = "abc";
ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
} END_TEST

START_TEST(strstr_28) {
#line 3139
char str1[] = "abc";
char str2[] = "abcd";
ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
} END_TEST

START_TEST(strstr_29) {
#line 3144
char str1[] = "12ab";
char str2[] = "12ab";
ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
} END_TEST

START_TEST(strstr_30) {
#line 3149
char str1[] = "ab12";
char str2[] = "12ab";
ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
} END_TEST

START_TEST(strstr_31) {
#line 3154
char str1[] = "a\0b12";
char str2[] = "12ab";
ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
} END_TEST

START_TEST(strstr_32) {
#line 3159
char str1[] = "ab12";
char str2[] = "12\0ab";
ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
} END_TEST

START_TEST(strstr_33) {
#line 3164
char str1[] = "ab\012";
char str2[] = "1\02ab";
ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
} END_TEST

START_TEST(strstr_34) {
#line 3169
char str1[] = "\0";
char str2[] = "\0";
ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
} END_TEST

START_TEST(strstr_35) {
#line 3174
char str1[] = "\0";
char str2[] = "1\02ab";
ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
} END_TEST

START_TEST(strstr_36) {
#line 3179
char str1[] = "";
char str2[] = "1\02ab";
ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
} END_TEST

START_TEST(strtok_1) {
#line 3184
char str1[] = "abc";
char str3[] = "abc";
char str2[] = "c";
ck_assert_str_eq(strtok(str1, str2), s21_strtok(str3, str2));
} END_TEST

START_TEST(strtok_2) {
#line 3190
char str1[] = "abc";
char str3[] = "abc";
char str2[] = "b";
ck_assert_str_eq(strtok(str1, str2), s21_strtok(str3, str2));
} END_TEST

START_TEST(strtok_3) {
#line 3196
char str1[] = "abc";
char str3[] = "abc";
char str2[] = "a";
ck_assert_str_eq(strtok(str1, str2), s21_strtok(str3, str2));
} END_TEST

START_TEST(strtok_4) {
#line 3202
char str1[] = "abb";
char str3[] = "abb";
char str2[] = "b";
ck_assert_str_eq(strtok(str1, str2), s21_strtok(str3, str2));
} END_TEST

START_TEST(strtok_5) {
#line 3208
char str1[] = "bbc";
char str3[] = "bbc";
char str2[] = "b";
ck_assert_str_eq(strtok(str1, str2), s21_strtok(str3, str2));
} END_TEST

START_TEST(strtok_6) {
#line 3214
char str1[] = "aaabbcc";
char str3[] = "aaabbcc";
char str2[] = "c";
ck_assert_str_eq(strtok(str1, str2), s21_strtok(str3, str2));
} END_TEST

START_TEST(strtok_7) {
#line 3220
char str1[] = "aaabbcc";
char str3[] = "aaabbcc";
char str2[] = "b";
ck_assert_str_eq(strtok(str1, str2), s21_strtok(str3, str2));
} END_TEST

START_TEST(strtok_8) {
#line 3226
char str1[] = "abc";
char str3[] = "abc";
char str2[] = "d";
ck_assert_str_eq(strtok(str1, str2), s21_strtok(str3, str2));
} END_TEST

START_TEST(strtok_9) {
#line 3232
char str1[] = "123";
char str3[] = "123";
char str2[] = "3";
ck_assert_str_eq(strtok(str1, str2), s21_strtok(str3, str2));
} END_TEST

START_TEST(strtok_10) {
#line 3238
char str1[] = "123";
char str3[] = "123";
char str2[] = "2";
ck_assert_str_eq(strtok(str1, str2), s21_strtok(str3, str2));
} END_TEST

START_TEST(strtok_11) {
#line 3244
char str1[] = "123";
char str3[] = "123";
char str2[] = "1";
ck_assert_str_eq(strtok(str1, str2), s21_strtok(str3, str2));
} END_TEST

START_TEST(strtok_12) {
#line 3250
char str1[] = "123";
char str3[] = "123";
char str2[] = "4";
ck_assert_str_eq(strtok(str1, str2), s21_strtok(str3, str2));
} END_TEST

START_TEST(strtok_13) {
#line 3256
char str1[] = "1123";
char str3[] = "1123";
char str2[] = "2";
ck_assert_str_eq(strtok(str1, str2), s21_strtok(str3, str2));
} END_TEST

START_TEST(strtok_14) {
#line 3262
char str1[] = "1223";
char str3[] = "1223";
char str2[] = "2";
ck_assert_str_eq(strtok(str1, str2), s21_strtok(str3, str2));
} END_TEST

START_TEST(strtok_15) {
#line 3268
char str1[] = "1\023";
char str3[] = "1\023";
char str2[] = "2";
ck_assert_str_eq(strtok(str1, str2), s21_strtok(str3, str2));
} END_TEST

START_TEST(strtok_16) {
#line 3274
char str1[] = "1\023";
char str3[] = "1\023";
char str2[] = "2";
strtok(str1, str2);
strtok(NULL, str2);
s21_strtok(str3, str2);
s21_strtok(NULL, str2);
ck_assert_str_eq(str1, str3);
} END_TEST

START_TEST(strtok_17) {
#line 3284
char str1[] = "ababa";
char str3[] = "ababa";
char str2[] = "b";
strtok(str1, str2);
strtok(NULL, str2);
s21_strtok(str3, str2);
s21_strtok(NULL, str2);
ck_assert_str_eq(str1, str3);
} END_TEST

START_TEST(strtok_18) {
#line 3294
char str1[] = "ababa";
char str3[] = "ababa";
char str2[] = "a";
strtok(str1, str2);
strtok(NULL, str2);
s21_strtok(str3, str2);
s21_strtok(NULL, str2);
ck_assert_str_eq(str1, str3);
} END_TEST

START_TEST(strtok_19) {
#line 3304
char str1[] = "ababa";
char str3[] = "ababa";
char str2[] = "a";
strtok(str1, str2);
strtok(NULL, str2);
strtok(NULL, str2);
s21_strtok(str3, str2);
s21_strtok(NULL, str2);
s21_strtok(NULL, str2);
ck_assert_str_eq(str1, str3);
} END_TEST

START_TEST(strtok_20) {
#line 3316
char str1[] = "ababa";
char str3[] = "ababa";
char str2[] = "a";
strtok(str1, str2);
char *str4 = strtok(NULL, str2);
s21_strtok(str3, str2);
char *str5 = s21_strtok(NULL, str2);
ck_assert_str_eq(str4, str5);
} END_TEST

START_TEST(strtok_21) {
#line 3326
char str1[] = "ababa";
char str3[] = "ababa";
char str2[] = "a";
strtok(str1, str2);
char *str4 = strtok(NULL, str2);
strtok(NULL, str2);
s21_strtok(str3, str2);
char *str5 = s21_strtok(NULL, str2);
s21_strtok(NULL, str2);
ck_assert_str_eq(str4, str5);
} END_TEST

START_TEST(strtok_22) {
#line 3338
char str1[] = "abababa";
char str3[] = "abababa";
char str2[] = "a";
strtok(str1, str2);
strtok(NULL, str2);
char *str4 = strtok(NULL, str2);
s21_strtok(str3, str2);
s21_strtok(NULL, str2);
char *str5 = s21_strtok(NULL, str2);
ck_assert_str_eq(str4, str5);
} END_TEST

START_TEST(strtok_23) {
#line 3350
char str1[] = "abababa";
char str3[] = "abababa";
char str2[] = "b";
strtok(str1, str2);
strtok(NULL, str2);
char *str4 = strtok(NULL, str2);
s21_strtok(str3, str2);
s21_strtok(NULL, str2);
char *str5 = s21_strtok(NULL, str2);
ck_assert_str_eq(str4, str5);
} END_TEST

START_TEST(strtok_24) {
#line 3362
char str1[] = "abababa";
char str3[] = "abababa";
char str2[] = "c";
strtok(str1, str2);
strtok(NULL, str2);
char *str4 = strtok(NULL, str2);
s21_strtok(str3, str2);
s21_strtok(NULL, str2);
char *str5 = s21_strtok(NULL, str2);
ck_assert_ptr_eq(str4, str5);
} END_TEST

START_TEST(strtok_25) {
#line 3374
char str1[] = "ababnnabaaaaa";
char str3[] = "ababnnabaaaaa";
char str2[] = "a";
strtok(str1, str2);
strtok(NULL, str2);
char *str4 = strtok(NULL, str2);
s21_strtok(str3, str2);
s21_strtok(NULL, str2);
char *str5 = s21_strtok(NULL, str2);
ck_assert_str_eq(str4, str5);
} END_TEST

START_TEST(strtok_26) {
#line 3386
char str1[] = "ababnnabaaaaa";
char str3[] = "ababnnabaaaaa";
char str2[] = "n";
strtok(str1, str2);
char *str4 = strtok(NULL, str2);
strtok(NULL, str2);
s21_strtok(str3, str2);
char *str5 = s21_strtok(NULL, str2);
s21_strtok(NULL, str2);
ck_assert_str_eq(str4, str5);
} END_TEST

START_TEST(strtok_27) {
#line 3398
char str1[] = "0987654546789";
char str3[] = "0987654546789";
char str2[] = "098767";
char *str4 = strtok(str1, str2);
char *str6 = strtok(s21_NULL, str2);

char *str5 = s21_strtok(str3, str2);
char *str7 = s21_strtok(s21_NULL, str2);

ck_assert_str_eq(str1, str3);
ck_assert_pstr_eq(str4, str5);
ck_assert_pstr_eq(str6, str7);
} END_TEST

START_TEST(strtok_28) {
#line 3410
char str1[] = "ababnnabaaaaa";
char str3[] = "ababnnabaaaaa";
char str2[] = "n";
strtok(str1, str2);
strtok(NULL, str2);
strtok(NULL, str2);
s21_strtok(str3, str2);
s21_strtok(NULL, str2);
s21_strtok(NULL, str2);
ck_assert_str_eq(str1, str3);
} END_TEST

START_TEST(strtok_29) {
#line 3422
char str1[] = "aaaaaabnnabaaaaa";
char str3[] = "aaaaaabnnabaaaaa";
char str2[] = "a";
strtok(str1, str2);
strtok(NULL, str2);
strtok(NULL, str2);
s21_strtok(str3, str2);
s21_strtok(NULL, str2);
s21_strtok(NULL, str2);
ck_assert_str_eq(str1, str3);
} END_TEST

START_TEST(strtok_30) {
#line 3434
char str1[] = "bnnabaaaaa";
char str3[] = "bnnabaaaaa";
char str2[] = "a";
strtok(str1, str2);
strtok(NULL, str2);
strtok(NULL, str2);
s21_strtok(str3, str2);
s21_strtok(NULL, str2);
s21_strtok(NULL, str2);
ck_assert_str_eq(str1, str3);
} END_TEST

START_TEST(s21_to_upper_1) {
#line 3446
char str1[] = "abc";
char *str2 = s21_to_upper(str1);
ck_assert_str_eq(str2, "ABC");
free(str2);
} END_TEST

START_TEST(s21_to_upper_2) {
#line 3452
char str1[] = "aBc";
char *str2 = s21_to_upper(str1);
ck_assert_str_eq(str2, "ABC");
free(str2);
} END_TEST

START_TEST(s21_to_upper_3) {
#line 3458
char str1[] = "abC";
char *str2 = s21_to_upper(str1);
ck_assert_str_eq(str2, "ABC");
free(str2);
} END_TEST

START_TEST(s21_to_upper_4) {
#line 3464
char str1[] = "ABC";
char *str2 = s21_to_upper(str1);
ck_assert_str_eq(str2, "ABC");
free(str2);
} END_TEST

START_TEST(s21_to_upper_5) {
#line 3470
char str1[] = "123";
char *str2 = s21_to_upper(str1);
ck_assert_str_eq(str2, "123");
free(str2);
} END_TEST

START_TEST(s21_to_upper_6) {
#line 3476
char str1[] = "123abc";
char *str2 = s21_to_upper(str1);
ck_assert_str_eq(str2, "123ABC");
free(str2);
} END_TEST

START_TEST(s21_to_upper_7) {
#line 3482
char str1[] = "aBaBc";
char *str2 = s21_to_upper(str1);
ck_assert_str_eq(str2, "ABABC");
free(str2);
} END_TEST

START_TEST(s21_to_upper_8) {
#line 3488
char str1[] = ".,/.,/.,";
char *str2 = s21_to_upper(str1);
ck_assert_str_eq(str2, ".,/.,/.,");
free(str2);
} END_TEST

START_TEST(s21_to_upper_9) {
#line 3494
char str1[] = "09876abc";
char *str2 = s21_to_upper(str1);
ck_assert_str_eq(str2, "09876ABC");
free(str2);
} END_TEST

START_TEST(s21_to_upper_10) {
#line 3500
char str1[] = "abc123";
char *str2 = s21_to_upper(str1);
ck_assert_str_eq(str2, "ABC123");
free(str2);
} END_TEST

START_TEST(s21_to_upper_11) {
#line 3506
char str1[] = " ";
char *str2 = s21_to_upper(str1);
ck_assert_str_eq(str2, " ");
free(str2);
} END_TEST

START_TEST(s21_to_upper_12) {
#line 3512
char str1[] = "";
char *str2 = s21_to_upper(str1);
ck_assert_str_eq(str2, "");
free(str2);
} END_TEST

START_TEST(s21_to_upper_13) {
#line 3518
char str1[] = "a1a1a1";
char *str2 = s21_to_upper(str1);
ck_assert_str_eq(str2, "A1A1A1");
free(str2);
} END_TEST

START_TEST(s21_to_upper_14) {
#line 3524
char str1[] = " a1a1a1";
char *str2 = s21_to_upper(str1);
ck_assert_str_eq(str2, " A1A1A1");
free(str2);
} END_TEST

START_TEST(s21_to_upper_15) {
#line 3530
char str1[] = "a1a1a1 ";
char *str2 = s21_to_upper(str1);
ck_assert_str_eq(str2, "A1A1A1 ");
free(str2);
} END_TEST

START_TEST(s21_to_upper_16) {
#line 3536
char str1[] = "Aa1a1a1";
char *str2 = s21_to_upper(str1);
ck_assert_str_eq(str2, "AA1A1A1");
free(str2);
} END_TEST

START_TEST(s21_to_upper_17) {
#line 3542
char str1[] = "a1a1a1A";
char *str2 = s21_to_upper(str1);
ck_assert_str_eq(str2, "A1A1A1A");
free(str2);
} END_TEST

START_TEST(s21_to_upper_18) {
#line 3548
char str1[] = "a1a1\0a1";
char *str2 = s21_to_upper(str1);
ck_assert_str_eq(str2, "A1A1\0A1");
free(str2);
} END_TEST

START_TEST(s21_to_upper_19) {
#line 3554
char str1[] = "a1a\n1a1";
char *str2 = s21_to_upper(str1);
ck_assert_str_eq(str2, "A1A\n1A1");
free(str2);
} END_TEST

START_TEST(s21_to_upper_20) {
#line 3560
char str1[] = "abcdefghijklmnopqrstuvwxyz";
char *str2 = s21_to_upper(str1);
ck_assert_str_eq(str2, "ABCDEFGHIJKLMNOPQRSTUVWXYZ");
free(str2);
} END_TEST

START_TEST(s21_to_upper_21) {
#line 3566
char str1[] = ")(*&^YTRYUIKJHWR<LR3.,tmwnrg.";
char *str2 = s21_to_upper(str1);
ck_assert_str_eq(str2, ")(*&^YTRYUIKJHWR<LR3.,TMWNRG.");
free(str2);
} END_TEST

START_TEST(s21_to_upper_22) {
#line 3572
char str1[] = " ";
char *str2 = s21_to_upper(str1);
ck_assert_str_eq(str2, " ");
free(str2);
} END_TEST

START_TEST(s21_to_upper_23) {
#line 3578
char str1[] = "ABC";
char *str2 = s21_to_upper(str1);
ck_assert_str_eq(str2, "ABC");
free(str2);
} END_TEST

START_TEST(s21_to_upper_24) {
#line 3584
char str1[] = "_az{";
char *str2 = s21_to_upper(str1);
ck_assert_str_eq(str2, "_AZ{");
free(str2);
} END_TEST

START_TEST(s21_to_upper_25) {
#line 3590
char str1[] = "SDFGHJKLPOIUYTREWQWERTYUIOP[OIUYTRFGHJKLJHBVNMASDFGHJKLPOIUYTREWQWERTYUIO";
char *str2 = s21_to_upper(str1);
ck_assert_str_eq(str2, "SDFGHJKLPOIUYTREWQWERTYUIOP[OIUYTRFGHJKLJHBVNMASDFGHJKLPOIUYTREWQWERTYUIO");
free(str2);
} END_TEST

START_TEST(s21_to_lower_1) {
#line 3596
char str1[] = "ABC";
char *str2 = s21_to_lower(str1);
ck_assert_str_eq(str2, "abc");
free(str2);
} END_TEST

START_TEST(s21_to_lower_2) {
#line 3602
char str1[] = "aBc";
char *str2 = s21_to_lower(str1);
ck_assert_str_eq(str2, "abc");
free(str2);
} END_TEST

START_TEST(s21_to_lower_3) {
#line 3608
char str1[] = "abC";
char *str2 = s21_to_lower(str1);
ck_assert_str_eq(str2, "abc");
free(str2);
} END_TEST

START_TEST(s21_to_lower_4) {
#line 3614
char str1[] = "ABC";
char *str2 = s21_to_lower(str1);
ck_assert_str_eq(str2, "abc");
free(str2);
} END_TEST

START_TEST(s21_to_lower_5) {
#line 3620
char str1[] = "123";
char *str2 = s21_to_lower(str1);
ck_assert_str_eq(str2, "123");
free(str2);
} END_TEST

START_TEST(s21_to_lower_6) {
#line 3626
char str1[] = "123ABC";
char *str2 = s21_to_lower(str1);
ck_assert_str_eq(str2, "123abc");
free(str2);
} END_TEST

START_TEST(s21_to_lower_7) {
#line 3632
char str1[] = "aBaBc";
char *str2 = s21_to_lower(str1);
ck_assert_str_eq(str2, "ababc");
free(str2);
} END_TEST

START_TEST(s21_to_lower_8) {
#line 3638
char str1[] = ".,/.,/.,";
char *str2 = s21_to_lower(str1);
ck_assert_str_eq(str2, ".,/.,/.,");
free(str2);
} END_TEST

START_TEST(s21_to_lower_9) {
#line 3644
char str1[] = "09876ABC";
char *str2 = s21_to_lower(str1);
ck_assert_str_eq(str2, "09876abc");
free(str2);
} END_TEST

START_TEST(s21_to_lower_10) {
#line 3650
char str1[] = "ABC123";
char *str2 = s21_to_lower(str1);
ck_assert_str_eq(str2, "abc123");
free(str2);
} END_TEST

START_TEST(s21_to_lower_11) {
#line 3656
char str1[] = " ";
char *str2 = s21_to_lower(str1);
ck_assert_str_eq(str2, " ");
free(str2);
} END_TEST

START_TEST(s21_to_lower_12) {
#line 3662
char str1[] = "";
char *str2 = s21_to_lower(str1);
ck_assert_str_eq(str2, "");
free(str2);
} END_TEST

START_TEST(s21_to_lower_13) {
#line 3668
char str1[] = "A1A1A1";
char *str2 = s21_to_lower(str1);
ck_assert_str_eq(str2, "a1a1a1");
free(str2);
} END_TEST

START_TEST(s21_to_lower_14) {
#line 3674
char str1[] = " A1A1A1";
char *str2 = s21_to_lower(str1);
ck_assert_str_eq(str2, " a1a1a1");
free(str2);
} END_TEST

START_TEST(s21_to_lower_15) {
#line 3680
char str1[] = "A1A1A1 ";
char *str2 = s21_to_lower(str1);
ck_assert_str_eq(str2, "a1a1a1 ");
free(str2);
} END_TEST

START_TEST(s21_to_lower_16) {
#line 3686
char str1[] = "AA1A1A1";
char *str2 = s21_to_lower(str1);
ck_assert_str_eq(str2, "aa1a1a1");
free(str2);
} END_TEST

START_TEST(s21_to_lower_17) {
#line 3692
char str1[] = "A1a1A1A";
char *str2 = s21_to_lower(str1);
ck_assert_str_eq(str2, "a1a1a1a");
free(str2);
} END_TEST

START_TEST(s21_to_lower_18) {
#line 3698
char str1[] = "A1A1\0a1";
char *str2 = s21_to_lower(str1);
ck_assert_str_eq(str2, "a1a1\0a1");
free(str2);
} END_TEST

START_TEST(s21_to_lower_19) {
#line 3704
char str1[] = "A1a\n1A1";
char *str2 = s21_to_lower(str1);
ck_assert_str_eq(str2, "a1a\n1a1");
free(str2);
} END_TEST

START_TEST(s21_to_lower_20) {
#line 3710
char str1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char *str2 = s21_to_lower(str1);
ck_assert_str_eq(str2, "abcdefghijklmnopqrstuvwxyz");
free(str2);
} END_TEST

START_TEST(s21_insert_1) {
#line 3716
char str1[] = "abc";
char str2[] = "def";
int n = 3;
char *str3 = s21_insert(str1, str2, n);
ck_assert_str_eq(str3, "abcdef");
free(str3);
} END_TEST

START_TEST(s21_insert_2) {
#line 3724
char str1[] = "abc";
char str2[] = "def";
int n = 2;
char *str3 = s21_insert(str1, str2, n);
ck_assert_str_eq(str3, "abdefc");
free(str3);
} END_TEST

START_TEST(s21_insert_3) {
#line 3732
char str1[] = "abc";
char str2[] = "def";
int n = 1;
char *str3 = s21_insert(str1, str2, n);
ck_assert_str_eq(str3, "adefbc");
free(str3);
} END_TEST

START_TEST(s21_insert_4) {
#line 3740
char str1[] = "abc";
char str2[] = "def";
int n = 0;
char *str3 = s21_insert(str1, str2, n);
ck_assert_str_eq(str3, "defabc");
free(str3);
} END_TEST

START_TEST(s21_insert_5) {
#line 3748
char str1[] = "abcdefghijkl123456789";
char str2[] = "xyz";
int n = 5;
char *str3 = s21_insert(str1, str2, n);
ck_assert_str_eq(str3, "abcdexyzfghijkl123456789");
free(str3);
} END_TEST

START_TEST(s21_insert_6) {
#line 3756
char str1[] = "abc";
char str2[] = "";
int n = 0;
char *str3 = s21_insert(str1, str2, n);
ck_assert_str_eq(str3, "abc");
free(str3);
} END_TEST

START_TEST(s21_insert_7) {
#line 3764
char str1[] = "abc";
char str2[] = "";
int n = 1;
char *str3 = s21_insert(str1, str2, n);
ck_assert_str_eq(str3, "abc");
free(str3);
} END_TEST

START_TEST(s21_insert_8) {
#line 3772
char str1[] = "abc";
char str2[] = "";
int n = 3;
char *str3 = s21_insert(str1, str2, n);
ck_assert_str_eq(str3, "abc");
free(str3);
} END_TEST

START_TEST(s21_insert_9) {
#line 3780
char str1[] = "";
char str2[] = "abc";
int n = 1;
char *str3 = s21_insert(str1, str2, n);
ck_assert_pstr_eq(str3, s21_NULL);
free(str3);
} END_TEST

START_TEST(s21_insert_10) {
#line 3788
char str1[] = "";
char str2[] = "abc";
int n = 0;
char *str3 = s21_insert(str1, str2, n);
ck_assert_str_eq(str3, "abc");
free(str3);
} END_TEST

START_TEST(s21_insert_11) {
#line 3796
char str1[] = "";
char str2[] = "abc";
int n = 3;
char *str3 = s21_insert(str1, str2, n);
ck_assert_pstr_eq(str3, s21_NULL);
free(str3);
} END_TEST

START_TEST(s21_insert_12) {
#line 3804
char str1[] = "";
char str2[] = "";
int n = 3;
char *str3 = s21_insert(str1, str2, n);
ck_assert_pstr_eq(str3, s21_NULL);
free(str3);
} END_TEST

START_TEST(s21_insert_13) {
#line 3812
char str1[] = "";
char str2[] = "";
int n = 0;
char *str3 = s21_insert(str1, str2, n);
ck_assert_str_eq(str3, "");
free(str3);
} END_TEST

START_TEST(s21_trim_1) {
#line 3820
char str1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char str2[] = "ABC";
char *str3 = s21_trim(str1, str2);
ck_assert_str_eq(str3, "DEFGHIJKLMNOPQRSTUVWXYZ");
free(str3);
} END_TEST

START_TEST(s21_trim_2) {
#line 3827
char str1[] = "ABCDEFGHIabcABCPQRSTUVWXYZ";
char str2[] = "ABC";
char *str3 = s21_trim(str1, str2);
ck_assert_str_eq(str3, "DEFGHIabcABCPQRSTUVWXYZ");
free(str3);
} END_TEST

START_TEST(s21_trim_3) {
#line 3834
char str1[] = "ABCDEFGHIabcABCPQRSTUVWXYZABC";
char str2[] = "ABC";
char *str3 = s21_trim(str1, str2);
ck_assert_str_eq(str3, "DEFGHIabcABCPQRSTUVWXYZ");
free(str3);
} END_TEST

START_TEST(s21_trim_4) {
#line 3841
char str1[] = "ABCDEFGHIabcABCPQRSTUVWXYZabc";
char str2[] = "ABC";
char *str3 = s21_trim(str1, str2);
ck_assert_str_eq(str3, "DEFGHIabcABCPQRSTUVWXYZabc");
free(str3);
} END_TEST

START_TEST(s21_trim_5) {
#line 3848
char str1[] = "ABCDEFGHIabcABCPQRSTUVWXYZabc";
char str2[] = "abc";
char *str3 = s21_trim(str1, str2);
ck_assert_str_eq(str3, "ABCDEFGHIabcABCPQRSTUVWXYZ");
free(str3);
} END_TEST

START_TEST(s21_trim_6) {
#line 3855
char str1[] = "abc123abc";
char str2[] = "abc";
char *str3 = s21_trim(str1, str2);
ck_assert_str_eq(str3, "123");
free(str3);
} END_TEST

START_TEST(s21_trim_7) {
#line 3862
char str1[] = "abc123abc456abc";
char str2[] = "abc";
char *str3 = s21_trim(str1, str2);
ck_assert_str_eq(str3, "123abc456");
free(str3);
} END_TEST

START_TEST(s21_trim_8) {
#line 3869
char str1[] = "a1bc123abc456a1bc";
char str2[] = "abc";
char *str3 = s21_trim(str1, str2);
ck_assert_str_eq(str3, "1bc123abc456a1");
free(str3);
} END_TEST

START_TEST(s21_trim_9) {
#line 3876
char str1[] = "a1bc123abc456a1bc";
char str2[] = "a1bc";
char *str3 = s21_trim(str1, str2);
ck_assert_str_eq(str3, "23abc456");
free(str3);
} END_TEST

START_TEST(s21_trim_10) {
#line 3883
char str1[] = "abc123abc456a1bc";
char str2[] = "ab2c";
char *str3 = s21_trim(str1, str2);
ck_assert_str_eq(str3, "123abc456a1");
free(str3);
} END_TEST

START_TEST(s21_trim_11) {
#line 3890
char str1[] = "abc123abc456a1bc";
char str2[] = "ab12c";
char *str3 = s21_trim(str1, str2);
ck_assert_str_eq(str3, "3abc456");
free(str3);
} END_TEST

START_TEST(s21_trim_12) {
#line 3897
char str1[] = "abAc123abc456aB1bc";
char str2[] = "ab12c";
char *str3 = s21_trim(str1, str2);
ck_assert_str_eq(str3, "Ac123abc456aB");
free(str3);
} END_TEST

START_TEST(s21_trim_13) {
#line 3904
char str1[] = "abAc123abc456aB1bc";
char str2[] = "aBb12c";
char *str3 = s21_trim(str1, str2);
ck_assert_str_eq(str3, "Ac123abc456");
free(str3);
} END_TEST

START_TEST(s21_trim_14) {
#line 3911
char str1[] = "11222333444aaaBaabaA53332244445677Babab7878998";
char str2[] = "aBbA12c";
char *str3 = s21_trim(str1, str2);
ck_assert_str_eq(str3, "333444aaaBaabaA53332244445677Babab7878998");
free(str3);
} END_TEST

START_TEST(s21_trim_15) {
#line 3918
char str1[] = "11222333444aaaBaabaA53332244445677Babab7878998";
char str2[] = "4aB3bA12c";
char *str3 = s21_trim(str1, str2);
ck_assert_str_eq(str3, "53332244445677Babab7878998");
free(str3);
} END_TEST

START_TEST(s21_trim_16) {
#line 3925
char str1[] = "11222333444aaaBaabaA53332244445677Babab7878998";
char str2[] = "4aB37bA897c";
char *str3 = s21_trim(str1, str2);
ck_assert_str_eq(str3, "11222333444aaaBaabaA533322444456");
free(str3);
} END_TEST

START_TEST(s21_trim_17) {
#line 3932
char str1[] = "11222333444aaaBaabaA53332244445677Babab7878998";
char str2[] = "4223aB437bA189117c";
char *str3 = s21_trim(str1, str2);
ck_assert_str_eq(str3, "533322444456");
free(str3);
} END_TEST

START_TEST(s21_trim_18) {
#line 3939
char str1[] = "11222333444aaaBaabaA53332244445677Babab7878998";
char str2[] = "4223aB6437bA1589117c";
char *str3 = s21_trim(str1, str2);
ck_assert_str_eq(str3, "");
free(str3);
} END_TEST

START_TEST(s21_trim_19) {
#line 3946
char str1[] = "11222333444aaaBaabaA53332244445677Babab7878998";
char str2[] = "jK";
char *str3 = s21_trim(str1, str2);
ck_assert_str_eq(str3, "11222333444aaaBaabaA53332244445677Babab7878998");
free(str3);
} END_TEST

START_TEST(s21_trim_20) {
#line 3953
char str1[] = "";
char str2[] = "jK";
char *str3 = s21_trim(str1, str2);
ck_assert_str_eq(str3, "");
free(str3);
} END_TEST

START_TEST(s21_trim_21) {
#line 3960
char str1[] = "sdfghjk";
char str2[] = " ";
char *str3 = s21_trim(str1, str2);
ck_assert_str_eq(str3, "sdfghjk");
free(str3);
} END_TEST

START_TEST(s21_trim_22) {
#line 3967
char str1[] = "sdfg hjk";
char str2[] = " ";
char *str3 = s21_trim(str1, str2);
ck_assert_str_eq(str3, "sdfg hjk");
free(str3);
} END_TEST

START_TEST(s21_trim_23) {
#line 3974
char str1[] = " ";
char str2[] = " ";
char *str3 = s21_trim(str1, str2);
ck_assert_str_eq(str3, "");
free(str3);
} END_TEST

START_TEST(s21_trim_24) {
#line 3981
char str1[] = "a231546yutiljkhgtyre565786oiu;jlkhb12";
char str2[] = "12333333333333333333333333333333333ab";
char *str3 = s21_trim(str1, str2);
ck_assert_str_eq(str3, "546yutiljkhgtyre565786oiu;jlkh");
free(str3);
} END_TEST

START_TEST(s21_trim_25) {
#line 3988
char str1[] = "a231546yutiljkhgtyre565786oiu;jlkhb12";
char str2[] = "12333333333333333333333333333333333abmmmmmm";
char *str3 = s21_trim(str1, str2);
ck_assert_str_eq(str3, "546yutiljkhgtyre565786oiu;jlkh");
free(str3);
} END_TEST

START_TEST(strerror_0) {
#line 3995
int i = 0;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_1) {
#line 3999
int i = 1;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_2) {
#line 4003
int i = 2;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_3) {
#line 4007
int i = 3;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_4) {
#line 4011
int i = 4;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_5) {
#line 4015
int i = 5;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_6) {
#line 4019
int i = 6;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_7) {
#line 4023
int i = 7;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_8) {
#line 4027
int i = 8;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_9) {
#line 4031
int i = 9;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_10) {
#line 4035
int i = 10;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_11) {
#line 4039
int i = 11;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_12) {
#line 4043
int i = 12;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_13) {
#line 4047
int i = 13;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_14) {
#line 4051
int i = 14;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_15) {
#line 4055
int i = 15;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_16) {
#line 4059
int i = 16;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_17) {
#line 4063
int i = 17;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_18) {
#line 4067
int i = 18;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_19) {
#line 4071
int i = 19;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_20) {
#line 4075
int i = 20;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_21) {
#line 4079
int i = 21;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_22) {
#line 4083
int i = 22;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_23) {
#line 4087
int i = 23;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_24) {
#line 4091
int i = 24;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_25) {
#line 4095
int i = 25;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_26) {
#line 4099
int i = 26;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_27) {
#line 4103
int i = 27;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_28) {
#line 4107
int i = 28;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_29) {
#line 4111
int i = 29;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_30) {
#line 4115
int i = 30;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_31) {
#line 4119
int i = 31;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_32) {
#line 4123
int i = 32;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_33) {
#line 4127
int i = 33;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_34) {
#line 4131
int i = 34;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_35) {
#line 4135
int i = 35;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_36) {
#line 4139
int i = 36;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_37) {
#line 4143
int i = 37;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_38) {
#line 4147
int i = 38;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_39) {
#line 4151
int i = 39;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_40) {
#line 4155
int i = 40;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_41) {
#line 4159
int i = 41;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_42) {
#line 4163
int i = 42;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_43) {
#line 4167
int i = 43;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_44) {
#line 4171
int i = 44;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_45) {
#line 4175
int i = 45;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_46) {
#line 4179
int i = 46;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_47) {
#line 4183
int i = 47;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_48) {
#line 4187
int i = 48;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_49) {
#line 4191
int i = 49;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_50) {
#line 4195
int i = 50;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_51) {
#line 4199
int i = 51;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_52) {
#line 4203
int i = 52;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_53) {
#line 4207
int i = 53;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_54) {
#line 4211
int i = 54;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_55) {
#line 4215
int i = 55;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_56) {
#line 4219
int i = 56;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_57) {
#line 4223
int i = 57;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_58) {
#line 4227
int i = 58;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_59) {
#line 4231
int i = 59;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_60) {
#line 4235
int i = 60;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_61) {
#line 4239
int i = 61;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_62) {
#line 4243
int i = 62;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_63) {
#line 4247
int i = 63;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_64) {
#line 4251
int i = 64;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_65) {
#line 4255
int i = 65;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_66) {
#line 4259
int i = 66;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_67) {
#line 4263
int i = 67;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_68) {
#line 4267
int i = 68;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_69) {
#line 4271
int i = 69;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_70) {
#line 4275
int i = 70;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_71) {
#line 4279
int i = 71;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_72) {
#line 4283
int i = 72;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_73) {
#line 4287
int i = 73;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_74) {
#line 4291
int i = 74;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_75) {
#line 4295
int i = 75;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_76) {
#line 4299
int i = 76;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_77) {
#line 4303
int i = 77;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_78) {
#line 4307
int i = 78;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_79) {
#line 4311
int i = 79;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_80) {
#line 4315
int i = 80;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_81) {
#line 4319
int i = 81;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_82) {
#line 4323
int i = 82;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_83) {
#line 4327
int i = 83;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_84) {
#line 4331
int i = 84;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_85) {
#line 4335
int i = 85;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_86) {
#line 4339
int i = 86;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_87) {
#line 4343
int i = 87;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_88) {
#line 4347
int i = 88;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_89) {
#line 4351
int i = 89;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_90) {
#line 4355
int i = 90;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_91) {
#line 4359
int i = 91;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_92) {
#line 4363
int i = 92;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_93) {
#line 4367
int i = 93;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_94) {
#line 4371
int i = 94;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_95) {
#line 4375
int i = 95;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_96) {
#line 4379
int i = 96;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_97) {
#line 4383
int i = 97;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_98) {
#line 4387
int i = 98;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_99) {
#line 4391
int i = 99;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_100) {
#line 4395
int i = 100;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_101) {
#line 4399
int i = 101;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_102) {
#line 4403
int i = 102;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_103) {
#line 4407
int i = 103;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_104) {
#line 4411
int i = 104;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_105) {
#line 4415
int i = 105;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_106) {
#line 4419
int i = 106;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_107) {
#line 4423
int i = 107;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_108) {
#line 4427
int i = 108;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror__1) {
#line 4431
int i = -1;
ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(strerror_109) {
    int i = 109;
    ck_assert_str_eq(strerror(i), s21_strerror(i));
} END_TEST

START_TEST(sprintf_pr_1) {
#line 8
char test_original[1024];
char test_your[1024];
sprintf(test_original, "Hello %%");
s21_sprintf(test_your, "Hello %%");
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(sprintf_pr_2) {
#line 15
char test_original[1024];
char test_your[1024];
sprintf(test_original, "Hello 2022 World");
s21_sprintf(test_your, "Hello 2022 World");
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(sprintf_c_1) {
#line 22
char test_original[1024];
char test_your[1024];
sprintf(test_original, "Hello %c", 'W');
s21_sprintf(test_your, "Hello %c", 'W');
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(sprintf_c_2) {
#line 29
char test_original[1024];
char test_your[1024];
sprintf(test_original, "Hello %-5c", 'W');
s21_sprintf(test_your, "Hello %-5c", 'W');
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(sprintf_c_3) {
#line 36
char test_original[1024];
char test_your[1024];
sprintf(test_original, "Hello %5c", 'W');
s21_sprintf(test_your, "Hello %5c", 'W');
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(sprintf_c_4) {
#line 43
char test_original[1024];
char test_your[1024];
sprintf(test_original, "Hello %-c", 'W');
s21_sprintf(test_your, "Hello %-c", 'W');
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(sprintf_c_5) {
#line 50
char test_original[1024];
char test_your[1024];
sprintf(test_original, "Hello %c", 'W');
s21_sprintf(test_your, "Hello %c", 'W');
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(sprintf_c_6) {
#line 57
char test_original[1024];
char test_your[1024];
sprintf(test_original, "%cHello %c", 's', 'W');
s21_sprintf(test_your, "%cHello %c", 's', 'W');
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(sprintf_c_7) {
#line 64
char test_original[1024];
char test_your[1024];
sprintf(test_original, "He%cllo %-5c", 's', 'W');
s21_sprintf(test_your, "He%cllo %-5c", 's', 'W');
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(sprintf_c_8) {
#line 71
char test_original[1024];
char test_your[1024];
sprintf(test_original, "%5cHello %5c", 's', 'W');
s21_sprintf(test_your, "%5cHello %5c", 's', 'W');
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(sprintf_c_9) {
#line 78
char test_original[1024];
char test_your[1024];
sprintf(test_original, "%-10cHello %-c", 's', 'W');
s21_sprintf(test_your, "%-10cHello %-c", 's', 'W');
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(sprintf_c_10) {
#line 85
char test_original[1024];
char test_your[1024];
sprintf(test_original, "He%%llo %c", 'W');
s21_sprintf(test_your, "He%%llo %c", 'W');
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(sprintf_d_1) {
#line 92
char test_original[1024];
char test_your[1024];
sprintf(test_original, "Hello %d", 23);
s21_sprintf(test_your, "Hello %d", 23);
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(sprintf_d_2) {
#line 99
char test_original[1024];
char test_your[1024];
sprintf(test_original, "Hello %05d", 23);
s21_sprintf(test_your, "Hello %05d", 23);
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(sprintf_d_3) {
#line 106
char test_original[1024];
char test_your[1024];
sprintf(test_original, "Hello %-6d", 23);
s21_sprintf(test_your, "Hello %-6d", 23);
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(sprintf_d_4) {
#line 113
char test_original[1024];
char test_your[1024];
sprintf(test_original, "Hello %+d", 23);
s21_sprintf(test_your, "Hello %+d", 23);
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(sprintf_d_5) {
#line 120
char test_original[1024];
char test_your[1024];
sprintf(test_original, "Hello % d", 23);
s21_sprintf(test_your, "Hello % d", 23);
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(sprintf_d_6) {
#line 127
char test_original[1024];
char test_your[1024];
sprintf(test_original, "Hello %hd", 23);
s21_sprintf(test_your, "Hello %hd", 23);
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(sprintf_d_7) {
#line 134
char test_original[1024];
char test_your[1024];
sprintf(test_original, "Hello %ld", 238230000006325000);
s21_sprintf(test_your, "Hello %ld", 238230000006325000);
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(sprintf_d_8) {
#line 141
char test_original[1024];
char test_your[1024];
sprintf(test_original, "Hello % 10d", 23);
s21_sprintf(test_your, "Hello % 10d", 23);
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(sprintf_d_9) {
#line 148
char test_original[1024];
char test_your[1024];
sprintf(test_original, "Hello %+10d", 23);
s21_sprintf(test_your, "Hello %+10d", 23);
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(sprintf_d_10) {
#line 155
char test_original[1024];
char test_your[1024];
sprintf(test_original, "Hello %+10d", -23);
s21_sprintf(test_your, "Hello %+10d", -23);
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(sprintf_d_11) {
#line 162
char test_original[1024];
char test_your[1024];
sprintf(test_original, "Hello % 10d", -23);
s21_sprintf(test_your, "Hello % 10d", -23);
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(sprintf_d_and_c_1) {
#line 169
char test_original[1024];
char test_your[1024];
sprintf(test_original, "Hello %d %018d", 5, -23);
s21_sprintf(test_your, "Hello %d %018d", 5, -23);
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(sprintf_1) {
#line 176
char test_original[1024];
char test_your[1024];
sprintf(test_original, "Hello %d %f", 5, -23.0);
s21_sprintf(test_your, "Hello %d %f", 5, -23.0);
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(sprintf_2) {
#line 183
char test_original[1024];
char test_your[1024];
sprintf(test_original, "Hello %s %f", "abc", -23.0);
s21_sprintf(test_your, "Hello %s %f", "abc", -23.0);
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(sprintf_3) {
#line 190
char test_original[1024];
char test_your[1024];
sprintf(test_original, "Hel%ulo %s %f", 100, "abc", -23.0);
s21_sprintf(test_your, "Hel%ulo %s %f", 100, "abc", -23.0);
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(sprintf_4) {
#line 197
char test_original[1024];
char test_your[1024];
sprintf(test_original, "Hello %s %.3f", "abc", -23.0000001);
s21_sprintf(test_your, "Hello %s %.3f", "abc", -23.0000001);
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(sprintf_5) {
#line 204
char test_original[1024];
char test_your[1024];
sprintf(test_original, "Hello %s %.7f", "abc", -23.999999);
s21_sprintf(test_your, "Hello %s %.7f", "abc", -23.999999);
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(sprintf_6) {
#line 211
char test_original[1024];
char test_your[1024];
sprintf(test_original, "Hello %s %.3f", "abc", -23.999999);
s21_sprintf(test_your, "Hello %s %.3f", "abc", -23.999999);
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(sprintf_7) {
#line 218
char test_original[1024];
char test_your[1024];
sprintf(test_original, "H%ldello %s", 1234567890123456789, \
        "abcdefghtabcdefghtabcdefghtabcdefghtabcdefghtabcdefght");
s21_sprintf(test_your, "H%ldello %s", 1234567890123456789, \
            "abcdefghtabcdefghtabcdefghtabcdefghtabcdefghtabcdefght");
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(sprintf_8) {
#line 225
char test_original[1024];
char test_your[1024];
sprintf(test_original, "H%uello %s", 123456789, \
        "abcdefghtabcdefghtabcdefghtabcdefghtabcdefghtabcdefght");
s21_sprintf(test_your, "H%uello %s", 123456789, \
            "abcdefghtabcdefghtabcdefghtabcdefghtabcdefghtabcdefght");
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(sprintf_9) {
#line 232
char test_original[1024];
char test_your[1024];
sprintf(test_original, "saeflkahj%lfdslkj", 1234.0);
s21_sprintf(test_your, "saeflkahj%lfdslkj", 1234.0);
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(sprintf_10) {
#line 239
char test_original[1024];
char test_your[1024];
sprintf(test_original, "saeflkahj%010.12f dslkj", -4353.235300);
s21_sprintf(test_your, "saeflkahj%010.12f dslkj", -4353.235300);
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(sprintf_11) {
#line 246
char test_original[1024];
char test_your[1024];
sprintf(test_original, "saeflkahj%+010.12f dslkj", 4353.235300);
s21_sprintf(test_your, "saeflkahj%+010.12f dslkj", 4353.235300);
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(sprintf_12) {
#line 253
char test_original[1024];
char test_your[1024];
sprintf(test_original, "saeflkahj% 10.12f dslkj", 0.235300);
s21_sprintf(test_your, "saeflkahj% 10.12f dslkj", 0.235300);
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(sprintf_13) {
#line 260
char test_original[1024];
char test_your[1024];
sprintf(test_original, "saeflkahj% 10.12f dslkj", -4353.235300);
s21_sprintf(test_your, "saeflkahj% 10.12f dslkj", -4353.235300);
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(sprintf_14) {
#line 267
char test_original[1024];
char test_your[1024];
sprintf(test_original, "saeflkahj%-.12f dslkj", 4353.235300);
s21_sprintf(test_your, "saeflkahj%-.12f dslkj", 4353.235300);
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(sprintf_15) {
#line 274
char test_original[1024];
char test_your[1024];
sprintf(test_original, "saeflkahj%-.12f dslkj", -4353.235300);
s21_sprintf(test_your, "saeflkahj%-.12f dslkj", -4353.235300);
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(sprintf_16) {
#line 281
char test_original[1024];
char test_your[1024];
sprintf(test_original, "saeflkahj%-f dslkj", -4353.235300);
s21_sprintf(test_your, "saeflkahj%-f dslkj", -4353.235300);
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(sprintf_17) {
#line 288
char test_original[1024];
char test_your[1024];
sprintf(test_original, "saeflkahj%-.12f dslkj", -4353.235300);
s21_sprintf(test_your, "saeflkahj%-.12f dslkj", -4353.235300);
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(sprintf_18) {
#line 295
char test_original[1024];
char test_your[1024];
sprintf(test_original, "saeflkahj%-f dslkj", 0.235300);
s21_sprintf(test_your, "saeflkahj%-f dslkj", 0.235300);
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(sprintf_19) {
#line 302
char test_original[1024];
char test_your[1024];
sprintf(test_original, "saeflkahj%+f dslkj", 0.235300);
s21_sprintf(test_your, "saeflkahj%+f dslkj", 0.235300);
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(sprintf_20) {
#line 309
char test_original[1024];
char test_your[1024];
sprintf(test_original, "saeflkahj% f dslkj", -4353.235300);
s21_sprintf(test_your, "saeflkahj% f dslkj", -4353.235300);
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(sprintf_21) {
#line 316
char test_original[1024];
char test_your[1024];
sprintf(test_original, "saeflkahj% 8f dslkj", -4353.235300);
s21_sprintf(test_your, "saeflkahj% 8f dslkj", -4353.235300);
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(sprintf_22) {
#line 323
char test_original[1024];
char test_your[1024];
sprintf(test_original, "saeflkahj% -f dslkj", 4353.235300);
s21_sprintf(test_your, "saeflkahj% -f dslkj", 4353.235300);
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(sprintf_23) {
#line 330
char test_original[1024];
char test_your[1024];
sprintf(test_original, "saeflkahj% -10f dslkj", -0.235300);
s21_sprintf(test_your, "saeflkahj% -10f dslkj", -0.235300);
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(sprintf_24) {
#line 337
char test_original[1024];
char test_your[1024];
sprintf(test_original, "saeflkahj% .10f dslkj", -4353.235300);
s21_sprintf(test_your, "saeflkahj%.10f dslkj", -4353.235300);
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(sprintf_25) {
#line 344
char test_original[1024];
char test_your[1024];
sprintf(test_original, "saeflkahj%.10f dslkj", 13.235300);
s21_sprintf(test_your, "saeflkahj%.10f dslkj", 13.235300);
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(sprintf_26) {
#line 351
char test_original[1024];
char test_your[1024];
sprintf(test_original, "saeflkahj%.f dslkj", 12.235300);
s21_sprintf(test_your, "saeflkahj%.f dslkj", 12.235300);
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(sprintf_27) {
#line 358
char test_original[1024];
char test_your[1024];
sprintf(test_original, "saeflkahj% .f dslkj", 345.235300);
s21_sprintf(test_your, "saeflkahj% .f dslkj", 345.235300);
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(sprintf_28) {
#line 365
char test_original[1024];
char test_your[1024];
sprintf(test_original, "saeflkahj%10.f dslkj", 0.235300);
s21_sprintf(test_your, "saeflkahj%10.f dslkj", 0.235300);
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(sprintf_29) {
#line 372
char test_original[1024];
char test_your[1024];
sprintf(test_original, "saeflkahj%+.f dslkj", -0.235300);
s21_sprintf(test_your, "saeflkahj%+.f dslkj", -0.235300);
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(sprintf_30) {
#line 379
char test_original[1024];
char test_your[1024];
sprintf(test_original, "saeflkahj%-.f dslkj", 20.235300);
s21_sprintf(test_your, "saeflkahj%-.f dslkj", 20.235300);
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(sprintf_31) {
#line 386
char test_original[1024];
char test_your[1024];
sprintf(test_original, "saeflkahj%f dslkj", 0.000000006);
s21_sprintf(test_your, "saeflkahj%f dslkj", 0.000000006);
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(sprintf_32) {
#line 393
char test_original[1024];
char test_your[1024];
sprintf(test_original, "saeflkahj%.f dslkj", 0.000000006);
s21_sprintf(test_your, "saeflkahj%.f dslkj", 0.000000006);
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(sprintf_33) {
#line 400
char test_original[1024];
char test_your[1024];
sprintf(test_original, "saeflkahj%12f dslkj", 0.000000006);
s21_sprintf(test_your, "saeflkahj%12f dslkj", 0.000000006);
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(sprintf_34) {
#line 407
char test_original[1024];
char test_your[1024];
sprintf(test_original, "saeflkahj%.12f dslkj", 0.000000006);
s21_sprintf(test_your, "saeflkahj%.12f dslkj", 0.000000006);
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(sprintf_35) {
#line 414
char test_original[1024];
char test_your[1024];
sprintf(test_original, "saeflkahj%-.12f dslkj", 0.000000006);
s21_sprintf(test_your, "saeflkahj%-.12f dslkj", 0.000000006);
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(sprintf_36) {
#line 421
char test_original[1024];
char test_your[1024];
sprintf(test_original, "saeflkahj%%%%%%%%%% dslkj");
s21_sprintf(test_your, "saeflkahj%%%%%%%%%% dslkj");
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(sprintf_37) {
#line 428
char test_original[1024];
char test_your[1024];
sprintf(test_original, "saeflkahj%%%%%%%%%%%-.12f dslkj", 0.000000006);
s21_sprintf(test_your, "saeflkahj%%%%%%%%%%%-.12f dslkj", 0.000000006);
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(sprintf_38) {
#line 435
char test_original[1024];
char test_your[1024];
sprintf(test_original, "saeflkahj%s dslkj", "0.000000006");
s21_sprintf(test_your, "saeflkahj%s dslkj", "0.000000006");
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(sprintf_39) {
#line 442
char test_original[1024];
char test_your[1024];
sprintf(test_original, "saeflkahjdslkj%s", "^&*(=...%");
s21_sprintf(test_your, "saeflkahjdslkj%s", "^&*(=...%");
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(sprintf_40) {
#line 449
char test_original[1024];
char test_your[1024];
sprintf(test_original, "%ssaeflkahj dslkj", "^&*(=...%");
s21_sprintf(test_your, "%ssaeflkahj dslkj", "^&*(=...%");
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(sprintf_41) {
#line 456
char test_original[1024];
char test_your[1024];
sprintf(test_original, "%ssaeflkahj%sdslkj%s", "^&*(=...%", "jk", "");
s21_sprintf(test_your, "%ssaeflkahj%sdslkj%s", "^&*(=...%", "jk", "");
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(sprintf_42) {
#line 463
char test_original[1024];
char test_your[1024];
sprintf(test_original, "%ssaeflkahj%sdslkj%s", "", "", " ");
s21_sprintf(test_your, "%ssaeflkahj%sdslkj%s", "", "", " ");
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(sprintf_43) {
#line 470
char test_original[1024];
char test_your[1024];
sprintf(test_original, "%-ssaeflkahj%1sdslkj%s", "^&*(=...%", "jk", "");
s21_sprintf(test_your, "%-ssaeflkahj%1sdslkj%s", "^&*(=...%", "jk", "");
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(sprintf_44) {
#line 477
char test_original[1024];
char test_your[1024];
sprintf(test_original, "%3ssaeflkahj%1sdslkj%10s", "^&*(=...%", " ", "");
s21_sprintf(test_your, "%3ssaeflkahj%1sdslkj%10s", "^&*(=...%", " ", "");
ck_assert_str_eq(test_original, test_your);
} END_TEST

START_TEST(int_sprintf_pr_1) {
#line 484
char test_original[1024];
char test_your[1024];
ck_assert_int_eq(sprintf(test_original, "Hello %%"), s21_sprintf(test_your, "Hello %%"));
} END_TEST

START_TEST(int_sprintf_pr_2) {
#line 489
char test_original[1024];
char test_your[1024];
ck_assert_int_eq(sprintf(test_original, "Hello 2022 World"), \
                 s21_sprintf(test_your, "Hello 2022 World"));
} END_TEST

START_TEST(int_sprintf_c_1) {
#line 494
char test_original[1024];
char test_your[1024];
ck_assert_int_eq(sprintf(test_original, "Hello %c", 'W'), s21_sprintf(test_your, "Hello %c", 'W'));
} END_TEST

START_TEST(int_sprintf_c_2) {
#line 499
char test_original[1024];
char test_your[1024];
ck_assert_int_eq(sprintf(test_original, "Hello %-5c", 'W'), s21_sprintf(test_your, "Hello %-5c", 'W'));
} END_TEST

START_TEST(int_sprintf_c_3) {
#line 504
char test_original[1024];
char test_your[1024];
ck_assert_int_eq(sprintf(test_original, "Hello %5c", 'W'), s21_sprintf(test_your, "Hello %5c", 'W'));
} END_TEST

START_TEST(int_sprintf_c_4) {
#line 509
char test_original[1024];
char test_your[1024];
ck_assert_int_eq(sprintf(test_original, "Hello %-c", 'W'), s21_sprintf(test_your, "Hello %-c", 'W'));
} END_TEST

START_TEST(int_sprintf_c_5) {
#line 514
char test_original[1024];
char test_your[1024];
ck_assert_int_eq(sprintf(test_original, "Hello %c", 'W'), s21_sprintf(test_your, "Hello %c", 'W'));
} END_TEST

START_TEST(int_sprintf_c_6) {
#line 519
char test_original[1024];
char test_your[1024];
ck_assert_int_eq(sprintf(test_original, "%cHello %c", \
    's', 'W'), s21_sprintf(test_your, "%cHello %c", 's', 'W'));
} END_TEST

START_TEST(int_sprintf_c_7) {
#line 524
char test_original[1024];
char test_your[1024];
ck_assert_int_eq(sprintf(test_original, "He%cllo %-5c", \
    's', 'W'), s21_sprintf(test_your, "He%cllo %-5c", 's', 'W'));
} END_TEST

START_TEST(int_sprintf_c_8) {
#line 529
char test_original[1024];
char test_your[1024];
ck_assert_int_eq(sprintf(test_original, "%5cHello %5c", \
    's', 'W'), s21_sprintf(test_your, "%5cHello %5c", 's', 'W'));
} END_TEST

START_TEST(int_sprintf_c_9) {
#line 534
char test_original[1024];
char test_your[1024];
ck_assert_int_eq(sprintf(test_original, "%-10cHello %-c", \
    's', 'W'), s21_sprintf(test_your, "%-10cHello %-c", 's', 'W'));
} END_TEST

START_TEST(int_sprintf_c_10) {
#line 539
char test_original[1024];
char test_your[1024];
ck_assert_int_eq(sprintf(test_original, "He%%llo %c", 'W'), s21_sprintf(test_your, "He%%llo %c", 'W'));
} END_TEST

START_TEST(int_sprintf_d_1) {
#line 544
char test_original[1024];
char test_your[1024];
ck_assert_int_eq(sprintf(test_original, "Hello %d", 23), s21_sprintf(test_your, "Hello %d", 23));
} END_TEST

START_TEST(int_sprintf_d_2) {
#line 549
char test_original[1024];
char test_your[1024];
ck_assert_int_eq(sprintf(test_original, "Hello %05d", 23), s21_sprintf(test_your, "Hello %05d", 23));
} END_TEST

START_TEST(int_sprintf_d_3) {
#line 554
char test_original[1024];
char test_your[1024];
ck_assert_int_eq(sprintf(test_original, "Hello %-6d", 23), s21_sprintf(test_your, "Hello %-6d", 23));
} END_TEST

START_TEST(int_sprintf_d_4) {
#line 559
char test_original[1024];
char test_your[1024];
ck_assert_int_eq(sprintf(test_original, "Hello %+d", 23), s21_sprintf(test_your, "Hello %+d", 23));
} END_TEST

START_TEST(int_sprintf_d_5) {
#line 564
char test_original[1024];
char test_your[1024];
ck_assert_int_eq(sprintf(test_original, "Hello % d", 23), \
    s21_sprintf(test_your, "Hello % d", 23));
} END_TEST

START_TEST(int_sprintf_d_6) {
#line 569
char test_original[1024];
char test_your[1024];
ck_assert_int_eq(sprintf(test_original, "Hello %hd", 23), \
    s21_sprintf(test_your, "Hello %hd", 23));
} END_TEST

START_TEST(int_sprintf_d_7) {
#line 574
char test_original[1024];
char test_your[1024];
ck_assert_int_eq(sprintf(test_original, "Hello %ld", 238230000006325000), \
    s21_sprintf(test_your, "Hello %ld", 238230000006325000));
} END_TEST

START_TEST(int_sprintf_d_8) {
#line 579
char test_original[1024];
char test_your[1024];
ck_assert_int_eq(sprintf(test_original, "Hello % 10d", 23), \
    s21_sprintf(test_your, "Hello % 10d", 23));
} END_TEST

START_TEST(int_sprintf_d_9) {
#line 584
char test_original[1024];
char test_your[1024];
ck_assert_int_eq(sprintf(test_original, "Hello %+10d", 23), \
    s21_sprintf(test_your, "Hello %+10d", 23));
} END_TEST

START_TEST(int_sprintf_d_10) {
#line 589
char test_original[1024];
char test_your[1024];
ck_assert_int_eq(sprintf(test_original, "Hello %+10d", -23), \
    s21_sprintf(test_your, "Hello %+10d", -23));
} END_TEST

START_TEST(int_sprintf_d_11) {
#line 594
char test_original[1024];
char test_your[1024];
ck_assert_int_eq(sprintf(test_original, "Hello % 10d", \
    -23), s21_sprintf(test_your, "Hello % 10d", -23));
} END_TEST

START_TEST(int_sprintf_d_and_c_1) {
#line 599
char test_original[1024];
char test_your[1024];
ck_assert_int_eq(sprintf(test_original, "Hello %d %018d", \
    5, -23), s21_sprintf(test_your, "Hello %d %018d", 5, -23));
} END_TEST

START_TEST(int_sprintf_1) {
#line 604
char test_original[1024];
char test_your[1024];
ck_assert_int_eq(sprintf(test_original, "Hello %d %f", 5, -23.0), \
    s21_sprintf(test_your, "Hello %d %f", 5, -23.0));
} END_TEST

START_TEST(int_sprintf_2) {
#line 609
char test_original[1024];
char test_your[1024];
ck_assert_int_eq(sprintf(test_original, "Hello %s %f", "abc", -23.0), \
            s21_sprintf(test_your, "Hello %s %f", "abc", -23.0));
} END_TEST

START_TEST(int_sprintf_3) {
#line 614
char test_original[1024];
char test_your[1024];
ck_assert_int_eq(sprintf(test_original, "Hel%ulo %s %f", 100, \
    "abc", -23.0), s21_sprintf(test_your, "Hel%ulo %s %f", 100, "abc", -23.0));
} END_TEST

START_TEST(int_sprintf_4) {
#line 619
char test_original[1024];
char test_your[1024];
ck_assert_int_eq(sprintf(test_original, "Hello %s %.3f", "abc", -23.0000001), \
        s21_sprintf(test_your, "Hello %s %.3f", "abc", -23.0000001));
} END_TEST

START_TEST(int_sprintf_5) {
#line 624
char test_original[1024];
char test_your[1024];
ck_assert_int_eq(sprintf(test_original, "Hello %s %.7f", "abc", \
    -23.999999), s21_sprintf(test_your, "Hello %s %.7f", "abc", -23.999999));
} END_TEST

START_TEST(int_sprintf_6) {
#line 629
char test_original[1024];
char test_your[1024];
ck_assert_int_eq(sprintf(test_original, "Hello %s %.3f", \
    "abc", -23.999999), s21_sprintf(test_your, "Hello %s %.3f", "abc", -23.999999));
} END_TEST

START_TEST(int_sprintf_7) {
#line 634
char test_original[1024];
char test_your[1024];
ck_assert_int_eq(sprintf(test_original, "H%ldello %s", \
    1234567890123456789, "abcdefghtabcdefghtabcdefghtabcdefghtabcdefghtabcdefght"), \
        s21_sprintf(test_your, "H%ldello %s", 1234567890123456789, \
            "abcdefghtabcdefghtabcdefghtabcdefghtabcdefghtabcdefght"));
} END_TEST

START_TEST(int_sprintf_8) {
#line 639
char test_original[1024];
char test_your[1024];
ck_assert_int_eq(sprintf(test_original, \
    "H%uello %s", 123456789, "abcdefghtabcdefghtabcdefghtabcdefghtabcdefghtabcdefght"), \
        s21_sprintf(test_your, "H%uello %s", 123456789, \
            "abcdefghtabcdefghtabcdefghtabcdefghtabcdefghtabcdefght"));
} END_TEST

START_TEST(int_sprintf_9) {
#line 644
char test_original[1024];
char test_your[1024];
ck_assert_int_eq(sprintf(test_original, \
    "saeflkahj%lfdslkj", 1234.0), \
        s21_sprintf(test_your, "saeflkahj%lfdslkj", 1234.0));
} END_TEST

START_TEST(int_sprintf_10) {
#line 649
char test_original[1024];
char test_your[1024];
ck_assert_int_eq(sprintf(test_original, \
    "saeflkahj%010.12f dslkj", -4353.235300), \
        s21_sprintf(test_your, "saeflkahj%010.12f dslkj", -4353.235300));
} END_TEST

START_TEST(int_sprintf_11) {
#line 654
char test_original[1024];
char test_your[1024];
ck_assert_int_eq(sprintf(test_original, \
    "saeflkahj%+010.12f dslkj", 4353.235300), \
        s21_sprintf(test_your, "saeflkahj%+010.12f dslkj", 4353.235300));
} END_TEST

START_TEST(int_sprintf_12) {
#line 659
char test_original[1024];
char test_your[1024];
ck_assert_int_eq(sprintf(test_original, \
    "saeflkahj% 10.12f dslkj", 0.235300), \
        s21_sprintf(test_your, "saeflkahj% 10.12f dslkj", 0.235300));
} END_TEST

START_TEST(int_sprintf_13) {
#line 664
char test_original[1024];
char test_your[1024];
ck_assert_int_eq(sprintf(test_original, \
    "saeflkahj% 10.12f dslkj", -4353.235300), \
        s21_sprintf(test_your, "saeflkahj% 10.12f dslkj", -4353.235300));
} END_TEST

START_TEST(int_sprintf_14) {
#line 669
char test_original[1024];
char test_your[1024];
ck_assert_int_eq(sprintf(test_original, \
    "saeflkahj%-.12f dslkj", 4353.235300), \
        s21_sprintf(test_your, "saeflkahj%-.12f dslkj", 4353.235300));
} END_TEST

START_TEST(int_sprintf_15) {
#line 674
char test_original[1024];
char test_your[1024];
ck_assert_int_eq(sprintf(test_original, \
    "saeflkahj%-.12f dslkj", -4353.235300), \
        s21_sprintf(test_your, "saeflkahj%-.12f dslkj", -4353.235300));
} END_TEST

START_TEST(int_sprintf_16) {
#line 679
char test_original[1024];
char test_your[1024];
ck_assert_int_eq(sprintf(test_original, \
    "saeflkahj%-f dslkj", -4353.235300), \
        s21_sprintf(test_your, "saeflkahj%-f dslkj", -4353.235300));
} END_TEST

START_TEST(int_sprintf_17) {
#line 684
char test_original[1024];
char test_your[1024];
ck_assert_int_eq(sprintf(test_original, \
    "saeflkahj%-.12f dslkj", -4353.235300), \
        s21_sprintf(test_your, "saeflkahj%-.12f dslkj", -4353.235300));
} END_TEST

START_TEST(int_sprintf_18) {
#line 689
char test_original[1024];
char test_your[1024];
ck_assert_int_eq(sprintf(test_original, \
    "saeflkahj%-f dslkj", 0.235300), \
        s21_sprintf(test_your, "saeflkahj%-f dslkj", 0.235300));
} END_TEST

START_TEST(int_sprintf_19) {
#line 694
char test_original[1024];
char test_your[1024];
ck_assert_int_eq(sprintf(test_original, \
        "saeflkahj%+f dslkj", 0.235300), \
            s21_sprintf(test_your, "saeflkahj%+f dslkj", 0.235300));
} END_TEST

START_TEST(int_sprintf_20) {
#line 699
char test_original[1024];
char test_your[1024];
ck_assert_int_eq(sprintf(test_original, \
    "saeflkahj% f dslkj", -4353.235300), \
        s21_sprintf(test_your, "saeflkahj% f dslkj", -4353.235300));
} END_TEST

START_TEST(int_sprintf_21) {
#line 704
char test_original[1024];
char test_your[1024];
ck_assert_int_eq(sprintf(test_original, \
    "saeflkahj% 8f dslkj", -4353.235300), \
        s21_sprintf(test_your, "saeflkahj% 8f dslkj", -4353.235300));
} END_TEST

START_TEST(int_sprintf_22) {
#line 709
char test_original[1024];
char test_your[1024];
ck_assert_int_eq(sprintf(test_original, \
    "%s%s%s%s%s%ssaeflkahj% 8f dslkj", "ds", " ", " ", \
        "0", "+", "9999999", -4353.235300), \
            s21_sprintf(test_your, "%s%s%s%s%s%ssaeflkahj% 8f dslkj", \
            "ds", " ", " ", "0", "+", "9999999", -4353.235300));
} END_TEST

START_TEST(sprintf_221) {
#line 714
char str1[1024];
s21_sprintf(str1, "Hola %08d", 34);
char str2[1024];
sprintf(str2, "Hola %08d", 34);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_222) {
#line 721
char str1[1024];
s21_sprintf(str1, "Hola %8d", 34);
char str2[1024];
sprintf(str2, "Hola %8d", 34);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(ssprintf_223) {
#line 728
char str1[1024];
s21_sprintf(str1, "Hola %-8d", 34);
char str2[1024];
sprintf(str2, "Hola %-8d", 34);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_224) {
#line 735
char str1[1024];
s21_sprintf(str1, "Hola %018d", 34);
char str2[1024];
sprintf(str2, "Hola %018d", 34);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_225) {
#line 742
char str1[1024];
s21_sprintf(str1, "Hola %18d", 34);
char str2[1024];
sprintf(str2, "Hola %18d", 34);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(ssprintf_226) {
#line 749
char str1[1024];
s21_sprintf(str1, "Hola %-18d", 34);
char str2[1024];
sprintf(str2, "Hola %-18d", 34);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(ssprintf_227) {
#line 756
char str1[1024];
s21_sprintf(str1, "Hola %02d", 343432);
char str2[1024];
sprintf(str2, "Hola %02d", 343432);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(ssprintf_228) {
#line 763
char str1[1024];
s21_sprintf(str1, "Hola %-2d", 34423342);
char str2[1024];
sprintf(str2, "Hola %-2d", 34423342);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(ssprintf_229) {
#line 770
char str1[1024];
s21_sprintf(str1, "Hola %9s", "Mundo");
char str2[1024];
sprintf(str2, "Hola %9s", "Mundo");
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(ssprintf_2210) {
#line 777
char str1[1024];
s21_sprintf(str1, "Hola %-9s", "Mundo");
char str2[1024];
sprintf(str2, "Hola %-9s", "Mundo");
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(ssprintf_2211) {
#line 784
char str1[1024];
s21_sprintf(str1, "Hola %2s", "Mundo");
char str2[1024];
sprintf(str2, "Hola %2s", "Mundo");
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(ssprintf_2212) {
#line 791
char str1[1024];
s21_sprintf(str1, "Hola %-2s", "Mundo");
char str2[1024];
sprintf(str2, "Hola %-2s", "Mundo");
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(ssprintf_2213) {
#line 798
char str1[1024];
s21_sprintf(str1, "Hola %12s", "Mundo");
char str2[1024];
sprintf(str2, "Hola %12s", "Mundo");
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(ssprintf_2214) {
#line 805
char str1[1024];
s21_sprintf(str1, "Hola %-12s", "Mundo");
char str2[1024];
sprintf(str2, "Hola %-12s", "Mundo");
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_231) {
#line 812
char str1[1024];
char str2[1024];
s21_sprintf(str2, "Hola %d", 7);
sprintf(str1, "Hola %d", 7);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_232) {
#line 819
char str1[1024];
char str2[1024];
s21_sprintf(str2, "%d:%d:%d", 7, 4, 0);
sprintf(str1, "%d:%d:%d", 7, 4, 0);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_233) {
#line 826
char str1[1024];
char str2[1024];
s21_sprintf(str2, "MAX %d", INT_MAX);
sprintf(str1, "MAX %d", INT_MAX);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_234) {
#line 833
char str1[1024];
char str2[1024];
s21_sprintf(str2, "MIN %d", INT_MIN);
sprintf(str1, "MIN %d", INT_MIN);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_235) {
#line 840
char str1[1024];
char str2[1024];
s21_sprintf(str2, "Hola %i", 3534555);
sprintf(str1, "Hola %i", 3534555);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_236) {
#line 847
char str1[1024];
char str2[1024];
s21_sprintf(str2, "Hola %+d", 3534555);
sprintf(str1, "Hola %+d", 3534555);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_237) {
#line 854
char str1[1024];
char str2[1024];
s21_sprintf(str2, "padding '%5d'", 7);
sprintf(str1, "padding '%5d'", 7);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_238) {
#line 861
char str1[1024];
char str2[1024];
s21_sprintf(str2, "padding '%5d'", INT_MAX);
sprintf(str1, "padding '%5d'", INT_MAX);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_239) {
#line 868
char str1[1024];
char str2[1024];
s21_sprintf(str2, "padding '%5d'", INT_MIN);
sprintf(str1, "padding '%5d'", INT_MIN);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2310) {
#line 875
char str1[1024];
char str2[1024];
s21_sprintf(str2, "padding '%05d'", 7);
sprintf(str1, "padding '%05d'", 7);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2311) {
#line 882
char str1[1024];
char str2[1024];
s21_sprintf(str2, "padding '%05d'", INT_MAX);
sprintf(str1, "padding '%05d'", INT_MAX);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2312) {
#line 889
char str1[1024];
char str2[1024];
s21_sprintf(str2, "padding '%05d'", INT_MIN);
sprintf(str1, "padding '%05d'", INT_MIN);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2313) {
#line 896
char str1[1024];
char str2[1024];
s21_sprintf(str2, "padding '%-5d'", 7);
sprintf(str1, "padding '%-5d'", 7);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2314) {
#line 903
char str1[1024];
char str2[1024];
s21_sprintf(str2, "padding '%-5d'", INT_MAX);
sprintf(str1, "padding '%-5d'", INT_MAX);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2315) {
#line 910
char str1[1024];
char str2[1024];
s21_sprintf(str2, "padding '%-5d'", INT_MIN);
sprintf(str1, "padding '%-5d'", INT_MIN);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2316) {
#line 917
char str1[1024];
char str2[1024];
s21_sprintf(str2, "precision '%.5d'", 7);
sprintf(str1, "precision '%.5d'", 7);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2317) {
#line 924
char str1[1024];
char str2[1024];
s21_sprintf(str2, "precision '%.5d'", INT_MAX);
sprintf(str1, "precision '%.5d'", INT_MAX);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2318) {
#line 931
char str1[1024];
char str2[1024];
s21_sprintf(str2, "precision '%.5d'", INT_MIN);
sprintf(str1, "precision '%.5d'", INT_MIN);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2319) {
#line 938
char str1[1024];
char str2[1024];
s21_sprintf(str2, "precision '%3.5d'", 7);
sprintf(str1, "precision '%3.5d'", 7);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2320) {
#line 945
char str1[1024];
char str2[1024];
s21_sprintf(str2, "precision '%3.5d'", INT_MAX);
sprintf(str1, "precision '%3.5d'", INT_MAX);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2321) {
#line 952
char str1[1024];
char str2[1024];
s21_sprintf(str2, "precision '%3.5d'", INT_MIN);
sprintf(str1, "precision '%3.5d'", INT_MIN);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2322) {
#line 959
char str1[1024];
char str2[1024];
s21_sprintf(str2, "precision '%-3.5d'", 7);
sprintf(str1, "precision '%-3.5d'", 7);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2323) {
#line 966
char str1[1024];
char str2[1024];
s21_sprintf(str2, "precision '%-3.5d'", INT_MAX);
sprintf(str1, "precision '%-3.5d'", INT_MAX);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2324) {
#line 973
char str1[1024];
char str2[1024];
s21_sprintf(str2, "precision '%-3.5d'", INT_MIN);
sprintf(str1, "precision '%-3.5d'", INT_MIN);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2325) {
#line 980
char str1[1024];
char str2[1024];
s21_sprintf(str2, "Hola %u", 7);
sprintf(str1, "Hola %u", 7);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2326) {
#line 987
char str1[1024];
char str2[1024];
s21_sprintf(str2, "%u:%u:%u", 7, 4, 0);
sprintf(str1, "%u:%u:%u", 7, 4, 0);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2327) {
#line 994
char str1[1024];
char str2[1024];
s21_sprintf(str2, "MAX %u", UINT_MAX);
sprintf(str1, "MAX %u", UINT_MAX);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2328) {
#line 1001
char str1[1024];
char str2[1024];
s21_sprintf(str2, "MIN %u", 0);
sprintf(str1, "MIN %u", 0);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2329) {
#line 1008
char str1[1024];
char str2[1024];
s21_sprintf(str2, "padding '%5u'", 7);
sprintf(str1, "padding '%5u'", 7);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2330) {
#line 1015
char str1[1024];
char str2[1024];
s21_sprintf(str2, "padding '%5u'", UINT_MAX);
sprintf(str1, "padding '%5u'", UINT_MAX);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2331) {
#line 1022
char str1[1024];
char str2[1024];
s21_sprintf(str2, "padding '%5u'", 0);
sprintf(str1, "padding '%5u'", 0);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2332) {
#line 1029
char str1[1024];
char str2[1024];
s21_sprintf(str2, "padding '%-5u'", 7);
sprintf(str1, "padding '%-5u'", 7);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2333) {
#line 1036
char str1[1024];
char str2[1024];
s21_sprintf(str2, "padding '%-5u'", UINT_MAX);
sprintf(str1, "padding '%-5u'", UINT_MAX);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2334) {
#line 1043
char str1[1024];
char str2[1024];
s21_sprintf(str2, "padding '%-5u'", 0);
sprintf(str1, "padding '%-5u'", 0);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2335) {
#line 1050
char str1[1024];
char str2[1024];
s21_sprintf(str2, "precision '%.5u'", 7);
sprintf(str1, "precision '%.5u'", 7);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2336) {
#line 1057
char str1[1024];
char str2[1024];
s21_sprintf(str2, "precision '%.5u'", UINT_MAX);
sprintf(str1, "precision '%.5u'", UINT_MAX);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2337) {
#line 1064
char str1[1024];
char str2[1024];
s21_sprintf(str2, "precision '%.5u'", 0);
sprintf(str1, "precision '%.5u'", 0);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2338) {
#line 1071
char str1[1024];
char str2[1024];
s21_sprintf(str2, "precision '%3.5u'", 7);
sprintf(str1, "precision '%3.5u'", 7);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2339) {
#line 1078
char str1[1024];
char str2[1024];
s21_sprintf(str2, "precision '%3.5u'", UINT_MAX);
sprintf(str1, "precision '%3.5u'", UINT_MAX);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2340) {
#line 1085
char str1[1024];
char str2[1024];
s21_sprintf(str2, "precision '%3.5u'", 0);
sprintf(str1, "precision '%3.5u'", 0);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2341) {
#line 1092
char str1[1024];
char str2[1024];
s21_sprintf(str2, "precision '%-3.5u'", 7);
sprintf(str1, "precision '%-3.5u'", 7);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2342) {
#line 1099
char str1[1024];
char str2[1024];
s21_sprintf(str2, "precision '%-3.5u'", UINT_MAX);
sprintf(str1, "precision '%-3.5u'", UINT_MAX);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2343) {
#line 1106
char str1[1024];
char str2[1024];
s21_sprintf(str2, "precision '%-3.5u'", 0);
sprintf(str1, "precision '%-3.5u'", 0);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2344) {
#line 1113
char str1[1024];
char str2[1024];
s21_sprintf(str2, "Hola %ld", 3534535547l);
sprintf(str1, "Hola %ld", 3534535547l);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2345) {
#line 1120
char str1[1024];
char str2[1024];
s21_sprintf(str2, "%ld:%ld:%ld", 7l, 34543245324l, 0l);
sprintf(str1, "%ld:%ld:%ld", 7l, 34543245324l, 0l);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2346) {
#line 1127
char str1[1024];
char str2[1024];
s21_sprintf(str2, "%ld", -5435432542l);
sprintf(str1, "%ld", -5435432542l);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2347) {
#line 1134
char str1[1024];
char str2[1024];
s21_sprintf(str2, "MAX %ld", LONG_MAX);
sprintf(str1, "MAX %ld", LONG_MAX);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2348) {
#line 1141
char str1[1024];
char str2[1024];
s21_sprintf(str2, "MIN %ld", LONG_MIN);
sprintf(str1, "MIN %ld", LONG_MIN);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2349) {
#line 1148
char str1[1024];
char str2[1024];
s21_sprintf(str2, "Hola %li", 3534535547l);
sprintf(str1, "Hola %li", 3534535547l);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2350) {
#line 1155
char str1[1024];
char str2[1024];
s21_sprintf(str2, "padding '%5ld'", 72342l);
sprintf(str1, "padding '%5ld'", 72342l);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2351) {
#line 1162
char str1[1024];
char str2[1024];
s21_sprintf(str2, "padding '%5ld'", LONG_MAX);
sprintf(str1, "padding '%5ld'", LONG_MAX);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2352) {
#line 1169
char str1[1024];
char str2[1024];
s21_sprintf(str2, "padding '%5ld'", LONG_MIN);
sprintf(str1, "padding '%5ld'", LONG_MIN);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2353) {
#line 1176
char str1[1024];
char str2[1024];
s21_sprintf(str2, "padding '%05ld'", 72342l);
sprintf(str1, "padding '%05ld'", 72342l);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2354) {
#line 1183
char str1[1024];
char str2[1024];
s21_sprintf(str2, "padding '%05ld'", LONG_MAX);
sprintf(str1, "padding '%05ld'", LONG_MAX);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2355) {
#line 1190
char str1[1024];
char str2[1024];
s21_sprintf(str2, "padding '%05ld'", LONG_MIN);
sprintf(str1, "padding '%05ld'", LONG_MIN);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2356) {
#line 1197
char str1[1024];
char str2[1024];
s21_sprintf(str2, "padding '%-5ld'", 742343l);
sprintf(str1, "padding '%-5ld'", 742343l);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2357) {
#line 1204
char str1[1024];
char str2[1024];
s21_sprintf(str2, "padding '%-5ld'", LONG_MAX);
sprintf(str1, "padding '%-5ld'", LONG_MAX);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2358) {
#line 1211
char str1[1024];
char str2[1024];
s21_sprintf(str2, "padding '%-5ld'", LONG_MIN);
sprintf(str1, "padding '%-5ld'", LONG_MIN);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2359) {
#line 1218
char str1[1024];
char str2[1024];
s21_sprintf(str2, "precision '%.5ld'", 754354l);
sprintf(str1, "precision '%.5ld'", 754354l);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2360) {
#line 1225
char str1[1024];
char str2[1024];
s21_sprintf(str2, "precision '%.5ld'", LONG_MAX);
sprintf(str1, "precision '%.5ld'", LONG_MAX);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2361) {
#line 1232
char str1[1024];
char str2[1024];
s21_sprintf(str2, "precision '%.5ld'", LONG_MIN);
sprintf(str1, "precision '%.5ld'", LONG_MIN);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2362) {
#line 1239
char str1[1024];
char str2[1024];
s21_sprintf(str2, "precision '%3.5ld'", 7343l);
sprintf(str1, "precision '%3.5ld'", 7343l);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2363) {
#line 1246
char str1[1024];
char str2[1024];
s21_sprintf(str2, "precision '%3.5ld'", LONG_MAX);
sprintf(str1, "precision '%3.5ld'", LONG_MAX);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2364) {
#line 1253
char str1[1024];
char str2[1024];
s21_sprintf(str2, "precision '%3.5ld'", LONG_MIN);
sprintf(str1, "precision '%3.5ld'", LONG_MIN);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2365) {
#line 1260
char str1[1024];
char str2[1024];
s21_sprintf(str2, "precision '%-3.5ld'", 754354l);
sprintf(str1, "precision '%-3.5ld'", 754354l);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2366) {
#line 1267
char str1[1024];
char str2[1024];
s21_sprintf(str2, "precision '%-3.5ld'", LONG_MAX);
sprintf(str1, "precision '%-3.5ld'", LONG_MAX);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2367) {
#line 1274
char str1[1024];
char str2[1024];
s21_sprintf(str2, "precision '%-3.5ld'", LONG_MIN);
sprintf(str1, "precision '%-3.5ld'", LONG_MIN);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2368) {
#line 1281
char str1[1024];
char str2[1024];
s21_sprintf(str2, "Hola %lu", 7l);
sprintf(str1, "Hola %lu", 7l);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2369) {
#line 1288
char str1[1024];
char str2[1024];
s21_sprintf(str2, "%lu:%lu:%lu", 7l, 4l, 0l);
sprintf(str1, "%lu:%lu:%lu", 7l, 4l, 0l);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2370) {
#line 1295
char str1[1024];
char str2[1024];
s21_sprintf(str2, "MAX %lu", ULONG_MAX);
sprintf(str1, "MAX %lu", ULONG_MAX);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2371) {
#line 1302
char str1[1024];
char str2[1024];
s21_sprintf(str2, "MIN %lu", 0l);
sprintf(str1, "MIN %lu", 0l);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2372) {
#line 1309
char str1[1024];
char str2[1024];
s21_sprintf(str2, "padding '%5lu'", 7l);
sprintf(str1, "padding '%5lu'", 7l);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2373) {
#line 1316
char str1[1024];
char str2[1024];
s21_sprintf(str2, "padding '%5lu'", ULONG_MAX);
sprintf(str1, "padding '%5lu'", ULONG_MAX);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2374) {
#line 1323
char str1[1024];
char str2[1024];
s21_sprintf(str2, "padding '%5lu'", 0l);
sprintf(str1, "padding '%5lu'", 0l);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2375) {
#line 1330
char str1[1024];
char str2[1024];
s21_sprintf(str2, "padding '%-5lu'", 7l);
sprintf(str1, "padding '%-5lu'", 7l);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2376) {
#line 1337
char str1[1024];
char str2[1024];
s21_sprintf(str2, "padding '%-5lu'", ULONG_MAX);
sprintf(str1, "padding '%-5lu'", ULONG_MAX);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2377) {
#line 1344
char str1[1024];
char str2[1024];
s21_sprintf(str2, "padding '%-5lu'", 0l);
sprintf(str1, "padding '%-5lu'", 0l);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2378) {
#line 1351
char str1[1024];
char str2[1024];
s21_sprintf(str2, "precision '%.5lu'", 7l);
sprintf(str1, "precision '%.5lu'", 7l);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2379) {
#line 1358
char str1[1024];
char str2[1024];
s21_sprintf(str2, "precision '%.5lu'", ULONG_MAX);
sprintf(str1, "precision '%.5lu'", ULONG_MAX);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2380) {
#line 1365
char str1[1024];
char str2[1024];
s21_sprintf(str2, "precision '%.5lu'", 0l);
sprintf(str1, "precision '%.5lu'", 0l);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2381) {
#line 1372
char str1[1024];
char str2[1024];
s21_sprintf(str2, "precision '%3.5lu'", 7l);
sprintf(str1, "precision '%3.5lu'", 7l);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2382) {
#line 1379
char str1[1024];
char str2[1024];
s21_sprintf(str2, "precision '%3.5lu'", ULONG_MAX);
sprintf(str1, "precision '%3.5lu'", ULONG_MAX);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2383) {
#line 1386
char str1[1024];
char str2[1024];
s21_sprintf(str2, "precision '%3.5lu'", 0l);
sprintf(str1, "precision '%3.5lu'", 0l);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2384) {
#line 1393
char str1[1024];
char str2[1024];
s21_sprintf(str2, "precision '%-3.5lu'", 7l);
sprintf(str1, "precision '%-3.5lu'", 7l);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2385) {
#line 1400
char str1[1024];
char str2[1024];
s21_sprintf(str2, "precision '%-3.5lu'", ULONG_MAX);
sprintf(str1, "precision '%-3.5lu'", ULONG_MAX);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2386) {
#line 1407
char str1[1024];
char str2[1024];
s21_sprintf(str2, "precision '%-3.5lu'", 0l);
sprintf(str1, "precision '%-3.5lu'", 0l);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2387) {
#line 1414
char str1[1024];
char str2[1024];
s21_sprintf(str2, "%.5f", 3.5);
sprintf(str1, "%.5f", 3.5);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2388) {
#line 1421
char str1[1024];
char str2[1024];
s21_sprintf(str2, "%.5f", -3.5);
sprintf(str1, "%.5f", -3.5);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2391) {
#line 1428
char str1[1024];
char str2[1024];
s21_sprintf(str2, "%.5f", 0.0);
sprintf(str1, "%.5f", 0.0);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2392) {
#line 1435
char str1[1024];
char str2[1024];
s21_sprintf(str2, "%.5f", 3.5458730589043);
sprintf(str1, "%.5f", 3.5458730589043);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2393) {
#line 1442
char str1[1024];
char str2[1024];
s21_sprintf(str2, "%.5f", -3.5458730589043);
sprintf(str1, "%.5f", -3.5458730589043);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2394) {
#line 1449
char str1[1024];
char str2[1024];
s21_sprintf(str2, "%10.4f", 3.5458730589043);
sprintf(str1, "%10.4f", 3.5458730589043);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2395) {
#line 1456
char str1[1024];
char str2[1024];
s21_sprintf(str2, "%10.4f", -3.5458730589043);
sprintf(str1, "%10.4f", -3.5458730589043);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2396) {
#line 1463
char str1[1024];
char str2[1024];
s21_sprintf(str2, "%07.5f", 334243.5458730589043);
sprintf(str1, "%07.5f", 334243.5458730589043);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2401) {
#line 1470
char str1[1024];
char str2[1024];
s21_sprintf(str2, "%10.5d", INT_MIN);
sprintf(str1, "%10.5d", INT_MIN);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2402) {
#line 1477
char str1[1024];
char str2[1024];
s21_sprintf(str2, "%10.5d", INT_MAX);
sprintf(str1, "%10.5d", INT_MAX);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2403) {
#line 1484
char str1[1024];
char str2[1024];
s21_sprintf(str2, "%10.5ld", LONG_MIN);
sprintf(str1, "%10.5ld", LONG_MIN);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2404) {
#line 1491
char str1[1024];
char str2[1024];
s21_sprintf(str2, "%10.5ld", LONG_MAX);
sprintf(str1, "%10.5ld", LONG_MAX);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2405) {
#line 1498
char str1[1024];
char str2[1024];
s21_sprintf(str2, "%10.5lu", ULONG_MAX);
sprintf(str1, "%10.5lu", ULONG_MAX);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_070501) {
#line 1505
char str1[1024];
char str2[1024];
s21_sprintf(str2, "%f", 6.1);
sprintf(str1, "%f", 6.1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_070502) {
#line 1512
char str1[1024];
char str2[1024];
s21_sprintf(str2, "%f", 06.1);
sprintf(str1, "%f", 06.1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_070503) {
#line 1519
char str1[1024];
char str2[1024];
s21_sprintf(str2, "%f", 6.01);
sprintf(str1, "%f", 6.01);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_070504) {
#line 1526
char str1[1024];
char str2[1024];
s21_sprintf(str2, "%.f", 6.01);
sprintf(str1, "%.f", 6.01);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_070505) {
#line 1533
char str1[1024];
char str2[1024];
s21_sprintf(str2, "%.0f", 6.01);
sprintf(str1, "%.0f", 6.01);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_070506) {
#line 1540
char str1[1024];
char str2[1024];
s21_sprintf(str2, "%.1f", 6.01);
sprintf(str1, "%.1f", 6.01);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_070507) {
#line 1547
char str1[1024];
char str2[1024];
s21_sprintf(str2, "%f", 1.23e+07);
sprintf(str1, "%f", 1.23e+07);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_070508) {
#line 1554
char str1[1024];
char str2[1024];
s21_sprintf(str2, "%f", 1234561e+00);
sprintf(str1, "%f", 1234561e+00);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_070509) {
#line 1561
char str1[1024];
char str2[1024];
s21_sprintf(str2, "%f", 1234561e+07);
sprintf(str1, "%f", 1234561e+07);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_070510) {
#line 1568
char str1[1024];
char str2[1024];
s21_sprintf(str2, "%.9f", 1000000000.00);
sprintf(str1, "%.9f", 1000000000.00);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_070511) {
#line 1575
char str1[1024];
char str2[1024];
s21_sprintf(str2, "%e", 909.0);
sprintf(str1, "%e", 909.0);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_070512) {
#line 1582
char str1[1024];
char str2[1024];
s21_sprintf(str2, "%3.e", 0.0);
sprintf(str1, "%3.e", 0.0);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_070513) {
#line 1589
char str1[1024];
char str2[1024];
s21_sprintf(str2, "%3.f", 0.0);
sprintf(str1, "%3.f", 0.0);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2405x) {
#line 1596
char str1[1024];
char str2[1024];
s21_sprintf(str2, " - %d - [] - l.%d\n", -2, 2802);
sprintf(str1, " - %d - [] - l.%d\n", -2, 2802);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2406x) {
#line 1603
char str1[1024];
char str2[1024];
s21_sprintf(str2, " - %d - [%%3.15h%%] - l.%d\n", -2, __LINE__);
sprintf(str1, " - %d - [%%3.15h%%] - l.%d\n", -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2408) {
#line 1610
char str1[1024];
char str2[1024];
s21_sprintf(str2, " - %d - [%%03.15h%%] - l.%d\n", -2, __LINE__);
sprintf(str1, " - %d - [%%03.15h%%] - l.%d\n", -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2409) {
#line 1617
char str1[1024];
char str2[1024];
s21_sprintf(str2, " - %d - [%%#0%%] - l.%d\n", -2, __LINE__);
sprintf(str1, " - %d - [%%#0%%] - l.%d\n", -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2410) {
#line 1624
char str1[1024];
char str2[1024];
s21_sprintf(str2, " - %d - [%%#015.20%%] - l.%d\n", -2, __LINE__);
sprintf(str1, " - %d - [%%#015.20%%] - l.%d\n", -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2411) {
#line 1631
char str1[1024];
char str2[1024];
s21_sprintf(str2, " - %d - [%%#0- 15.5%%] - l.%d\n", -2, __LINE__);
sprintf(str1, " - %d - [%%#0- 15.5%%] - l.%d\n", -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2412) {
#line 1638
char str1[1024];
char str2[1024];
s21_sprintf(str2, " - %d - [%%#0-+ 3.2%%] - l.%d\n", -2, __LINE__);
sprintf(str1, " - %d - [%%#0-+ 3.2%%] - l.%d\n", -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2413) {
#line 1645
char str1[1024];
char str2[1024];
s21_sprintf(str2, " - %d - [%%#0+ 3.2%%] - l.%d\n", -2, __LINE__);
sprintf(str1, " - %d - [%%#0+ 3.2%%] - l.%d\n", -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2414) {
#line 1652
char str1[1024];
char str2[1024];
s21_sprintf(str2, " - %d - [%%#0 15.5%%] - l.%d\n", -2, __LINE__);
sprintf(str1, " - %d - [%%#0 15.5%%] - l.%d\n", -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2415) {
#line 1659
char str1[1024];
char str2[1024];
s21_sprintf(str2, " - %d - [%%#-3%%] - l.%d\n", -2, __LINE__);
sprintf(str1, " - %d - [%%#-3%%] - l.%d\n", -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2416) {
#line 1666
char str1[1024];
char str2[1024];
s21_sprintf(str2, " - %d - [%%#-15.0%%] - l.%d\n", -2, __LINE__);
sprintf(str1, " - %d - [%%#-15.0%%] - l.%d\n", -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2417) {
#line 1673
char str1[1024];
char str2[1024];
s21_sprintf(str2, " - %d - [%%#-+15.0%%] - l.%d\n", -2, __LINE__);
sprintf(str1, " - %d - [%%#-+15.0%%] - l.%d\n", -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2418) {
#line 1680
char str1[1024];
char str2[1024];
s21_sprintf(str2, " - %d - [%%#- 15.0%%] - l.%d\n", -2, __LINE__);
sprintf(str1, " - %d - [%%#- 15.0%%] - l.%d\n", -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2419) {
#line 1687
char str1[1024];
char str2[1024];
s21_sprintf(str2, " - %d - [%%#-+ 15.0%%] - l.%d\n", -2, __LINE__);
sprintf(str1, " - %d - [%%#-+ 15.0%%] - l.%d\n", -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2420) {
#line 1694
char str1[1024];
char str2[1024];
s21_sprintf(str2, " - %d - [%%#-+ 15.20%%] - l.%d\n", -2, __LINE__);
sprintf(str1, " - %d - [%%#-+ 15.20%%] - l.%d\n", -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2421) {
#line 1701
char str1[1024];
char str2[1024];
s21_sprintf(str2, " - %d - [%%#+%%] - l.%d\n", -2, __LINE__);
sprintf(str1, " - %d - [%%#+%%] - l.%d\n", -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2423) {
#line 1708
char str1[1024];
char str2[1024];
s21_sprintf(str2, " - %d - [%%#+15%%] - l.%d\n", -2, __LINE__);
sprintf(str1, " - %d - [%%#+15%%] - l.%d\n", -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2427) {
#line 1715
char str1[1024];
char str2[1024];
s21_sprintf(str2, " - %d - [%%d] - l.%d\n", -2, __LINE__);
sprintf(str1, " - %d - [%%d] - l.%d\n", -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2428) {
#line 1722
char str1[1024];
char str2[1024];
s21_sprintf(str2, "[%d]", 0);
sprintf(str1, "[%d]", 0);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2429) {
#line 1729
char str1[1024];
char str2[1024];
s21_sprintf(str2, " - %d - [%%15.20d] - l.%d\n", -2, __LINE__);
sprintf(str1, " - %d - [%%15.20d] - l.%d\n", -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2430) {
#line 1736
char str1[1024];
char str2[1024];
s21_sprintf(str2, "[%15.20d]", 0);
sprintf(str1, "[%15.20d]", 0);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2431) {
#line 1743
char str1[1024];
char str2[1024];
s21_sprintf(str2, " - %d - [%%015.20d] - l.%d\n", -2, __LINE__);
sprintf(str1, " - %d - [%%015.20d] - l.%d\n", -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2433) {
#line 1750
char str1[1024];
char str2[1024];
s21_sprintf(str2, "precision '%f'", 6.1);
sprintf(str1, "precision '%f'", 6.1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2434) {
#line 1757
char str1[1024];
char str2[1024];
s21_sprintf(str2, " - %d - [%%f] - l.%d\n", -2, __LINE__);
sprintf(str1, " - %d - [%%f] - l.%d\n", -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2436) {
#line 1764
char str1[1024];
char str2[1024];
s21_sprintf(str2, " - %d - [%%3.15f] - l.%d\n", -2, __LINE__);
sprintf(str1, " - %d - [%%3.15f] - l.%d\n", -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2708) {
#line 1771
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%d] - l.%d\n, [%d]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%d] - l.%d\n, [%d]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2709) {
#line 1778
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%d] - l.%d\n, [%d]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%d] - l.%d\n, [%d]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2710) {
#line 1785
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%d] - l.%d\n, [%d]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%d] - l.%d\n, [%d]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2711) {
#line 1792
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%3d] - l.%d\n, [%3d]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%3d] - l.%d\n, [%3d]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2712) {
#line 1799
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%3d] - l.%d\n, [%3d]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%3d] - l.%d\n, [%3d]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2713) {
#line 1806
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%3d] - l.%d\n, [%3d]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%3d] - l.%d\n, [%3d]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2714) {
#line 1813
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%3.0d] - l.%d\n, [%3.0d]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%3.0d] - l.%d\n, [%3.0d]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2715) {
#line 1820
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%3.0d] - l.%d\n, [%3.0d]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%3.0d] - l.%d\n, [%3.0d]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2716) {
#line 1827
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%3.0d] - l.%d\n, [%3.0d]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%3.0d] - l.%d\n, [%3.0d]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2717) {
#line 1834
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%3.2d] - l.%d\n, [%3.2d]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%3.2d] - l.%d\n, [%3.2d]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2718) {
#line 1841
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%3.2d] - l.%d\n, [%3.2d]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%3.2d] - l.%d\n, [%3.2d]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2719) {
#line 1848
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%3.2d] - l.%d\n, [%3.2d]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%3.2d] - l.%d\n, [%3.2d]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2720) {
#line 1855
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%3.5d] - l.%d\n, [%3.5d]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%3.5d] - l.%d\n, [%3.5d]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2721) {
#line 1862
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%3.5d] - l.%d\n, [%3.5d]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%3.5d] - l.%d\n, [%3.5d]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2722) {
#line 1869
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%3.5d] - l.%d\n, [%3.5d]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%3.5d] - l.%d\n, [%3.5d]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2723) {
#line 1876
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%3.15d] - l.%d\n, [%3.15d]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%3.15d] - l.%d\n, [%3.15d]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2724) {
#line 1883
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%3.15d] - l.%d\n, [%3.15d]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%3.15d] - l.%d\n, [%3.15d]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2725) {
#line 1890
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%3.15d] - l.%d\n, [%3.15d]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%3.15d] - l.%d\n, [%3.15d]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2726) {
#line 1897
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%15d] - l.%d\n, [%15d]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%15d] - l.%d\n, [%15d]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2727) {
#line 1904
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%15d] - l.%d\n, [%15d]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%15d] - l.%d\n, [%15d]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2728) {
#line 1911
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%15d] - l.%d\n, [%15d]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%15d] - l.%d\n, [%15d]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2729) {
#line 1918
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%15.0d] - l.%d\n, [%15.0d]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%15.0d] - l.%d\n, [%15.0d]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2730) {
#line 1925
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%15.0d] - l.%d\n, [%15.0d]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%15.0d] - l.%d\n, [%15.0d]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2731) {
#line 1932
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%15.0d] - l.%d\n, [%15.0d]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%15.0d] - l.%d\n, [%15.0d]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2732) {
#line 1939
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%15.5d] - l.%d\n, [%15.5d]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%15.5d] - l.%d\n, [%15.5d]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2733) {
#line 1946
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%15.5d] - l.%d\n, [%15.5d]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%15.5d] - l.%d\n, [%15.5d]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2734) {
#line 1953
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%15.5d] - l.%d\n, [%15.5d]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%15.5d] - l.%d\n, [%15.5d]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2735) {
#line 1960
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%15.20d] - l.%d\n, [%15.20d]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%15.20d] - l.%d\n, [%15.20d]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2736) {
#line 1967
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%15.20d] - l.%d\n, [%15.20d]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%15.20d] - l.%d\n, [%15.20d]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2737) {
#line 1974
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%15.20d] - l.%d\n, [%15.20d]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%15.20d] - l.%d\n, [%15.20d]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2738) {
#line 1981
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-d] - l.%d\n, [%-d]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%-d] - l.%d\n, [%-d]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2739) {
#line 1988
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-3d] - l.%d\n, [%-3d]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%-3d] - l.%d\n, [%-3d]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2740) {
#line 1995
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-3.0d] - l.%d\n, [%-3.0d]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%-3.0d] - l.%d\n, [%-3.0d]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2741) {
#line 2002
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-3.2d] - l.%d\n, [%-3.2d]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%-3.2d] - l.%d\n, [%-3.2d]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2742) {
#line 2009
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-3.5d] - l.%d\n, [%-3.5d]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%-3.5d] - l.%d\n, [%-3.5d]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2743) {
#line 2016
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-3.5d] - l.%d\n, [%-3.5d]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%-3.5d] - l.%d\n, [%-3.5d]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2744) {
#line 2023
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-3.15d] - l.%d\n, [%-3.15d]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%-3.15d] - l.%d\n, [%-3.15d]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2745) {
#line 2030
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-3.15d] - l.%d\n, [%-3.15d]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%-3.15d] - l.%d\n, [%-3.15d]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2746) {
#line 2037
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-3.15d] - l.%d\n, [%-3.15d]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%-3.15d] - l.%d\n, [%-3.15d]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2747) {
#line 2044
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%+d] - l.%d\n, [%+d]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%+d] - l.%d\n, [%+d]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2748) {
#line 2051
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%+d] - l.%d\n, [%+d]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%+d] - l.%d\n, [%+d]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2749) {
#line 2058
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%+d] - l.%d\n, [%+d]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%+d] - l.%d\n, [%+d]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2750) {
#line 2065
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%+3d] - l.%d\n, [%+3d]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%+3d] - l.%d\n, [%+3d]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2751) {
#line 2072
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%+3d] - l.%d\n, [%+3d]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%+3d] - l.%d\n, [%+3d]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2752) {
#line 2079
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%+3d] - l.%d\n, [%+3d]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%+3d] - l.%d\n, [%+3d]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2753) {
#line 2086
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%+3d] - l.%d\n, [%+3d]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%+3d] - l.%d\n, [%+3d]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2754) {
#line 2093
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%+3d] - l.%d\n, [%+3d]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%+3d] - l.%d\n, [%+3d]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2755) {
#line 2100
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%+3d] - l.%d\n, [%+3d]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%+3d] - l.%d\n, [%+3d]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2756) {
#line 2107
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%+3.5d] - l.%d\n, [%+3.5d]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%+3.5d] - l.%d\n, [%+3.5d]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2757) {
#line 2114
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%+3.5d] - l.%d\n, [%+3.5d]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%+3.5d] - l.%d\n, [%+3.5d]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2758) {
#line 2121
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%+3.5d] - l.%d\n, [%+3.5d]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%+3.5d] - l.%d\n, [%+3.5d]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2759) {
#line 2128
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%+3.15d] - l.%d\n, [%+3.15d]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%+3.15d] - l.%d\n, [%+3.15d]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2760) {
#line 2135
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%+3.15d] - l.%d\n, [%+3.15d]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%+3.15d] - l.%d\n, [%+3.15d]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2761) {
#line 2142
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%+3.15d] - l.%d\n, [%+3.15d]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%+3.15d] - l.%d\n, [%+3.15d]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2762) {
#line 2149
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%+15d] - l.%d\n, [%+15d]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%+15d] - l.%d\n, [%+15d]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2763) {
#line 2156
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%+15d] - l.%d\n, [%+15d]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%+15d] - l.%d\n, [%+15d]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2764) {
#line 2163
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%+15d] - l.%d\n, [%+15d]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%+15d] - l.%d\n, [%+15d]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2765) {
#line 2170
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%+15.0d] - l.%d\n, [%+15.0d]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%+15.0d] - l.%d\n, [%+15.0d]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2766) {
#line 2177
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%+15.0d] - l.%d\n, [%+15.0d]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%+15.0d] - l.%d\n, [%+15.0d]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2767) {
#line 2184
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%+15.0d] - l.%d\n, [%+15.0d]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%+15.0d] - l.%d\n, [%+15.0d]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2768) {
#line 2191
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%+15.5d] - l.%d\n, [%+15.5d]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%+15.5d] - l.%d\n, [%+15.5d]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2769) {
#line 2198
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%+15.5d] - l.%d\n, [%+15.5d]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%+15.5d] - l.%d\n, [%+15.5d]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2770) {
#line 2205
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%+15.5d] - l.%d\n, [%+15.5d]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%+15.5d] - l.%d\n, [%+15.5d]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2771) {
#line 2212
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%+15.20d] - l.%d\n, [%+15.20d]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%+15.20d] - l.%d\n, [%+15.20d]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2772) {
#line 2219
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%+15.20d] - l.%d\n, [%+15.20d]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%+15.20d] - l.%d\n, [%+15.20d]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2773) {
#line 2226
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%+15.20d] - l.%d\n, [%+15.20d]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%+15.20d] - l.%d\n, [%+15.20d]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2774) {
#line 2233
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%% d] - l.%d\n, [% d]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%% d] - l.%d\n, [% d]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2775) {
#line 2240
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%% d] - l.%d\n, [% d]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%% d] - l.%d\n, [% d]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2776) {
#line 2247
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%% d] - l.%d\n, [% d]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%% d] - l.%d\n, [% d]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2777) {
#line 2254
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%% 3d] - l.%d\n, [% 3d]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%% 3d] - l.%d\n, [% 3d]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2778) {
#line 2261
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%% 3d] - l.%d\n, [% 3d]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%% 3d] - l.%d\n, [% 3d]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2779) {
#line 2268
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%% 3d] - l.%d\n, [% 3d]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%% 3d] - l.%d\n, [% 3d]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2780) {
#line 2275
char str1[1024];
char str2[1024];
s21_sprintf(str2, " - %d - [%% 3.0d] - l.%d\n, [% 3.0d]", 0, -2, __LINE__);
sprintf(str1, " - %d - [%% 3.0d] - l.%d\n, [% 3.0d]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2781) {
#line 2282
char str1[1024];
char str2[1024];
s21_sprintf(str2, " - %d - [%% 3.0d] - l.%d\n, [% 3.0d]", INT_MIN, -2, __LINE__);
sprintf(str1, " - %d - [%% 3.0d] - l.%d\n, [% 3.0d]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2782) {
#line 2289
char str1[1024];
char str2[1024];
s21_sprintf(str2, " - %d - [%% 3.0d] - l.%d\n, [% 3.0d]", INT_MAX, -2, __LINE__);
sprintf(str1, " - %d - [%% 3.0d] - l.%d\n, [% 3.0d]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2783) {
#line 2296
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%% 3.2d] - l.%d\n, [% 3.2d]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%% 3.2d] - l.%d\n, [% 3.2d]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2784) {
#line 2303
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%% 3.2d] - l.%d\n, [% 3.2d]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%% 3.2d] - l.%d\n, [% 3.2d]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2785) {
#line 2310
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%% 3.2d] - l.%d\n, [% 3.2d]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%% 3.2d] - l.%d\n, [% 3.2d]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2786) {
#line 2317
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%% 3.5d] - l.%d\n, [% 3.5d]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%% 3.5d] - l.%d\n, [% 3.5d]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2786_2) {
#line 2324
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%% 3.5d] - l.%d\n, [% 3.5d]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%% 3.5d] - l.%d\n, [% 3.5d]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2787) {
#line 2331
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%% 3.5d] - l.%d\n, [% 3.5d]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%% 3.5d] - l.%d\n, [% 3.5d]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2788) {
#line 2338
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%% 3.15d] - l.%d\n, [% 3.15d]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%% 3.15d] - l.%d\n, [% 3.15d]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2789) {
#line 2345
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%% 3.15d] - l.%d\n, [% 3.15d]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%% 3.15d] - l.%d\n, [% 3.15d]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2790) {
#line 2352
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%% 3.15d] - l.%d\n, [% 3.15d]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%% 3.15d] - l.%d\n, [% 3.15d]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2791) {
#line 2359
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%% 15d] - l.%d\n, [% 15d]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%% 15d] - l.%d\n, [% 15d]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2792) {
#line 2366
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%% 15d] - l.%d\n, [% 15d]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%% 15d] - l.%d\n, [% 15d]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2793) {
#line 2373
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%% 15d] - l.%d\n, [% 15d]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%% 15d] - l.%d\n, [% 15d]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2794) {
#line 2380
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%% 15.0d] - l.%d\n, [% 15.0d]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%% 15.0d] - l.%d\n, [% 15.0d]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2795) {
#line 2387
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%% 15.0d] - l.%d\n, [% 15.0d]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%% 15.0d] - l.%d\n, [% 15.0d]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2796) {
#line 2394
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%% 15.0d] - l.%d\n, [% 15.0d]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%% 15.0d] - l.%d\n, [% 15.0d]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2797) {
#line 2401
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%% 15.5d] - l.%d\n, [% 15.5d]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%% 15.5d] - l.%d\n, [% 15.5d]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2798) {
#line 2408
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%% 15.5d] - l.%d\n, [% 15.5d]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%% 15.5d] - l.%d\n, [% 15.5d]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2799) {
#line 2415
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%% 15.5d] - l.%d\n, [% 15.5d]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%% 15.5d] - l.%d\n, [% 15.5d]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2800) {
#line 2422
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%% 15.20d] - l.%d\n, [% 15.20d]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%% 15.20d] - l.%d\n, [% 15.20d]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2801) {
#line 2429
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%% 15.20d] - l.%d\n, [% 15.20d]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%% 15.20d] - l.%d\n, [% 15.20d]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2802) {
#line 2436
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%% 15.20d] - l.%d\n, [% 15.20d]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%% 15.20d] - l.%d\n, [% 15.20d]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2803) {
#line 2443
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%hd] - l.%d\n, [%hd]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%hd] - l.%d\n, [%hd]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2804) {
#line 2450
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%hd] - l.%d\n, [%hd]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%hd] - l.%d\n, [%hd]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2805) {
#line 2457
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%hd] - l.%d\n, [%hd]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%hd] - l.%d\n, [%hd]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2806) {
#line 2464
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%3hd] - l.%d\n, [%3hd]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%3hd] - l.%d\n, [%3hd]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2807) {
#line 2471
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%3hd] - l.%d\n, [%3hd]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%3hd] - l.%d\n, [%3hd]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2807_2) {
#line 2478
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%3hd] - l.%d\n, [%3hd]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%3hd] - l.%d\n, [%3hd]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2808) {
#line 2485
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%3.0hd] - l.%d\n, [%3.0hd]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%3.0hd] - l.%d\n, [%3.0hd]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2809) {
#line 2492
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%3.0hd] - l.%d\n, [%3.0hd]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%3.0hd] - l.%d\n, [%3.0hd]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2810) {
#line 2499
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%3.0hd] - l.%d\n, [%3.0hd]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%3.0hd] - l.%d\n, [%3.0hd]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2811) {
#line 2506
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%3.2hd] - l.%d\n, [%3.2hd]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%3.2hd] - l.%d\n, [%3.2hd]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2812) {
#line 2513
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%3.2hd] - l.%d\n, [%3.2hd]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%3.2hd] - l.%d\n, [%3.2hd]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2813) {
#line 2520
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%3.2hd] - l.%d\n, [%3.2hd]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%3.2hd] - l.%d\n, [%3.2hd]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2814) {
#line 2527
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%3.5hd] - l.%d\n, [%3.5hd]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%3.5hd] - l.%d\n, [%3.5hd]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2815) {
#line 2534
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%3.5hd] - l.%d\n, [%3.5hd]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%3.5hd] - l.%d\n, [%3.5hd]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2816) {
#line 2541
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%3.5hd] - l.%d\n, [%3.5hd]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%3.5hd] - l.%d\n, [%3.5hd]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2817) {
#line 2548
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%3.15hd] - l.%d\n, [%3.15hd]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%3.15hd] - l.%d\n, [%3.15hd]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2818) {
#line 2555
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%3.15hd] - l.%d\n, [%3.15hd]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%3.15hd] - l.%d\n, [%3.15hd]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2819) {
#line 2562
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%3.15hd] - l.%d\n, [%3.15hd]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%3.15hd] - l.%d\n, [%3.15hd]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2820) {
#line 2569
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%15hd] - l.%d\n, [%15hd]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%15hd] - l.%d\n, [%15hd]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2821) {
#line 2576
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%15hd] - l.%d\n, [%15hd]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%15hd] - l.%d\n, [%15hd]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2822) {
#line 2583
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%15hd] - l.%d\n, [%15hd]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%15hd] - l.%d\n, [%15hd]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2823) {
#line 2590
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%15.0hd] - l.%d\n, [%15.0hd]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%15.0hd] - l.%d\n, [%15.0hd]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2824) {
#line 2597
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%15.0hd] - l.%d\n, [%15.0hd]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%15.0hd] - l.%d\n, [%15.0hd]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2825) {
#line 2604
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%15.0hd] - l.%d\n, [%15.0hd]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%15.0hd] - l.%d\n, [%15.0hd]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2826) {
#line 2611
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%15.5hd] - l.%d\n, [%15.5hd]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%15.5hd] - l.%d\n, [%15.5hd]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2827) {
#line 2618
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%15.5hd] - l.%d\n, [%15.5hd]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%15.5hd] - l.%d\n, [%15.5hd]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2828) {
#line 2625
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%15.5hd] - l.%d\n, [%15.5hd]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%15.5hd] - l.%d\n, [%15.5hd]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2829) {
#line 2632
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%15.20hd] - l.%d\n, [%15.20hd]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%15.20hd] - l.%d\n, [%15.20hd]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2830) {
#line 2639
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%15.20hd] - l.%d\n, [%15.20hd]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%15.20hd] - l.%d\n, [%15.20hd]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2831) {
#line 2646
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%15.20hd] - l.%d\n, [%15.20hd]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%15.20hd] - l.%d\n, [%15.20hd]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2832) {
#line 2653
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-hd] - l.%d\n, [%-hd]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%-hd] - l.%d\n, [%-hd]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2833) {
#line 2660
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-hd] - l.%d\n, [%-hd]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%-hd] - l.%d\n, [%-hd]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2834) {
#line 2667
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-hd] - l.%d\n, [%-hd]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%-hd] - l.%d\n, [%-hd]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2835) {
#line 2674
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-3hd] - l.%d\n, [%-3hd]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%-3hd] - l.%d\n, [%-3hd]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2836) {
#line 2681
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-3hd] - l.%d\n, [%-3hd]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%-3hd] - l.%d\n, [%-3hd]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2837) {
#line 2688
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-3hd] - l.%d\n, [%-3hd]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%-3hd] - l.%d\n, [%-3hd]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2838) {
#line 2695
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-3.0hd] - l.%d\n, [%-3.0hd]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%-3.0hd] - l.%d\n, [%-3.0hd]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2839) {
#line 2702
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-3.0hd] - l.%d\n, [%-3.0hd]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%-3.0hd] - l.%d\n, [%-3.0hd]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2840) {
#line 2709
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-3.0hd] - l.%d\n, [%-3.0hd]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%-3.0hd] - l.%d\n, [%-3.0hd]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2841) {
#line 2716
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-3.2hd] - l.%d\n, [%-3.2hd]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%-3.2hd] - l.%d\n, [%-3.2hd]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2842) {
#line 2723
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-3.2hd] - l.%d\n, [%-3.2hd]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%-3.2hd] - l.%d\n, [%-3.2hd]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2843) {
#line 2730
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-3.2hd] - l.%d\n, [%-3.2hd]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%-3.2hd] - l.%d\n, [%-3.2hd]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2844) {
#line 2737
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-3.5hd] - l.%d\n, [%-3.5hd]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%-3.5hd] - l.%d\n, [%-3.5hd]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2845) {
#line 2744
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-3.5hd] - l.%d\n, [%-3.5hd]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%-3.5hd] - l.%d\n, [%-3.5hd]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2846) {
#line 2751
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-3.5hd] - l.%d\n, [%-3.5hd]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%-3.5hd] - l.%d\n, [%-3.5hd]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2847) {
#line 2758
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-3.15hd] - l.%d\n, [%-3.15hd]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%-3.15hd] - l.%d\n, [%-3.15hd]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2848) {
#line 2765
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-3.15hd] - l.%d\n, [%-3.15hd]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%-3.15hd] - l.%d\n, [%-3.15hd]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2849) {
#line 2772
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-3.15hd] - l.%d\n, [%-3.15hd]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%-3.15hd] - l.%d\n, [%-3.15hd]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2850) {
#line 2779
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%+hd] - l.%d\n, [%+hd]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%+hd] - l.%d\n, [%+hd]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2851) {
#line 2786
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%+hd] - l.%d\n, [%+hd]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%+hd] - l.%d\n, [%+hd]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2852) {
#line 2793
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%+hd] - l.%d\n, [%+hd]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%+hd] - l.%d\n, [%+hd]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2853) {
#line 2800
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%+3hd] - l.%d\n, [%+3hd]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%+3hd] - l.%d\n, [%+3hd]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2854) {
#line 2807
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%+3hd] - l.%d\n, [%+3hd]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%+3hd] - l.%d\n, [%+3hd]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2855) {
#line 2814
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%+3hd] - l.%d\n, [%+3hd]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%+3hd] - l.%d\n, [%+3hd]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2856) {
#line 2821
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%+3.0hd] - l.%d\n, [%+3.0hd]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%+3.0hd] - l.%d\n, [%+3.0hd]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2857) {
#line 2828
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%+3.0hd] - l.%d\n, [%+3.0hd]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%+3.0hd] - l.%d\n, [%+3.0hd]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2858) {
#line 2835
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%+3.0hd] - l.%d\n, [%+3.0hd]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%+3.0hd] - l.%d\n, [%+3.0hd]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2859) {
#line 2842
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%+3.5hd] - l.%d\n, [%+3.5hd]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%+3.5hd] - l.%d\n, [%+3.5hd]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2860) {
#line 2849
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%+3.5hd] - l.%d\n, [%+3.5hd]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%+3.5hd] - l.%d\n, [%+3.5hd]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2861) {
#line 2856
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%+3.5hd] - l.%d\n, [%+3.5hd]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%+3.5hd] - l.%d\n, [%+3.5hd]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2862) {
#line 2863
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%+3.15hd] - l.%d\n, [%+3.15hd]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%+3.15hd] - l.%d\n, [%+3.15hd]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2863) {
#line 2870
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%+3.15hd] - l.%d\n, [%+3.15hd]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%+3.15hd] - l.%d\n, [%+3.15hd]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2864) {
#line 2877
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%+3.15hd] - l.%d\n, [%+3.15hd]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%+3.15hd] - l.%d\n, [%+3.15hd]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2865) {
#line 2884
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%+15hd] - l.%d\n, [%+15hd]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%+15hd] - l.%d\n, [%+15hd]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2866) {
#line 2891
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%+15hd] - l.%d\n, [%+15hd]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%+15hd] - l.%d\n, [%+15hd]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2867) {
#line 2898
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%+15hd] - l.%d\n, [%+15hd]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%+15hd] - l.%d\n, [%+15hd]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2868) {
#line 2905
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%+15.0hd] - l.%d\n, [%+15.0hd]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%+15.0hd] - l.%d\n, [%+15.0hd]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2869) {
#line 2912
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%+15.0hd] - l.%d\n, [%+15.0hd]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%+15.0hd] - l.%d\n, [%+15.0hd]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2870) {
#line 2919
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%+15.0hd] - l.%d\n, [%+15.0hd]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%+15.0hd] - l.%d\n, [%+15.0hd]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2871) {
#line 2926
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%+15.5hd] - l.%d\n, [%+15.5hd]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%+15.5hd] - l.%d\n, [%+15.5hd]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2872) {
#line 2933
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%+15.5hd] - l.%d\n, [%+15.5hd]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%+15.5hd] - l.%d\n, [%+15.5hd]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2873) {
#line 2940
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%+15.5hd] - l.%d\n, [%+15.5hd]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%+15.5hd] - l.%d\n, [%+15.5hd]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2874) {
#line 2947
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%+15.20hd] - l.%d\n, [%+15.20hd]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%+15.20hd] - l.%d\n, [%+15.20hd]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2875) {
#line 2954
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%+15.20hd] - l.%d\n, [%+15.20hd]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%+15.20hd] - l.%d\n, [%+15.20hd]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2876) {
#line 2961
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%+15.20hd] - l.%d\n, [%+15.20hd]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%+15.20hd] - l.%d\n, [%+15.20hd]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2877) {
#line 2968
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%% hd] - l.%d\n, [% hd]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%% hd] - l.%d\n, [% hd]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2878) {
#line 2975
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%% hd] - l.%d\n, [% hd]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%% hd] - l.%d\n, [% hd]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2879) {
#line 2982
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%% hd] - l.%d\n, [% hd]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%% hd] - l.%d\n, [% hd]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2880) {
#line 2989
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%% 3hd] - l.%d\n, [% 3hd]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%% 3hd] - l.%d\n, [% 3hd]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2881) {
#line 2996
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%% 3hd] - l.%d\n, [% 3hd]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%% 3hd] - l.%d\n, [% 3hd]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2882) {
#line 3003
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%% 3hd] - l.%d\n, [% 3hd]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%% 3hd] - l.%d\n, [% 3hd]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2883) {
#line 3010
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%% 3.0hd] - l.%d\n, [% 3.0hd]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%% 3.0hd] - l.%d\n, [% 3.0hd]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2884) {
#line 3017
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%% 3.0hd] - l.%d\n, [% 3.0hd]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%% 3.0hd] - l.%d\n, [% 3.0hd]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2885) {
#line 3024
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%% 3.0hd] - l.%d\n, [% 3.0hd]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%% 3.0hd] - l.%d\n, [% 3.0hd]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2886) {
#line 3031
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%% 3.2hd] - l.%d\n, [% 3.2hd]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%% 3.2hd] - l.%d\n, [% 3.2hd]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2887) {
#line 3038
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%% 3.2hd] - l.%d\n, [% 3.2hd]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%% 3.2hd] - l.%d\n, [% 3.2hd]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2888) {
#line 3045
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%% 3.2hd] - l.%d\n, [% 3.2hd]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%% 3.2hd] - l.%d\n, [% 3.2hd]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2889) {
#line 3052
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%% 3.5hd] - l.%d\n, [% 3.5hd]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%% 3.5hd] - l.%d\n, [% 3.5hd]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2890) {
#line 3059
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%% 3.5hd] - l.%d\n, [% 3.5hd]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%% 3.5hd] - l.%d\n, [% 3.5hd]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2891) {
#line 3066
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%% 3.5hd] - l.%d\n, [% 3.5hd]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%% 3.5hd] - l.%d\n, [% 3.5hd]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2892) {
#line 3073
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%% 3.15hd] - l.%d\n, [% 3.15hd]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%% 3.15hd] - l.%d\n, [% 3.15hd]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2893) {
#line 3080
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%% 3.15hd] - l.%d\n, [% 3.15hd]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%% 3.15hd] - l.%d\n, [% 3.15hd]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2894) {
#line 3087
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%% 3.15hd] - l.%d\n, [% 3.15hd]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%% 3.15hd] - l.%d\n, [% 3.15hd]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2895) {
#line 3094
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%% 15hd] - l.%d\n, [% 15hd]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%% 15hd] - l.%d\n, [% 15hd]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2896) {
#line 3101
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%% 15hd] - l.%d\n, [% 15hd]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%% 15hd] - l.%d\n, [% 15hd]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2897) {
#line 3108
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%% 15hd] - l.%d\n, [% 15hd]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%% 15hd] - l.%d\n, [% 15hd]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2898) {
#line 3115
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%% 15.0hd] - l.%d\n, [% 15.0hd]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%% 15.0hd] - l.%d\n, [% 15.0hd]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2899) {
#line 3122
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%% 15.0hd] - l.%d\n, [% 15.0hd]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%% 15.0hd] - l.%d\n, [% 15.0hd]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2900) {
#line 3129
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%% 15.0hd] - l.%d\n, [% 15.0hd]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%% 15.0hd] - l.%d\n, [% 15.0hd]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2901) {
#line 3136
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%% 15.5hd] - l.%d\n, [% 15.5hd]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%% 15.5hd] - l.%d\n, [% 15.5hd]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2902) {
#line 3143
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%% 15.5hd] - l.%d\n, [% 15.5hd]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%% 15.5hd] - l.%d\n, [% 15.5hd]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2903) {
#line 3150
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%% 15.5hd] - l.%d\n, [% 15.5hd]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%% 15.5hd] - l.%d\n, [% 15.5hd]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2904) {
#line 3157
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%% 15.20hd] - l.%d\n, [% 15.20hd]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%% 15.20hd] - l.%d\n, [% 15.20hd]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2905) {
#line 3164
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%% 15.20hd] - l.%d\n, [% 15.20hd]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%% 15.20hd] - l.%d\n, [% 15.20hd]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2906) {
#line 3171
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%% 15.20hd] - l.%d\n, [% 15.20hd]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%% 15.20hd] - l.%d\n, [% 15.20hd]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3013) {
#line 3178
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-+d] - l.%d\n, [%-+d]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%-+d] - l.%d\n, [%-+d]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3014) {
#line 3185
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-+d] - l.%d\n, [%-+d]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%-+d] - l.%d\n, [%-+d]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3015) {
#line 3192
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-+d] - l.%d\n, [%-+d]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%-+d] - l.%d\n, [%-+d]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3016) {
#line 3199
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-+3d] - l.%d\n, [%-+3d]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%-+3d] - l.%d\n, [%-+3d]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3017) {
#line 3206
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-+3d] - l.%d\n, [%-+3d]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%-+3d] - l.%d\n, [%-+3d]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3018) {
#line 3213
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-+3d] - l.%d\n, [%-+3d]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%-+3d] - l.%d\n, [%-+3d]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3019) {
#line 3220
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-+3.0d] - l.%d\n, [%-+3.0d]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%-+3.0d] - l.%d\n, [%-+3.0d]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3020) {
#line 3227
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-+3.0d] - l.%d\n, [%-+3.0d]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%-+3.0d] - l.%d\n, [%-+3.0d]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3021) {
#line 3234
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-+3.0d] - l.%d\n, [%-+3.0d]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%-+3.0d] - l.%d\n, [%-+3.0d]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3021_2) {
#line 3241
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-+3.2d] - l.%d\n, [%-+3.2d]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%-+3.2d] - l.%d\n, [%-+3.2d]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3022) {
#line 3248
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-+3.2d] - l.%d\n, [%-+3.2d]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%-+3.2d] - l.%d\n, [%-+3.2d]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3023) {
#line 3255
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-+3.2d] - l.%d\n, [%-+3.2d]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%-+3.2d] - l.%d\n, [%-+3.2d]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3024) {
#line 3262
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-+3.5d] - l.%d\n, [%-+3.5d]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%-+3.5d] - l.%d\n, [%-+3.5d]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3025) {
#line 3269
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-+3.5d] - l.%d\n, [%-+3.5d]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%-+3.5d] - l.%d\n, [%-+3.5d]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3026) {
#line 3276
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-+3.5d] - l.%d\n, [%-+3.5d]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%-+3.5d] - l.%d\n, [%-+3.5d]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3027) {
#line 3283
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-+3.15d] - l.%d\n, [%-+3.15d]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%-+3.15d] - l.%d\n, [%-+3.15d]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3028) {
#line 3290
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-+3.15d] - l.%d\n, [%-+3.15d]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%-+3.15d] - l.%d\n, [%-+3.15d]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3029) {
#line 3297
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-+3.15d] - l.%d\n, [%-+3.15d]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%-+3.15d] - l.%d\n, [%-+3.15d]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3030) {
#line 3304
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-+15d] - l.%d\n, [%-+15d]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%-+15d] - l.%d\n, [%-+15d]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3031) {
#line 3311
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-+15d] - l.%d\n, [%-+15d]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%-+15d] - l.%d\n, [%-+15d]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3032) {
#line 3318
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-+15d] - l.%d\n, [%-+15d]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%-+15d] - l.%d\n, [%-+15d]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3033) {
#line 3325
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-+15.0d] - l.%d\n, [%-+15.0d]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%-+15.0d] - l.%d\n, [%-+15.0d]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3034) {
#line 3332
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-+15.0d] - l.%d\n, [%-+15.0d]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%-+15.0d] - l.%d\n, [%-+15.0d]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3035) {
#line 3339
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-+15.0d] - l.%d\n, [%-+15.0d]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%-+15.0d] - l.%d\n, [%-+15.0d]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3036) {
#line 3346
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-+15.5d] - l.%d\n, [%-+15.5d]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%-+15.5d] - l.%d\n, [%-+15.5d]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3037) {
#line 3353
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-+15.5d] - l.%d\n, [%-+15.5d]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%-+15.5d] - l.%d\n, [%-+15.5d]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3038) {
#line 3360
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-+15.5d] - l.%d\n, [%-+15.5d]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%-+15.5d] - l.%d\n, [%-+15.5d]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3039) {
#line 3367
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-+15.20d] - l.%d\n, [%-+15.20d]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%-+15.20d] - l.%d\n, [%-+15.20d]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3040) {
#line 3374
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-+15.20d] - l.%d\n, [%-+15.20d]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%-+15.20d] - l.%d\n, [%-+15.20d]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3041) {
#line 3381
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-+15.20d] - l.%d\n, [%-+15.20d]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%-+15.20d] - l.%d\n, [%-+15.20d]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3072) {
#line 3388
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%- d] - l.%d\n, [%- d]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%- d] - l.%d\n, [%- d]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3073) {
#line 3395
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%- d] - l.%d\n, [%- d]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%- d] - l.%d\n, [%- d]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3074) {
#line 3402
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%- d] - l.%d\n, [%- d]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%- d] - l.%d\n, [%- d]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3075) {
#line 3409
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%- 3d] - l.%d\n, [%- 3d]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%- 3d] - l.%d\n, [%- 3d]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3076) {
#line 3416
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%- 3d] - l.%d\n, [%- 3d]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%- 3d] - l.%d\n, [%- 3d]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3077) {
#line 3423
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%- 3d] - l.%d\n, [%- 3d]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%- 3d] - l.%d\n, [%- 3d]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3078) {
#line 3430
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%- 3.0d] - l.%d\n, [%- 3.0d]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%- 3.0d] - l.%d\n, [%- 3.0d]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3079) {
#line 3437
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%- 3.0d] - l.%d\n, [%- 3.0d]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%- 3.0d] - l.%d\n, [%- 3.0d]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3080) {
#line 3444
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%- 3.0d] - l.%d\n, [%- 3.0d]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%- 3.0d] - l.%d\n, [%- 3.0d]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3081) {
#line 3451
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%- 3.2d] - l.%d\n, [%- 3.2d]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%- 3.2d] - l.%d\n, [%- 3.2d]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3082) {
#line 3458
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%- 3.2d] - l.%d\n, [%- 3.2d]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%- 3.2d] - l.%d\n, [%- 3.2d]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3083) {
#line 3465
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%- 3.2d] - l.%d\n, [%- 3.2d]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%- 3.2d] - l.%d\n, [%- 3.2d]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3084) {
#line 3472
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%- 3.5d] - l.%d\n, [%- 3.5d]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%- 3.5d] - l.%d\n, [%- 3.5d]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3085) {
#line 3479
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%- 3.5d] - l.%d\n, [%- 3.5d]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%- 3.5d] - l.%d\n, [%- 3.5d]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3086) {
#line 3486
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%- 3.5d] - l.%d\n, [%- 3.5d]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%- 3.5d] - l.%d\n, [%- 3.5d]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3087) {
#line 3493
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%- 3.15d] - l.%d\n, [%- 3.15d]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%- 3.15d] - l.%d\n, [%- 3.15d]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3088) {
#line 3500
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%- 3.15d] - l.%d\n, [%- 3.15d]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%- 3.15d] - l.%d\n, [%- 3.15d]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3089) {
#line 3507
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%- 3.15d] - l.%d\n, [%- 3.15d]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%- 3.15d] - l.%d\n, [%- 3.15d]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3090) {
#line 3514
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%- 15d] - l.%d\n, [%- 15d]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%- 15d] - l.%d\n, [%- 15d]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3091) {
#line 3521
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%- 15d] - l.%d\n, [%- 15d]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%- 15d] - l.%d\n, [%- 15d]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3092) {
#line 3528
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%- 15d] - l.%d\n, [%- 15d]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%- 15d] - l.%d\n, [%- 15d]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3093) {
#line 3535
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%- 15.0d] - l.%d\n, [%- 15.0d]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%- 15.0d] - l.%d\n, [%- 15.0d]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3094) {
#line 3542
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%- 15.0d] - l.%d\n, [%- 15.0d]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%- 15.0d] - l.%d\n, [%- 15.0d]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3095) {
#line 3549
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%- 15.0d] - l.%d\n, [%- 15.0d]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%- 15.0d] - l.%d\n, [%- 15.0d]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3096) {
#line 3556
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%- 15.5d] - l.%d\n, [%- 15.5d]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%- 15.5d] - l.%d\n, [%- 15.5d]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3097) {
#line 3563
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%- 15.5d] - l.%d\n, [%- 15.5d]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%- 15.5d] - l.%d\n, [%- 15.5d]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3098) {
#line 3570
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%- 15.5d] - l.%d\n, [%- 15.5d]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%- 15.5d] - l.%d\n, [%- 15.5d]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3099) {
#line 3577
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%- 15.20d] - l.%d\n, [%- 15.20d]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%- 15.20d] - l.%d\n, [%- 15.20d]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3100) {
#line 3584
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%- 15.20d] - l.%d\n, [%- 15.20d]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%- 15.20d] - l.%d\n, [%- 15.20d]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3101) {
#line 3591
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%- 15.20d] - l.%d\n, [%- 15.20d]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%- 15.20d] - l.%d\n, [%- 15.20d]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3132) {
#line 3598
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-+hd] - l.%d\n, [%-+hd]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%-+hd] - l.%d\n, [%-+hd]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3133) {
#line 3605
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-+hd] - l.%d\n, [%-+hd]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%-+hd] - l.%d\n, [%-+hd]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3134) {
#line 3612
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-+hd] - l.%d\n, [%-+hd]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%-+hd] - l.%d\n, [%-+hd]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3135) {
#line 3619
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-+3hd] - l.%d\n, [%-+3hd]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%-+3hd] - l.%d\n, [%-+3hd]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3136) {
#line 3626
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-+3hd] - l.%d\n, [%-+3hd]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%-+3hd] - l.%d\n, [%-+3hd]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3137) {
#line 3633
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-+3hd] - l.%d\n, [%-+3hd]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%-+3hd] - l.%d\n, [%-+3hd]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3138) {
#line 3640
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-+3.0hd] - l.%d\n, [%-+3.0hd]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%-+3.0hd] - l.%d\n, [%-+3.0hd]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3139) {
#line 3647
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-+3.0hd] - l.%d\n, [%-+3.0hd]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%-+3.0hd] - l.%d\n, [%-+3.0hd]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3140) {
#line 3654
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-+3.0hd] - l.%d\n, [%-+3.0hd]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%-+3.0hd] - l.%d\n, [%-+3.0hd]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3141) {
#line 3661
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-+3.2hd] - l.%d\n, [%-+3.2hd]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%-+3.2hd] - l.%d\n, [%-+3.2hd]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3142) {
#line 3668
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-+3.2hd] - l.%d\n, [%-+3.2hd]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%-+3.2hd] - l.%d\n, [%-+3.2hd]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3143) {
#line 3675
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-+3.2hd] - l.%d\n, [%-+3.2hd]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%-+3.2hd] - l.%d\n, [%-+3.2hd]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3144) {
#line 3682
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-+3.5hd] - l.%d\n, [%-+3.5hd]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%-+3.5hd] - l.%d\n, [%-+3.5hd]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3145) {
#line 3689
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-+3.5hd] - l.%d\n, [%-+3.5hd]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%-+3.5hd] - l.%d\n, [%-+3.5hd]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3146) {
#line 3696
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-+3.5hd] - l.%d\n, [%-+3.5hd]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%-+3.5hd] - l.%d\n, [%-+3.5hd]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3147) {
#line 3703
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-+3.15hd] - l.%d\n, [%-+3.15hd]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%-+3.15hd] - l.%d\n, [%-+3.15hd]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3148) {
#line 3710
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-+3.15hd] - l.%d\n, [%-+3.15hd]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%-+3.15hd] - l.%d\n, [%-+3.15hd]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3149) {
#line 3717
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-+3.15hd] - l.%d\n, [%-+3.15hd]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%-+3.15hd] - l.%d\n, [%-+3.15hd]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3150) {
#line 3724
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-+15hd] - l.%d\n, [%-+15hd]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%-+15hd] - l.%d\n, [%-+15hd]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3151) {
#line 3731
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-+15hd] - l.%d\n, [%-+15hd]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%-+15hd] - l.%d\n, [%-+15hd]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3152) {
#line 3738
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-+15hd] - l.%d\n, [%-+15hd]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%-+15hd] - l.%d\n, [%-+15hd]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3153) {
#line 3745
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-+15.0hd] - l.%d\n, [%-+15.0hd]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%-+15.0hd] - l.%d\n, [%-+15.0hd]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3154) {
#line 3752
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-+15.0hd] - l.%d\n, [%-+15.0hd]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%-+15.0hd] - l.%d\n, [%-+15.0hd]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3155) {
#line 3759
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-+15.0hd] - l.%d\n, [%-+15.0hd]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%-+15.0hd] - l.%d\n, [%-+15.0hd]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3156) {
#line 3766
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-+15.5hd] - l.%d\n, [%-+15.5hd]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%-+15.5hd] - l.%d\n, [%-+15.5hd]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3157) {
#line 3773
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-+15.5hd] - l.%d\n, [%-+15.5hd]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%-+15.5hd] - l.%d\n, [%-+15.5hd]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3158) {
#line 3780
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-+15.5hd] - l.%d\n, [%-+15.5hd]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%-+15.5hd] - l.%d\n, [%-+15.5hd]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3159) {
#line 3787
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-+15.20hd] - l.%d\n, [%-+15.20hd]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%-+15.20hd] - l.%d\n, [%-+15.20hd]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3160) {
#line 3794
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-+15.20hd] - l.%d\n, [%-+15.20hd]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%-+15.20hd] - l.%d\n, [%-+15.20hd]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3161) {
#line 3801
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-+15.20hd] - l.%d\n, [%-+15.20hd]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%-+15.20hd] - l.%d\n, [%-+15.20hd]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3192) {
#line 3808
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%- hd] - l.%d\n, [%- hd]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%- hd] - l.%d\n, [%- hd]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3193) {
#line 3815
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%- hd] - l.%d\n, [%- hd]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%- hd] - l.%d\n, [%- hd]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3194) {
#line 3822
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%- hd] - l.%d\n, [%- hd]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%- hd] - l.%d\n, [%- hd]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3195) {
#line 3829
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%- 3hd] - l.%d\n, [%- 3hd]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%- 3hd] - l.%d\n, [%- 3hd]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3196) {
#line 3836
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%- 3hd] - l.%d\n, [%- 3hd]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%- 3hd] - l.%d\n, [%- 3hd]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3197) {
#line 3843
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%- 3hd] - l.%d\n, [%- 3hd]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%- 3hd] - l.%d\n, [%- 3hd]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3198) {
#line 3850
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%- 3.0hd] - l.%d\n, [%- 3.0hd]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%- 3.0hd] - l.%d\n, [%- 3.0hd]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3199) {
#line 3857
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%- 3.0hd] - l.%d\n, [%- 3.0hd]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%- 3.0hd] - l.%d\n, [%- 3.0hd]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3200) {
#line 3864
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%- 3.0hd] - l.%d\n, [%- 3.0hd]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%- 3.0hd] - l.%d\n, [%- 3.0hd]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3201) {
#line 3871
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%- 3.2hd] - l.%d\n, [%- 3.2hd]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%- 3.2hd] - l.%d\n, [%- 3.2hd]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3202) {
#line 3878
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%- 3.2hd] - l.%d\n, [%- 3.2hd]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%- 3.2hd] - l.%d\n, [%- 3.2hd]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3203) {
#line 3885
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%- 3.2hd] - l.%d\n, [%- 3.2hd]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%- 3.2hd] - l.%d\n, [%- 3.2hd]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3204) {
#line 3892
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%- 3.5hd] - l.%d\n, [%- 3.5hd]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%- 3.5hd] - l.%d\n, [%- 3.5hd]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3205) {
#line 3899
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%- 3.5hd] - l.%d\n, [%- 3.5hd]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%- 3.5hd] - l.%d\n, [%- 3.5hd]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3206) {
#line 3906
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%- 3.5hd] - l.%d\n, [%- 3.5hd]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%- 3.5hd] - l.%d\n, [%- 3.5hd]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3207) {
#line 3913
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%- 3.15hd] - l.%d\n, [%- 3.15hd]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%- 3.15hd] - l.%d\n, [%- 3.15hd]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3208) {
#line 3920
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%- 3.15hd] - l.%d\n, [%- 3.15hd]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%- 3.15hd] - l.%d\n, [%- 3.15hd]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3209) {
#line 3927
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%- 3.15hd] - l.%d\n, [%- 3.15hd]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%- 3.15hd] - l.%d\n, [%- 3.15hd]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3210) {
#line 3934
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%- 15hd] - l.%d\n, [%- 15hd]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%- 15hd] - l.%d\n, [%- 15hd]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3211) {
#line 3941
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%- 15hd] - l.%d\n, [%- 15hd]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%- 15hd] - l.%d\n, [%- 15hd]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3212) {
#line 3948
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%- 15hd] - l.%d\n, [%- 15hd]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%- 15hd] - l.%d\n, [%- 15hd]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3213) {
#line 3955
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%- 15.0hd] - l.%d\n, [%- 15.0hd]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%- 15.0hd] - l.%d\n, [%- 15.0hd]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3214) {
#line 3962
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%- 15.0hd] - l.%d\n, [%- 15.0hd]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%- 15.0hd] - l.%d\n, [%- 15.0hd]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3215) {
#line 3969
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%- 15.0hd] - l.%d\n, [%- 15.0hd]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%- 15.0hd] - l.%d\n, [%- 15.0hd]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3216) {
#line 3976
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%- 15.5hd] - l.%d\n, [%- 15.5hd]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%- 15.5hd] - l.%d\n, [%- 15.5hd]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3217) {
#line 3983
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%- 15.5hd] - l.%d\n, [%- 15.5hd]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%- 15.5hd] - l.%d\n, [%- 15.5hd]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3218) {
#line 3990
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%- 15.5hd] - l.%d\n, [%- 15.5hd]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%- 15.5hd] - l.%d\n, [%- 15.5hd]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3219) {
#line 3997
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%- 15.20hd] - l.%d\n, [%- 15.20hd]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%- 15.20hd] - l.%d\n, [%- 15.20hd]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3220) {
#line 4004
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%- 15.20hd] - l.%d\n, [%- 15.20hd]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%- 15.20hd] - l.%d\n, [%- 15.20hd]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3221) {
#line 4011
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%- 15.20hd] - l.%d\n, [%- 15.20hd]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%- 15.20hd] - l.%d\n, [%- 15.20hd]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3373) {
#line 4018
char str1[1024];
char str2[1024];
char *str = "Hello World";
s21_sprintf(str2, "- %d - [%%s] - l.%d\n, [%s]", -2, __LINE__, str);
sprintf(str1, "- %d - [%%s] - l.%d\n, [%s]", -2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3374) {
#line 4026
char str1[1024];
char str2[1024];
char *str = NULL;
s21_sprintf(str2, "- %d - [%%s] - l.%d\n, [%s]", -2, __LINE__, str);
sprintf(str1, "- %d - [%%s] - l.%d\n, [%s]", -2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3375) {
#line 4034
char str1[1024];
char str2[1024];
char *str = "Hello World";
s21_sprintf(str2, "- %d - [%%3s] - l.%d\n, [%3s]", -2, __LINE__, str);
sprintf(str1, "- %d - [%%3s] - l.%d\n, [%3s]", -2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3376) {
#line 4042
char str1[1024];
char str2[1024];
char *str = NULL;
s21_sprintf(str2, "- %d - [%%3s] - l.%d\n, [%3s]", -2, __LINE__, str);
sprintf(str1, "- %d - [%%3s] - l.%d\n, [%3s]", -2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3377) {
#line 4050
char str1[1024];
char str2[1024];
char *str = "Hello World";
s21_sprintf(str2, "- %d - [%%3.0s] - l.%d\n, [%3.0s]", -2, __LINE__, str);
sprintf(str1, "- %d - [%%3.0s] - l.%d\n, [%3.0s]", -2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3378) {
#line 4058
char str1[1024];
char str2[1024];
char *str = NULL;
s21_sprintf(str2, "- %d - [%%3.0s] - l.%d\n, [%3.0s]", -2, __LINE__, str);
sprintf(str1, "- %d - [%%3.0s] - l.%d\n, [%3.0s]", -2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3379) {
#line 4066
char str1[1024];
char str2[1024];
char *str = "Hello World";
s21_sprintf(str2, "- %d - [%%3.2s] - l.%d\n, [%3.2s]", -2, __LINE__, str);
sprintf(str1, "- %d - [%%3.2s] - l.%d\n, [%3.2s]", -2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3380) {
#line 4074
char str1[1024];
char str2[1024];
char *str = NULL;
s21_sprintf(str2, "- %d - [%%3.2s] - l.%d\n, [%3.2s]", -2, __LINE__, str);
sprintf(str1, "- %d - [%%3.2s] - l.%d\n, [%3.2s]", -2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3381) {
#line 4082
char str1[1024];
char str2[1024];
char *str = "Hello World";
s21_sprintf(str2, "- %d - [%%3.5s] - l.%d\n, [%3.5s]", -2, __LINE__, str);
sprintf(str1, "- %d - [%%3.5s] - l.%d\n, [%3.5s]", -2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3382) {
#line 4090
char str1[1024];
char str2[1024];
char *str = NULL;
s21_sprintf(str2, "- %d - [%%3.5s] - l.%d\n, [%3.5s]", -2, __LINE__, str);
sprintf(str1, "- %d - [%%3.5s] - l.%d\n, [%3.5s]", -2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3383) {
#line 4098
char str1[1024];
char str2[1024];
char *str = "Hello World";
s21_sprintf(str2, "- %d - [%%3.25s] - l.%d\n, [%3.25s]", -2, __LINE__, str);
sprintf(str1, "- %d - [%%3.25s] - l.%d\n, [%3.25s]", -2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3384) {
#line 4106
char str1[1024];
char str2[1024];
char *str = NULL;
s21_sprintf(str2, "- %d - [%%3.25s] - l.%d\n, [%3.25s]", -2, __LINE__, str);
sprintf(str1, "- %d - [%%3.25s] - l.%d\n, [%3.25s]", -2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3385) {
#line 4114
char str1[1024];
char str2[1024];
char *str = "Hello World";
s21_sprintf(str2, "- %d - [%%25s] - l.%d\n, [%25s]", -2, __LINE__, str);
sprintf(str1, "- %d - [%%25s] - l.%d\n, [%25s]", -2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3386) {
#line 4122
char str1[1024];
char str2[1024];
char *str = NULL;
s21_sprintf(str2, "- %d - [%%25s] - l.%d\n, [%25s]", -2, __LINE__, str);
sprintf(str1, "- %d - [%%25s] - l.%d\n, [%25s]", -2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3387) {
#line 4130
char str1[1024];
char str2[1024];
char *str = "Hello World";
s21_sprintf(str2, "- %d - [%%25.0s] - l.%d\n, [%25.0s]", -2, __LINE__, str);
sprintf(str1, "- %d - [%%25.0s] - l.%d\n, [%25.0s]", -2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3388) {
#line 4138
char str1[1024];
char str2[1024];
char *str = NULL;
s21_sprintf(str2, "- %d - [%%25.0s] - l.%d\n, [%25.0s]", -2, __LINE__, str);
sprintf(str1, "- %d - [%%25.0s] - l.%d\n, [%25.0s]", -2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3389) {
#line 4146
char str1[1024];
char str2[1024];
char *str = "Hello World";
s21_sprintf(str2, "- %d - [%%25.5s] - l.%d\n, [%25.5s]", -2, __LINE__, str);
sprintf(str1, "- %d - [%%25.5s] - l.%d\n, [%25.5s]", -2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3390) {
#line 4154
char str1[1024];
char str2[1024];
char *str = NULL;
s21_sprintf(str2, "- %d - [%%25.5s] - l.%d\n, [%25.5s]", -2, __LINE__, str);
sprintf(str1, "- %d - [%%25.5s] - l.%d\n, [%25.5s]", -2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3391) {
#line 4162
char str1[1024];
char str2[1024];
char *str = "Hello World";
s21_sprintf(str2, "- %d - [%%-s] - l.%d\n, [%-s]", -2, __LINE__, str);
sprintf(str1, "- %d - [%%-s] - l.%d\n, [%-s]", -2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3392) {
#line 4170
char str1[1024];
char str2[1024];
char *str = NULL;
s21_sprintf(str2, "- %d - [%%-s] - l.%d\n, [%-s]", -2, __LINE__, str);
sprintf(str1, "- %d - [%%-s] - l.%d\n, [%-s]", -2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3393) {
#line 4178
char str1[1024];
char str2[1024];
char *str = "Hello World";
s21_sprintf(str2, "- %d - [%%-3s] - l.%d\n, [%-3s]", -2, __LINE__, str);
sprintf(str1, "- %d - [%%-3s] - l.%d\n, [%-3s]", -2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3394) {
#line 4186
char str1[1024];
char str2[1024];
char *str = NULL;
s21_sprintf(str2, "- %d - [%%-3s] - l.%d\n, [%-3s]", -2, __LINE__, str);
sprintf(str1, "- %d - [%%-3s] - l.%d\n, [%-3s]", -2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3395) {
#line 4194
char str1[1024];
char str2[1024];
char *str = "Hello World";
s21_sprintf(str2, "- %d - [%%-3.0s] - l.%d\n, [%-3.0s]", -2, __LINE__, str);
sprintf(str1, "- %d - [%%-3.0s] - l.%d\n, [%-3.0s]", -2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3396) {
#line 4202
char str1[1024];
char str2[1024];
char *str = NULL;
s21_sprintf(str2, "- %d - [%%-3.0s] - l.%d\n, [%-3.0s]", -2, __LINE__, str);
sprintf(str1, "- %d - [%%-3.0s] - l.%d\n, [%-3.0s]", -2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3397) {
#line 4210
char str1[1024];
char str2[1024];
char *str = "Hello World";
s21_sprintf(str2, "- %d - [%%-3.2s] - l.%d\n, [%-3.2s]", -2, __LINE__, str);
sprintf(str1, "- %d - [%%-3.2s] - l.%d\n, [%-3.2s]", -2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3398) {
#line 4218
char str1[1024];
char str2[1024];
char *str = NULL;
s21_sprintf(str2, "- %d - [%%-3.2s] - l.%d\n, [%-3.2s]", -2, __LINE__, str);
sprintf(str1, "- %d - [%%-3.2s] - l.%d\n, [%-3.2s]", -2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3399) {
#line 4226
char str1[1024];
char str2[1024];
char *str = "Hello World";
s21_sprintf(str2, "- %d - [%%-3.5s] - l.%d\n, [%-3.5s]", -2, __LINE__, str);
sprintf(str1, "- %d - [%%-3.5s] - l.%d\n, [%-3.5s]", -2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3400) {
#line 4234
char str1[1024];
char str2[1024];
char *str = NULL;
s21_sprintf(str2, "- %d - [%%-3.5s] - l.%d\n, [%-3.5s]", -2, __LINE__, str);
sprintf(str1, "- %d - [%%-3.5s] - l.%d\n, [%-3.5s]", -2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3401) {
#line 4242
char str1[1024];
char str2[1024];
char *str = "Hello World";
s21_sprintf(str2, "- %d - [%%-3.25s] - l.%d\n, [%-3.25s]", -2, __LINE__, str);
sprintf(str1, "- %d - [%%-3.25s] - l.%d\n, [%-3.25s]", -2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3402) {
#line 4250
char str1[1024];
char str2[1024];
char *str = NULL;
s21_sprintf(str2, "- %d - [%%-3.25s] - l.%d\n, [%-3.25s]", -2, __LINE__, str);
sprintf(str1, "- %d - [%%-3.25s] - l.%d\n, [%-3.25s]", -2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3523) {
#line 4258
char str1[1024];
char str2[1024];
char *str = "Hello World";
s21_sprintf(str2, "- %d - [%%c] - l.%d\n, [%c]", -2, __LINE__, *str);
sprintf(str1, "- %d - [%%c] - l.%d\n, [%c]", -2, __LINE__ - 1, *str);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3525) {
#line 4266
char str1[1024];
char str2[1024];
char *str = "Hello World";
s21_sprintf(str2, "- %d - [%%3c] - l.%d\n, [%3c]", -2, __LINE__, *str);
sprintf(str1, "- %d - [%%3c] - l.%d\n, [%3c]", -2, __LINE__ - 1, *str);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3535) {
#line 4274
char str1[1024];
char str2[1024];
char *str = "Hello World";
s21_sprintf(str2, "- %d - [%%25c] - l.%d\n, [%25c]", -2, __LINE__, *str);
sprintf(str1, "- %d - [%%25c] - l.%d\n, [%25c]", -2, __LINE__ - 1, *str);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3554) {
#line 4282
char str1[1024];
char str2[1024];
char *str = "Hello World";
s21_sprintf(str2, "- %d - [%%-c] - l.%d\n, [%-c]", -2, __LINE__, *str);
sprintf(str1, "- %d - [%%-c] - l.%d\n, [%-c]", -2, __LINE__ - 1, *str);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_3555) {
#line 4290
char str1[1024];
char str2[1024];
char *str = "Hello World";
s21_sprintf(str2, "- %d - [%%-3c] - l.%d\n, [%-3c]", -2, __LINE__, *str);
sprintf(str1, "- %d - [%%-3c] - l.%d\n, [%-3c]", -2, __LINE__ - 1, *str);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2708_i) {
#line 4298
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%i] - l.%d\n, [%i]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%i] - l.%d\n, [%i]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2709_i) {
#line 4305
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%i] - l.%d\n, [%i]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%i] - l.%d\n, [%i]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2710_i) {
#line 4312
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%i] - l.%d\n, [%i]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%i] - l.%d\n, [%i]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2711i) {
#line 4319
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%3d] - l.%d\n, [%3d]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%3d] - l.%d\n, [%3d]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2712i) {
#line 4326
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%3i] - l.%d\n, [%3i]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%3i] - l.%d\n, [%3i]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2713i) {
#line 4333
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%3i] - l.%d\n, [%3i]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%3i] - l.%d\n, [%3i]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2714i) {
#line 4340
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%3.0i] - l.%d\n, [%3.0i]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%3.0i] - l.%d\n, [%3.0i]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2715i) {
#line 4347
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%3.0i] - l.%d\n, [%3.0i]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%3.0i] - l.%d\n, [%3.0i]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2716i) {
#line 4354
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%3.0d] - l.%d\n, [%3.0d]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%3.0d] - l.%d\n, [%3.0d]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2717i) {
#line 4361
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%3.2i] - l.%d\n, [%3.2i]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%3.2i] - l.%d\n, [%3.2i]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2718i) {
#line 4368
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%3.2i] - l.%d\n, [%3.2i]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%3.2i] - l.%d\n, [%3.2i]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2719i) {
#line 4375
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%3.2i] - l.%d\n, [%3.2i]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%3.2i] - l.%d\n, [%3.2i]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2720i) {
#line 4382
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%3.5i] - l.%d\n, [%3.5i]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%3.5i] - l.%d\n, [%3.5i]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2721i) {
#line 4389
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%3.5i] - l.%d\n, [%3.5i]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%3.5i] - l.%d\n, [%3.5i]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2722i) {
#line 4396
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%3.5i] - l.%d\n, [%3.5i]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%3.5i] - l.%d\n, [%3.5i]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2723i) {
#line 4403
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%3.15i] - l.%d\n, [%3.15i]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%3.15i] - l.%d\n, [%3.15i]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2724i) {
#line 4410
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%3.15i] - l.%d\n, [%3.15i]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%3.15i] - l.%d\n, [%3.15i]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2725i) {
#line 4417
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%3.15i] - l.%d\n, [%3.15i]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%3.15i] - l.%d\n, [%3.15i]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2726i) {
#line 4424
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%15i] - l.%d\n, [%15i]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%15i] - l.%d\n, [%15i]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2727i) {
#line 4431
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%15i] - l.%d\n, [%15i]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%15i] - l.%d\n, [%15i]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2728i) {
#line 4438
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%15i] - l.%d\n, [%15i]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%15i] - l.%d\n, [%15i]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2729i) {
#line 4445
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%15.0i] - l.%d\n, [%15.0i]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%15.0i] - l.%d\n, [%15.0i]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2730i) {
#line 4452
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%15.0i] - l.%d\n, [%15.0i]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%15.0i] - l.%d\n, [%15.0i]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2731i) {
#line 4459
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%15.0i] - l.%d\n, [%15.0i]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%15.0i] - l.%d\n, [%15.0i]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2732i) {
#line 4466
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%15.5i] - l.%d\n, [%15.5i]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%15.5i] - l.%d\n, [%15.5i]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2733i) {
#line 4473
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%15.5i] - l.%d\n, [%15.5i]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%15.5i] - l.%d\n, [%15.5i]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2734i) {
#line 4480
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%15.5i] - l.%d\n, [%15.5i]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%15.5i] - l.%d\n, [%15.5i]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2735i) {
#line 4487
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%15.20i] - l.%d\n, [%15.20i]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%15.20i] - l.%d\n, [%15.20i]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2736i) {
#line 4494
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%15.20i] - l.%d\n, [%15.20i]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%15.20i] - l.%d\n, [%15.20i]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2737i) {
#line 4501
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%15.20i] - l.%d\n, [%15.20i]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%15.20i] - l.%d\n, [%15.20i]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2738i) {
#line 4508
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-i] - l.%d\n, [%-i]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%-i] - l.%d\n, [%-i]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2739i) {
#line 4515
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-3i] - l.%d\n, [%-3i]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%-3i] - l.%d\n, [%-3i]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2740i) {
#line 4522
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-3.0i] - l.%d\n, [%-3.0i]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%-3.0i] - l.%d\n, [%-3.0i]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2741i) {
#line 4529
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-3.2i] - l.%d\n, [%-3.2i]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%-3.2i] - l.%d\n, [%-3.2i]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2742i) {
#line 4536
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-3.5i] - l.%d\n, [%-3.5i]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%-3.5i] - l.%d\n, [%-3.5i]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2743i) {
#line 4543
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-3.5i] - l.%d\n, [%-3.5i]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%-3.5i] - l.%d\n, [%-3.5i]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2744i) {
#line 4550
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-3.15i] - l.%d\n, [%-3.15i]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%-3.15i] - l.%d\n, [%-3.15i]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2745i) {
#line 4557
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-3.15i] - l.%d\n, [%-3.15i]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%-3.15i] - l.%d\n, [%-3.15i]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2746i) {
#line 4564
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-3.15i] - l.%d\n, [%-3.15i]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%-3.15i] - l.%d\n, [%-3.15i]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2747i) {
#line 4571
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%+i] - l.%d\n, [%+i]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%+i] - l.%d\n, [%+i]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2748i) {
#line 4578
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%+i] - l.%d\n, [%+i]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%+i] - l.%d\n, [%+i]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_2749i) {
#line 4585
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%+i] - l.%d\n, [%+i]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%+i] - l.%d\n, [%+i]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2750_i) {
#line 4592
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%+3i] - l.%i\n, [%+3i]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%+3i] - l.%i\n, [%+3i]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2751_i) {
#line 4599
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%+3i] - l.%i\n, [%+3i]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%+3i] - l.%i\n, [%+3i]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2752_i) {
#line 4606
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%+3i] - l.%i\n, [%+3i]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%+3i] - l.%i\n, [%+3i]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2753_i) {
#line 4613
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%+3i] - l.%i\n, [%+3i]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%+3i] - l.%i\n, [%+3i]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2754_i) {
#line 4620
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%+3i] - l.%i\n, [%+3i]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%+3i] - l.%i\n, [%+3i]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2755_i) {
#line 4627
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%+3i] - l.%i\n, [%+3i]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%+3i] - l.%i\n, [%+3i]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2756_i) {
#line 4634
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%+3.5i] - l.%i\n, [%+3.5i]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%+3.5i] - l.%i\n, [%+3.5i]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2757_i) {
#line 4641
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%+3.5i] - l.%i\n, [%+3.5i]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%+3.5i] - l.%i\n, [%+3.5i]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2758_i) {
#line 4648
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%+3.5i] - l.%i\n, [%+3.5i]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%+3.5i] - l.%i\n, [%+3.5i]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2759_i) {
#line 4655
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%+3.15i] - l.%i\n, [%+3.15i]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%+3.15i] - l.%i\n, [%+3.15i]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2760_i) {
#line 4662
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%+3.15i] - l.%i\n, [%+3.15i]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%+3.15i] - l.%i\n, [%+3.15i]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2761_i) {
#line 4669
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%+3.15i] - l.%i\n, [%+3.15i]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%+3.15i] - l.%i\n, [%+3.15i]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2762_i) {
#line 4676
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%+15i] - l.%i\n, [%+15i]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%+15i] - l.%i\n, [%+15i]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2763_i) {
#line 4683
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%+15i] - l.%i\n, [%+15i]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%+15i] - l.%i\n, [%+15i]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2764_i) {
#line 4690
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%+15i] - l.%i\n, [%+15i]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%+15i] - l.%i\n, [%+15i]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2765_i) {
#line 4697
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%+15.0i] - l.%i\n, [%+15.0i]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%+15.0i] - l.%i\n, [%+15.0i]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2766_i) {
#line 4704
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%+15.0i] - l.%i\n, [%+15.0i]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%+15.0i] - l.%i\n, [%+15.0i]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2767_i) {
#line 4711
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%+15.0i] - l.%i\n, [%+15.0i]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%+15.0i] - l.%i\n, [%+15.0i]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2768_i) {
#line 4718
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%+15.5i] - l.%i\n, [%+15.5i]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%+15.5i] - l.%i\n, [%+15.5i]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2769_i) {
#line 4725
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%+15.5i] - l.%i\n, [%+15.5i]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%+15.5i] - l.%i\n, [%+15.5i]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2770_i) {
#line 4732
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%+15.5i] - l.%i\n, [%+15.5i]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%+15.5i] - l.%i\n, [%+15.5i]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2771_i) {
#line 4739
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%+15.20i] - l.%i\n, [%+15.20i]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%+15.20i] - l.%i\n, [%+15.20i]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2772_i) {
#line 4746
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%+15.20i] - l.%i\n, [%+15.20i]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%+15.20i] - l.%i\n, [%+15.20i]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2773_i) {
#line 4753
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%+15.20i] - l.%i\n, [%+15.20i]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%+15.20i] - l.%i\n, [%+15.20i]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2774_i) {
#line 4760
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%% i] - l.%i\n, [% i]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%% i] - l.%i\n, [% i]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2775_i) {
#line 4767
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%% i] - l.%i\n, [% i]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%% i] - l.%i\n, [% i]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2776_i) {
#line 4774
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%% i] - l.%i\n, [% i]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%% i] - l.%i\n, [% i]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2777_i) {
#line 4781
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%% 3i] - l.%i\n, [% 3i]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%% 3i] - l.%i\n, [% 3i]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2778_i) {
#line 4788
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%% 3i] - l.%i\n, [% 3i]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%% 3i] - l.%i\n, [% 3i]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2779_i) {
#line 4795
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%% 3i] - l.%i\n, [% 3i]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%% 3i] - l.%i\n, [% 3i]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2780_i) {
#line 4802
char str1[1024];
char str2[1024];
s21_sprintf(str2, " - %i - [%% 3.0i] - l.%i\n, [% 3.0i]", 0, -2, __LINE__);
sprintf(str1, " - %i - [%% 3.0i] - l.%i\n, [% 3.0i]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2781_i) {
#line 4809
char str1[1024];
char str2[1024];
s21_sprintf(str2, " - %i - [%% 3.0i] - l.%i\n, [% 3.0i]", INT_MIN, -2, __LINE__);
sprintf(str1, " - %i - [%% 3.0i] - l.%i\n, [% 3.0i]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2782_i) {
#line 4816
char str1[1024];
char str2[1024];
s21_sprintf(str2, " - %i - [%% 3.0i] - l.%i\n, [% 3.0i]", INT_MAX, -2, __LINE__);
sprintf(str1, " - %i - [%% 3.0i] - l.%i\n, [% 3.0i]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2783_i) {
#line 4823
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%% 3.2i] - l.%i\n, [% 3.2i]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%% 3.2i] - l.%i\n, [% 3.2i]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2784_i) {
#line 4830
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%% 3.2i] - l.%i\n, [% 3.2i]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%% 3.2i] - l.%i\n, [% 3.2i]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2785_i) {
#line 4837
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%% 3.2i] - l.%i\n, [% 3.2i]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%% 3.2i] - l.%i\n, [% 3.2i]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2786_i) {
#line 4844
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%% 3.5i] - l.%i\n, [% 3.5i]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%% 3.5i] - l.%i\n, [% 3.5i]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2786_2_i) {
#line 4851
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%% 3.5i] - l.%i\n, [% 3.5i]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%% 3.5i] - l.%i\n, [% 3.5i]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2787_i) {
#line 4858
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%% 3.5i] - l.%i\n, [% 3.5i]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%% 3.5i] - l.%i\n, [% 3.5i]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2788_i) {
#line 4865
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%% 3.15i] - l.%i\n, [% 3.15i]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%% 3.15i] - l.%i\n, [% 3.15i]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2789_i) {
#line 4872
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%% 3.15i] - l.%i\n, [% 3.15i]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%% 3.15i] - l.%i\n, [% 3.15i]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2790_i) {
#line 4879
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%% 3.15i] - l.%i\n, [% 3.15i]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%% 3.15i] - l.%i\n, [% 3.15i]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2791_i) {
#line 4886
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%% 15i] - l.%i\n, [% 15i]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%% 15i] - l.%i\n, [% 15i]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2792_i) {
#line 4893
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%% 15i] - l.%i\n, [% 15i]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%% 15i] - l.%i\n, [% 15i]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2793_i) {
#line 4900
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%% 15i] - l.%i\n, [% 15i]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%% 15i] - l.%i\n, [% 15i]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2794_i) {
#line 4907
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%% 15.0i] - l.%i\n, [% 15.0i]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%% 15.0i] - l.%i\n, [% 15.0i]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2795_i) {
#line 4914
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%% 15.0i] - l.%i\n, [% 15.0i]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%% 15.0i] - l.%i\n, [% 15.0i]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2796_i) {
#line 4921
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%% 15.0i] - l.%i\n, [% 15.0i]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%% 15.0i] - l.%i\n, [% 15.0i]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2800_i) {
#line 4928
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%% 15.20i] - l.%i\n, [% 15.20i]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%% 15.20i] - l.%i\n, [% 15.20i]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2802_i) {
#line 4935
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%% 15.20i] - l.%i\n, [% 15.20i]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%% 15.20i] - l.%i\n, [% 15.20i]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2803_i) {
#line 4942
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%hi] - l.%i\n, [%hi]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%hi] - l.%i\n, [%hi]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2804_i) {
#line 4949
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%hi] - l.%i\n, [%hi]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%hi] - l.%i\n, [%hi]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2805_i) {
#line 4956
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%hi] - l.%i\n, [%hi]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%hi] - l.%i\n, [%hi]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2806_i) {
#line 4963
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%3hi] - l.%i\n, [%3hi]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%3hi] - l.%i\n, [%3hi]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2807_i) {
#line 4970
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%3hi] - l.%i\n, [%3hi]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%3hi] - l.%i\n, [%3hi]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2807_2_i) {
#line 4977
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%3hi] - l.%i\n, [%3hi]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%3hi] - l.%i\n, [%3hi]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2808_i) {
#line 4984
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%3.0hi] - l.%i\n, [%3.0hi]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%3.0hi] - l.%i\n, [%3.0hi]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2809_i) {
#line 4991
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%3.0hi] - l.%i\n, [%3.0hi]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%3.0hi] - l.%i\n, [%3.0hi]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2810_i) {
#line 4998
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%3.0hi] - l.%i\n, [%3.0hi]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%3.0hi] - l.%i\n, [%3.0hi]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2811_i) {
#line 5005
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%3.2hi] - l.%i\n, [%3.2hi]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%3.2hi] - l.%i\n, [%3.2hi]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2812_i) {
#line 5012
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%3.2hi] - l.%i\n, [%3.2hi]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%3.2hi] - l.%i\n, [%3.2hi]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2813_i) {
#line 5019
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%3.2hi] - l.%i\n, [%3.2hi]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%3.2hi] - l.%i\n, [%3.2hi]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2814_i) {
#line 5026
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%3.5hi] - l.%i\n, [%3.5hi]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%3.5hi] - l.%i\n, [%3.5hi]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2815_i) {
#line 5033
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%3.5hi] - l.%i\n, [%3.5hi]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%3.5hi] - l.%i\n, [%3.5hi]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2816_i) {
#line 5040
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%3.5hi] - l.%i\n, [%3.5hi]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%3.5hi] - l.%i\n, [%3.5hi]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2817_i) {
#line 5047
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%3.15hi] - l.%i\n, [%3.15hi]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%3.15hi] - l.%i\n, [%3.15hi]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2818_i) {
#line 5054
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%3.15hi] - l.%i\n, [%3.15hi]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%3.15hi] - l.%i\n, [%3.15hi]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2819_i) {
#line 5061
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%3.15hi] - l.%i\n, [%3.15hi]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%3.15hi] - l.%i\n, [%3.15hi]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2820_i) {
#line 5068
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%15hi] - l.%i\n, [%15hi]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%15hi] - l.%i\n, [%15hi]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2821_i) {
#line 5075
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%15hi] - l.%i\n, [%15hi]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%15hi] - l.%i\n, [%15hi]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2822_i) {
#line 5082
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%15hi] - l.%i\n, [%15hi]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%15hi] - l.%i\n, [%15hi]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2823_i) {
#line 5089
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%15.0hi] - l.%i\n, [%15.0hi]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%15.0hi] - l.%i\n, [%15.0hi]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2824_i) {
#line 5096
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%15.0hi] - l.%i\n, [%15.0hi]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%15.0hi] - l.%i\n, [%15.0hi]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2825_i) {
#line 5103
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%15.0hi] - l.%i\n, [%15.0hi]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%15.0hi] - l.%i\n, [%15.0hi]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2826_i) {
#line 5110
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%15.5hi] - l.%i\n, [%15.5hi]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%15.5hi] - l.%i\n, [%15.5hi]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2827_i) {
#line 5117
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%15.5hi] - l.%i\n, [%15.5hi]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%15.5hi] - l.%i\n, [%15.5hi]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2828_i) {
#line 5124
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%15.5hi] - l.%i\n, [%15.5hi]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%15.5hi] - l.%i\n, [%15.5hi]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2829_i) {
#line 5131
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%15.20hi] - l.%i\n, [%15.20hi]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%15.20hi] - l.%i\n, [%15.20hi]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2830_i) {
#line 5138
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%15.20hi] - l.%i\n, [%15.20hi]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%15.20hi] - l.%i\n, [%15.20hi]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2831_i) {
#line 5145
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%15.20hi] - l.%i\n, [%15.20hi]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%15.20hi] - l.%i\n, [%15.20hi]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2832_i) {
#line 5152
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-hi] - l.%i\n, [%-hi]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%-hi] - l.%i\n, [%-hi]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2833_i) {
#line 5159
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-hi] - l.%i\n, [%-hi]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%-hi] - l.%i\n, [%-hi]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2834_i) {
#line 5166
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-hi] - l.%i\n, [%-hi]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%-hi] - l.%i\n, [%-hi]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2835_i) {
#line 5173
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-3hi] - l.%i\n, [%-3hi]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%-3hi] - l.%i\n, [%-3hi]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2836_i) {
#line 5180
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-3hi] - l.%i\n, [%-3hi]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%-3hi] - l.%i\n, [%-3hi]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2837_i) {
#line 5187
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-3hi] - l.%i\n, [%-3hi]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%-3hi] - l.%i\n, [%-3hi]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2838_i) {
#line 5194
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-3.0hi] - l.%i\n, [%-3.0hi]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%-3.0hi] - l.%i\n, [%-3.0hi]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2839_i) {
#line 5201
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-3.0hi] - l.%i\n, [%-3.0hi]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%-3.0hi] - l.%i\n, [%-3.0hi]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2840_i) {
#line 5208
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-3.0hi] - l.%i\n, [%-3.0hi]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%-3.0hi] - l.%i\n, [%-3.0hi]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2841_i) {
#line 5215
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-3.2hi] - l.%i\n, [%-3.2hi]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%-3.2hi] - l.%i\n, [%-3.2hi]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2842_i) {
#line 5222
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-3.2hi] - l.%i\n, [%-3.2hi]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%-3.2hi] - l.%i\n, [%-3.2hi]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2843_i) {
#line 5229
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-3.2hi] - l.%i\n, [%-3.2hi]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%-3.2hi] - l.%i\n, [%-3.2hi]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2844_i) {
#line 5236
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-3.5hi] - l.%i\n, [%-3.5hi]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%-3.5hi] - l.%i\n, [%-3.5hi]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2845_i) {
#line 5243
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-3.5hi] - l.%i\n, [%-3.5hi]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%-3.5hi] - l.%i\n, [%-3.5hi]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2846_i) {
#line 5250
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-3.5hi] - l.%i\n, [%-3.5hi]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%-3.5hi] - l.%i\n, [%-3.5hi]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2847_i) {
#line 5257
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-3.15hi] - l.%i\n, [%-3.15hi]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%-3.15hi] - l.%i\n, [%-3.15hi]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2848_i) {
#line 5264
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-3.15hi] - l.%i\n, [%-3.15hi]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%-3.15hi] - l.%i\n, [%-3.15hi]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2849_i) {
#line 5271
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-3.15hi] - l.%i\n, [%-3.15hi]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%-3.15hi] - l.%i\n, [%-3.15hi]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2850_i) {
#line 5278
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%+hi] - l.%i\n, [%+hi]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%+hi] - l.%i\n, [%+hi]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2851_i) {
#line 5285
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%+hi] - l.%i\n, [%+hi]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%+hi] - l.%i\n, [%+hi]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2852_i) {
#line 5292
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%+hi] - l.%i\n, [%+hi]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%+hi] - l.%i\n, [%+hi]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2853_i) {
#line 5299
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%+3hi] - l.%i\n, [%+3hi]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%+3hi] - l.%i\n, [%+3hi]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2854_i) {
#line 5306
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%+3hi] - l.%i\n, [%+3hi]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%+3hi] - l.%i\n, [%+3hi]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2855_i) {
#line 5313
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%+3hi] - l.%i\n, [%+3hi]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%+3hi] - l.%i\n, [%+3hi]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2856_i) {
#line 5320
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%+3.0hi] - l.%i\n, [%+3.0hi]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%+3.0hi] - l.%i\n, [%+3.0hi]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2857_i) {
#line 5327
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%+3.0hi] - l.%i\n, [%+3.0hi]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%+3.0hi] - l.%i\n, [%+3.0hi]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2858_i) {
#line 5334
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%+3.0hi] - l.%i\n, [%+3.0hi]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%+3.0hi] - l.%i\n, [%+3.0hi]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2859_i) {
#line 5341
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%+3.5hi] - l.%i\n, [%+3.5hi]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%+3.5hi] - l.%i\n, [%+3.5hi]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2860_i) {
#line 5348
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%+3.5hi] - l.%i\n, [%+3.5hi]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%+3.5hi] - l.%i\n, [%+3.5hi]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2861_i) {
#line 5355
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%+3.5hi] - l.%i\n, [%+3.5hi]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%+3.5hi] - l.%i\n, [%+3.5hi]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2862_i) {
#line 5362
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%+3.15hi] - l.%i\n, [%+3.15hi]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%+3.15hi] - l.%i\n, [%+3.15hi]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2863_i) {
#line 5369
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%+3.15hi] - l.%i\n, [%+3.15hi]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%+3.15hi] - l.%i\n, [%+3.15hi]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2864_i) {
#line 5376
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%+3.15hi] - l.%i\n, [%+3.15hi]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%+3.15hi] - l.%i\n, [%+3.15hi]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2865_i) {
#line 5383
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%+15hi] - l.%i\n, [%+15hi]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%+15hi] - l.%i\n, [%+15hi]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2866_i) {
#line 5390
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%+15hi] - l.%i\n, [%+15hi]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%+15hi] - l.%i\n, [%+15hi]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2867_i) {
#line 5397
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%+15hi] - l.%i\n, [%+15hi]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%+15hi] - l.%i\n, [%+15hi]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2868_i) {
#line 5404
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%+15.0hi] - l.%i\n, [%+15.0hi]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%+15.0hi] - l.%i\n, [%+15.0hi]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2869_i) {
#line 5411
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%+15.0hi] - l.%i\n, [%+15.0hi]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%+15.0hi] - l.%i\n, [%+15.0hi]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2870_i) {
#line 5418
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%+15.0hi] - l.%i\n, [%+15.0hi]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%+15.0hi] - l.%i\n, [%+15.0hi]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2871_i) {
#line 5425
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%+15.5hi] - l.%i\n, [%+15.5hi]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%+15.5hi] - l.%i\n, [%+15.5hi]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2872_i) {
#line 5432
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%+15.5hi] - l.%i\n, [%+15.5hi]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%+15.5hi] - l.%i\n, [%+15.5hi]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2873_i) {
#line 5439
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%+15.5hi] - l.%i\n, [%+15.5hi]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%+15.5hi] - l.%i\n, [%+15.5hi]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2874_i) {
#line 5446
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%+15.20hi] - l.%i\n, [%+15.20hi]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%+15.20hi] - l.%i\n, [%+15.20hi]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2875_i) {
#line 5453
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%+15.20hi] - l.%i\n, [%+15.20hi]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%+15.20hi] - l.%i\n, [%+15.20hi]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2876_i) {
#line 5460
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%+15.20hi] - l.%i\n, [%+15.20hi]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%+15.20hi] - l.%i\n, [%+15.20hi]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2877_i) {
#line 5467
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%% hi] - l.%i\n, [% hi]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%% hi] - l.%i\n, [% hi]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2878_i) {
#line 5474
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%% hi] - l.%i\n, [% hi]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%% hi] - l.%i\n, [% hi]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2879_i) {
#line 5481
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%% hi] - l.%i\n, [% hi]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%% hi] - l.%i\n, [% hi]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2880_i) {
#line 5488
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%% 3hi] - l.%i\n, [% 3hi]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%% 3hi] - l.%i\n, [% 3hi]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2881_i) {
#line 5495
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%% 3hi] - l.%i\n, [% 3hi]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%% 3hi] - l.%i\n, [% 3hi]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2882_i) {
#line 5502
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%% 3hi] - l.%i\n, [% 3hi]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%% 3hi] - l.%i\n, [% 3hi]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2883_i) {
#line 5509
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%% 3.0hi] - l.%i\n, [% 3.0hi]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%% 3.0hi] - l.%i\n, [% 3.0hi]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2884_i) {
#line 5516
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%% 3.0hi] - l.%i\n, [% 3.0hi]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%% 3.0hi] - l.%i\n, [% 3.0hi]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2885_i) {
#line 5523
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%% 3.0hi] - l.%i\n, [% 3.0hi]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%% 3.0hi] - l.%i\n, [% 3.0hi]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2886_i) {
#line 5530
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%% 3.2hi] - l.%i\n, [% 3.2hi]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%% 3.2hi] - l.%i\n, [% 3.2hi]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2887_i) {
#line 5537
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%% 3.2hi] - l.%i\n, [% 3.2hi]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%% 3.2hi] - l.%i\n, [% 3.2hi]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2888_i) {
#line 5544
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%% 3.2hi] - l.%i\n, [% 3.2hi]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%% 3.2hi] - l.%i\n, [% 3.2hi]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2889_i) {
#line 5551
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%% 3.5hi] - l.%i\n, [% 3.5hi]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%% 3.5hi] - l.%i\n, [% 3.5hi]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2890_i) {
#line 5558
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%% 3.5hi] - l.%i\n, [% 3.5hi]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%% 3.5hi] - l.%i\n, [% 3.5hi]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2891_i) {
#line 5565
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%% 3.5hi] - l.%i\n, [% 3.5hi]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%% 3.5hi] - l.%i\n, [% 3.5hi]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2892_i) {
#line 5572
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%% 3.15hi] - l.%i\n, [% 3.15hi]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%% 3.15hi] - l.%i\n, [% 3.15hi]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2893_i) {
#line 5579
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%% 3.15hi] - l.%i\n, [% 3.15hi]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%% 3.15hi] - l.%i\n, [% 3.15hi]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2894_i) {
#line 5586
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%% 3.15hi] - l.%i\n, [% 3.15hi]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%% 3.15hi] - l.%i\n, [% 3.15hi]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2895_i) {
#line 5593
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%% 15hi] - l.%i\n, [% 15hi]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%% 15hi] - l.%i\n, [% 15hi]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2896_i) {
#line 5600
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%% 15hi] - l.%i\n, [% 15hi]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%% 15hi] - l.%i\n, [% 15hi]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2897_i) {
#line 5607
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%% 15hi] - l.%i\n, [% 15hi]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%% 15hi] - l.%i\n, [% 15hi]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2898_i) {
#line 5614
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%% 15.0hi] - l.%i\n, [% 15.0hi]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%% 15.0hi] - l.%i\n, [% 15.0hi]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2899_i) {
#line 5621
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%% 15.0hi] - l.%i\n, [% 15.0hi]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%% 15.0hi] - l.%i\n, [% 15.0hi]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2900_i) {
#line 5628
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%% 15.0hi] - l.%i\n, [% 15.0hi]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%% 15.0hi] - l.%i\n, [% 15.0hi]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2904_i) {
#line 5635
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%% 15.20hi] - l.%i\n, [% 15.20hi]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%% 15.20hi] - l.%i\n, [% 15.20hi]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2905_i) {
#line 5642
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%% 15.20hi] - l.%i\n, [% 15.20hi]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%% 15.20hi] - l.%i\n, [% 15.20hi]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_2906_i) {
#line 5649
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%% 15.20hi] - l.%i\n, [% 15.20hi]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%% 15.20hi] - l.%i\n, [% 15.20hi]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3013) {
#line 5656
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-+i] - l.%i\n, [%-+i]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%-+i] - l.%i\n, [%-+i]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3014) {
#line 5663
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-+i] - l.%i\n, [%-+i]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%-+i] - l.%i\n, [%-+i]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3015) {
#line 5670
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-+i] - l.%i\n, [%-+i]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%-+i] - l.%i\n, [%-+i]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3016) {
#line 5677
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-+3i] - l.%i\n, [%-+3i]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%-+3i] - l.%i\n, [%-+3i]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3017) {
#line 5684
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-+3i] - l.%i\n, [%-+3i]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%-+3i] - l.%i\n, [%-+3i]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3018) {
#line 5691
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-+3i] - l.%i\n, [%-+3i]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%-+3i] - l.%i\n, [%-+3i]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3019) {
#line 5698
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-+3.0i] - l.%i\n, [%-+3.0i]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%-+3.0i] - l.%i\n, [%-+3.0i]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3020) {
#line 5705
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-+3.0i] - l.%i\n, [%-+3.0i]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%-+3.0i] - l.%i\n, [%-+3.0i]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3021) {
#line 5712
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-+3.0i] - l.%i\n, [%-+3.0i]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%-+3.0i] - l.%i\n, [%-+3.0i]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3021_2) {
#line 5719
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-+3.2i] - l.%i\n, [%-+3.2i]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%-+3.2i] - l.%i\n, [%-+3.2i]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3022) {
#line 5726
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-+3.2i] - l.%i\n, [%-+3.2i]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%-+3.2i] - l.%i\n, [%-+3.2i]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3023) {
#line 5733
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-+3.2i] - l.%i\n, [%-+3.2i]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%-+3.2i] - l.%i\n, [%-+3.2i]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3024) {
#line 5740
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-+3.5i] - l.%i\n, [%-+3.5i]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%-+3.5i] - l.%i\n, [%-+3.5i]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3025) {
#line 5747
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-+3.5i] - l.%i\n, [%-+3.5i]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%-+3.5i] - l.%i\n, [%-+3.5i]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3026) {
#line 5754
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-+3.5i] - l.%i\n, [%-+3.5i]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%-+3.5i] - l.%i\n, [%-+3.5i]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3027) {
#line 5761
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-+3.15i] - l.%i\n, [%-+3.15i]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%-+3.15i] - l.%i\n, [%-+3.15i]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3028) {
#line 5768
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-+3.15i] - l.%i\n, [%-+3.15i]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%-+3.15i] - l.%i\n, [%-+3.15i]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3029) {
#line 5775
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-+3.15i] - l.%i\n, [%-+3.15i]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%-+3.15i] - l.%i\n, [%-+3.15i]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3030) {
#line 5782
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-+15i] - l.%i\n, [%-+15i]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%-+15i] - l.%i\n, [%-+15i]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3031) {
#line 5789
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-+15i] - l.%i\n, [%-+15i]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%-+15i] - l.%i\n, [%-+15i]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3032) {
#line 5796
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-+15i] - l.%i\n, [%-+15i]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%-+15i] - l.%i\n, [%-+15i]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3033) {
#line 5803
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-+15.0i] - l.%i\n, [%-+15.0i]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%-+15.0i] - l.%i\n, [%-+15.0i]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3034) {
#line 5810
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-+15.0i] - l.%i\n, [%-+15.0i]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%-+15.0i] - l.%i\n, [%-+15.0i]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3035) {
#line 5817
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-+15.0i] - l.%i\n, [%-+15.0i]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%-+15.0i] - l.%i\n, [%-+15.0i]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3036) {
#line 5824
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-+15.5i] - l.%i\n, [%-+15.5i]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%-+15.5i] - l.%i\n, [%-+15.5i]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3037) {
#line 5831
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-+15.5i] - l.%i\n, [%-+15.5i]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%-+15.5i] - l.%i\n, [%-+15.5i]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3038) {
#line 5838
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-+15.5i] - l.%i\n, [%-+15.5i]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%-+15.5i] - l.%i\n, [%-+15.5i]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3039) {
#line 5845
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-+15.20i] - l.%i\n, [%-+15.20i]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%-+15.20i] - l.%i\n, [%-+15.20i]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3040) {
#line 5852
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-+15.20i] - l.%i\n, [%-+15.20i]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%-+15.20i] - l.%i\n, [%-+15.20i]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3041) {
#line 5859
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-+15.20i] - l.%i\n, [%-+15.20i]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%-+15.20i] - l.%i\n, [%-+15.20i]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3072) {
#line 5866
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%- i] - l.%i\n, [%- i]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%- i] - l.%i\n, [%- i]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3073) {
#line 5873
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%- i] - l.%i\n, [%- i]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%- i] - l.%i\n, [%- i]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3074) {
#line 5880
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%- i] - l.%i\n, [%- i]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%- i] - l.%i\n, [%- i]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3075) {
#line 5887
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%- 3i] - l.%i\n, [%- 3i]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%- 3i] - l.%i\n, [%- 3i]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3076) {
#line 5894
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%- 3i] - l.%i\n, [%- 3i]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%- 3i] - l.%i\n, [%- 3i]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3077) {
#line 5901
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%- 3i] - l.%i\n, [%- 3i]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%- 3i] - l.%i\n, [%- 3i]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3078) {
#line 5908
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%- 3.0i] - l.%i\n, [%- 3.0i]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%- 3.0i] - l.%i\n, [%- 3.0i]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3079) {
#line 5915
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%- 3.0i] - l.%i\n, [%- 3.0i]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%- 3.0i] - l.%i\n, [%- 3.0i]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3080) {
#line 5922
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%- 3.0i] - l.%i\n, [%- 3.0i]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%- 3.0i] - l.%i\n, [%- 3.0i]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3081) {
#line 5929
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%- 3.2i] - l.%i\n, [%- 3.2i]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%- 3.2i] - l.%i\n, [%- 3.2i]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3082) {
#line 5936
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%- 3.2i] - l.%i\n, [%- 3.2i]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%- 3.2i] - l.%i\n, [%- 3.2i]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3083) {
#line 5943
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%- 3.2i] - l.%i\n, [%- 3.2i]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%- 3.2i] - l.%i\n, [%- 3.2i]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3084) {
#line 5950
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%- 3.5i] - l.%i\n, [%- 3.5i]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%- 3.5i] - l.%i\n, [%- 3.5i]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3085) {
#line 5957
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%- 3.5i] - l.%i\n, [%- 3.5i]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%- 3.5i] - l.%i\n, [%- 3.5i]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3086) {
#line 5964
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%- 3.5i] - l.%i\n, [%- 3.5i]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%- 3.5i] - l.%i\n, [%- 3.5i]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3087) {
#line 5971
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%- 3.15i] - l.%i\n, [%- 3.15i]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%- 3.15i] - l.%i\n, [%- 3.15i]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3088) {
#line 5978
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%- 3.15i] - l.%i\n, [%- 3.15i]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%- 3.15i] - l.%i\n, [%- 3.15i]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3089) {
#line 5985
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%- 3.15i] - l.%i\n, [%- 3.15i]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%- 3.15i] - l.%i\n, [%- 3.15i]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3090) {
#line 5992
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%- 15i] - l.%i\n, [%- 15i]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%- 15i] - l.%i\n, [%- 15i]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3091) {
#line 5999
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%- 15i] - l.%i\n, [%- 15i]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%- 15i] - l.%i\n, [%- 15i]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3092) {
#line 6006
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%- 15i] - l.%i\n, [%- 15i]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%- 15i] - l.%i\n, [%- 15i]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3093) {
#line 6013
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%- 15.0i] - l.%i\n, [%- 15.0i]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%- 15.0i] - l.%i\n, [%- 15.0i]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3094) {
#line 6020
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%- 15.0i] - l.%i\n, [%- 15.0i]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%- 15.0i] - l.%i\n, [%- 15.0i]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3095) {
#line 6027
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%- 15.0i] - l.%i\n, [%- 15.0i]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%- 15.0i] - l.%i\n, [%- 15.0i]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3096) {
#line 6034
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%- 15.5i] - l.%i\n, [%- 15.5i]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%- 15.5i] - l.%i\n, [%- 15.5i]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3097) {
#line 6041
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%- 15.5i] - l.%i\n, [%- 15.5i]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%- 15.5i] - l.%i\n, [%- 15.5i]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3098) {
#line 6048
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%- 15.5i] - l.%i\n, [%- 15.5i]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%- 15.5i] - l.%i\n, [%- 15.5i]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3099) {
#line 6055
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%- 15.20i] - l.%i\n, [%- 15.20i]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%- 15.20i] - l.%i\n, [%- 15.20i]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3100) {
#line 6062
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%- 15.20i] - l.%i\n, [%- 15.20i]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%- 15.20i] - l.%i\n, [%- 15.20i]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3101) {
#line 6069
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%- 15.20i] - l.%i\n, [%- 15.20i]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%- 15.20i] - l.%i\n, [%- 15.20i]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3132) {
#line 6076
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-+hi] - l.%i\n, [%-+hi]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%-+hi] - l.%i\n, [%-+hi]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3133) {
#line 6083
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-+hi] - l.%i\n, [%-+hi]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%-+hi] - l.%i\n, [%-+hi]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3134) {
#line 6090
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-+hi] - l.%i\n, [%-+hi]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%-+hi] - l.%i\n, [%-+hi]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3135) {
#line 6097
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-+3hi] - l.%i\n, [%-+3hi]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%-+3hi] - l.%i\n, [%-+3hi]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3136) {
#line 6104
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-+3hi] - l.%i\n, [%-+3hi]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%-+3hi] - l.%i\n, [%-+3hi]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3137) {
#line 6111
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-+3hi] - l.%i\n, [%-+3hi]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%-+3hi] - l.%i\n, [%-+3hi]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3138) {
#line 6118
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-+3.0hi] - l.%i\n, [%-+3.0hi]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%-+3.0hi] - l.%i\n, [%-+3.0hi]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3139) {
#line 6125
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-+3.0hi] - l.%i\n, [%-+3.0hi]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%-+3.0hi] - l.%i\n, [%-+3.0hi]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3140) {
#line 6132
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-+3.0hi] - l.%i\n, [%-+3.0hi]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%-+3.0hi] - l.%i\n, [%-+3.0hi]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3141) {
#line 6139
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-+3.2hi] - l.%i\n, [%-+3.2hi]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%-+3.2hi] - l.%i\n, [%-+3.2hi]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3142) {
#line 6146
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-+3.2hi] - l.%i\n, [%-+3.2hi]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%-+3.2hi] - l.%i\n, [%-+3.2hi]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3143) {
#line 6153
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-+3.2hi] - l.%i\n, [%-+3.2hi]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%-+3.2hi] - l.%i\n, [%-+3.2hi]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3144) {
#line 6160
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-+3.5hi] - l.%i\n, [%-+3.5hi]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%-+3.5hi] - l.%i\n, [%-+3.5hi]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3145) {
#line 6167
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-+3.5hi] - l.%i\n, [%-+3.5hi]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%-+3.5hi] - l.%i\n, [%-+3.5hi]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3146) {
#line 6174
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-+3.5hi] - l.%i\n, [%-+3.5hi]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%-+3.5hi] - l.%i\n, [%-+3.5hi]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3147) {
#line 6181
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-+3.15hi] - l.%i\n, [%-+3.15hi]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%-+3.15hi] - l.%i\n, [%-+3.15hi]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3148) {
#line 6188
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-+3.15hi] - l.%i\n, [%-+3.15hi]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%-+3.15hi] - l.%i\n, [%-+3.15hi]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3149) {
#line 6195
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-+3.15hi] - l.%i\n, [%-+3.15hi]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%-+3.15hi] - l.%i\n, [%-+3.15hi]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3150) {
#line 6202
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-+15hi] - l.%i\n, [%-+15hi]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%-+15hi] - l.%i\n, [%-+15hi]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3151) {
#line 6209
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-+15hi] - l.%i\n, [%-+15hi]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%-+15hi] - l.%i\n, [%-+15hi]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3152) {
#line 6216
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-+15hi] - l.%i\n, [%-+15hi]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%-+15hi] - l.%i\n, [%-+15hi]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3153) {
#line 6223
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-+15.0hi] - l.%i\n, [%-+15.0hi]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%-+15.0hi] - l.%i\n, [%-+15.0hi]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3154) {
#line 6230
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-+15.0hi] - l.%i\n, [%-+15.0hi]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%-+15.0hi] - l.%i\n, [%-+15.0hi]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3155) {
#line 6237
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-+15.0hi] - l.%i\n, [%-+15.0hi]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%-+15.0hi] - l.%i\n, [%-+15.0hi]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3156) {
#line 6244
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-+15.5hi] - l.%i\n, [%-+15.5hi]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%-+15.5hi] - l.%i\n, [%-+15.5hi]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3157) {
#line 6251
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-+15.5hi] - l.%i\n, [%-+15.5hi]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%-+15.5hi] - l.%i\n, [%-+15.5hi]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3158) {
#line 6258
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-+15.5hi] - l.%i\n, [%-+15.5hi]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%-+15.5hi] - l.%i\n, [%-+15.5hi]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3159) {
#line 6265
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-+15.20hi] - l.%i\n, [%-+15.20hi]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%-+15.20hi] - l.%i\n, [%-+15.20hi]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3160) {
#line 6272
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-+15.20hi] - l.%i\n, [%-+15.20hi]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%-+15.20hi] - l.%i\n, [%-+15.20hi]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3161) {
#line 6279
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%-+15.20hi] - l.%i\n, [%-+15.20hi]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%-+15.20hi] - l.%i\n, [%-+15.20hi]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3192) {
#line 6286
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%- hi] - l.%i\n, [%- hi]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%- hi] - l.%i\n, [%- hi]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3193) {
#line 6293
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%- hi] - l.%i\n, [%- hi]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%- hi] - l.%i\n, [%- hi]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3194) {
#line 6300
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%- hi] - l.%i\n, [%- hi]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%- hi] - l.%i\n, [%- hi]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3195) {
#line 6307
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%- 3hi] - l.%i\n, [%- 3hi]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%- 3hi] - l.%i\n, [%- 3hi]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3196) {
#line 6314
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%- 3hi] - l.%i\n, [%- 3hi]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%- 3hi] - l.%i\n, [%- 3hi]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3197) {
#line 6321
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%- 3hi] - l.%i\n, [%- 3hi]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%- 3hi] - l.%i\n, [%- 3hi]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3198) {
#line 6328
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%- 3.0hi] - l.%i\n, [%- 3.0hi]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%- 3.0hi] - l.%i\n, [%- 3.0hi]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3199) {
#line 6335
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%- 3.0hi] - l.%i\n, [%- 3.0hi]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%- 3.0hi] - l.%i\n, [%- 3.0hi]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3200) {
#line 6342
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%- 3.0hi] - l.%i\n, [%- 3.0hi]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%- 3.0hi] - l.%i\n, [%- 3.0hi]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3201) {
#line 6349
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%- 3.2hi] - l.%i\n, [%- 3.2hi]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%- 3.2hi] - l.%i\n, [%- 3.2hi]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3202) {
#line 6356
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%- 3.2hi] - l.%i\n, [%- 3.2hi]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%- 3.2hi] - l.%i\n, [%- 3.2hi]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3203) {
#line 6363
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%- 3.2hi] - l.%i\n, [%- 3.2hi]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%- 3.2hi] - l.%i\n, [%- 3.2hi]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3204) {
#line 6370
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%- 3.5hi] - l.%i\n, [%- 3.5hi]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%- 3.5hi] - l.%i\n, [%- 3.5hi]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3205) {
#line 6377
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%- 3.5hi] - l.%i\n, [%- 3.5hi]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%- 3.5hi] - l.%i\n, [%- 3.5hi]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3206) {
#line 6384
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%- 3.5hi] - l.%i\n, [%- 3.5hi]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%- 3.5hi] - l.%i\n, [%- 3.5hi]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3207) {
#line 6391
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%- 3.15hi] - l.%i\n, [%- 3.15hi]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%- 3.15hi] - l.%i\n, [%- 3.15hi]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3208) {
#line 6398
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%- 3.15hi] - l.%i\n, [%- 3.15hi]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%- 3.15hi] - l.%i\n, [%- 3.15hi]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3209) {
#line 6405
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%- 3.15hi] - l.%i\n, [%- 3.15hi]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%- 3.15hi] - l.%i\n, [%- 3.15hi]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3210) {
#line 6412
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%- 15hi] - l.%i\n, [%- 15hi]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%- 15hi] - l.%i\n, [%- 15hi]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3211) {
#line 6419
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%- 15hi] - l.%i\n, [%- 15hi]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%- 15hi] - l.%i\n, [%- 15hi]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3212) {
#line 6426
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%- 15hi] - l.%i\n, [%- 15hi]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%- 15hi] - l.%i\n, [%- 15hi]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3213) {
#line 6433
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%- 15.0hi] - l.%i\n, [%- 15.0hi]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%- 15.0hi] - l.%i\n, [%- 15.0hi]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3214) {
#line 6440
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%- 15.0hi] - l.%i\n, [%- 15.0hi]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%- 15.0hi] - l.%i\n, [%- 15.0hi]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3215) {
#line 6447
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%- 15.0hi] - l.%i\n, [%- 15.0hi]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%- 15.0hi] - l.%i\n, [%- 15.0hi]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3216) {
#line 6454
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%- 15.5hi] - l.%i\n, [%- 15.5hi]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%- 15.5hi] - l.%i\n, [%- 15.5hi]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3217) {
#line 6461
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%- 15.5hi] - l.%i\n, [%- 15.5hi]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%- 15.5hi] - l.%i\n, [%- 15.5hi]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3218) {
#line 6468
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%- 15.5hi] - l.%i\n, [%- 15.5hi]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%- 15.5hi] - l.%i\n, [%- 15.5hi]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3219) {
#line 6475
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%- 15.20hi] - l.%i\n, [%- 15.20hi]", 0, -2, __LINE__);
sprintf(str1, "- %i - [%%- 15.20hi] - l.%i\n, [%- 15.20hi]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3220) {
#line 6482
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%- 15.20hi] - l.%i\n, [%- 15.20hi]", SHRT_MIN, -2, __LINE__);
sprintf(str1, "- %i - [%%- 15.20hi] - l.%i\n, [%- 15.20hi]", SHRT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_3221) {
#line 6489
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %i - [%%- 15.20hi] - l.%i\n, [%- 15.20hi]", SHRT_MAX, -2, __LINE__);
sprintf(str1, "- %i - [%%- 15.20hi] - l.%i\n, [%- 15.20hi]", SHRT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_4001) {
#line 6496
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%u] - l.%d\n, [%u]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%u] - l.%d\n, [%u]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_4002) {
#line 6503
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%u] - l.%d\n, [%u]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%u] - l.%d\n, [%u]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_4004) {
#line 6510
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%3u] - l.%d\n, [%3u]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%3u] - l.%d\n, [%3u]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_4005) {
#line 6517
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%3u] - l.%d\n, [%3u]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%3u] - l.%d\n, [%3u]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_4006) {
#line 6524
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%3u] - l.%d\n, [%3u]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%3u] - l.%d\n, [%3u]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_4007) {
#line 6531
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%3.0u] - l.%d\n, [%3.0u]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%3.0u] - l.%d\n, [%3.0u]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_4008) {
#line 6538
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%3.0u] - l.%d\n, [%3.0u]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%3.0u] - l.%d\n, [%3.0u]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_4009) {
#line 6545
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%3.0u] - l.%d\n, [%3.0u]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%3.0u] - l.%d\n, [%3.0u]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_4010) {
#line 6552
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%3.2u] - l.%d\n, [%3.2u]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%3.2u] - l.%d\n, [%3.2u]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_4011) {
#line 6559
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%3.2u] - l.%d\n, [%3.2u]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%3.2u] - l.%d\n, [%3.2u]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_4012) {
#line 6566
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%3.2u] - l.%d\n, [%3.2u]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%3.2u] - l.%d\n, [%3.2u]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_4013) {
#line 6573
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%3.5u] - l.%d\n, [%3.5u]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%3.5u] - l.%d\n, [%3.5u]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_4014) {
#line 6580
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%3.5u] - l.%d\n, [%3.5u]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%3.5u] - l.%d\n, [%3.5u]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_4015) {
#line 6587
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%3.5u] - l.%d\n, [%3.5u]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%3.5u] - l.%d\n, [%3.5u]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_4016) {
#line 6594
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%3.15u] - l.%d\n, [%3.15u]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%3.15u] - l.%d\n, [%3.15u]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_4017) {
#line 6601
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%3.15u] - l.%d\n, [%3.15u]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%3.15u] - l.%d\n, [%3.15u]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_4018) {
#line 6608
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%3.15u] - l.%d\n, [%3.15u]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%3.15u] - l.%d\n, [%3.15u]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_4019) {
#line 6615
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%15u] - l.%d\n, [%15u]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%15u] - l.%d\n, [%15u]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_4020) {
#line 6622
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%15u] - l.%d\n, [%15u]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%15u] - l.%d\n, [%15u]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_4021) {
#line 6629
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%15u] - l.%d\n, [%15u]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%15u] - l.%d\n, [%15u]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_4022) {
#line 6636
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%15.0u] - l.%d\n, [%15.0u]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%15.0u] - l.%d\n, [%15.0u]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_4023) {
#line 6643
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%15.0u] - l.%d\n, [%15.0u]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%15.0u] - l.%d\n, [%15.0u]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_4024) {
#line 6650
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%15.5u] - l.%d\n, [%15.5u]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%15.5u] - l.%d\n, [%15.5u]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_4025) {
#line 6657
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%15.20u] - l.%d\n, [%15.20u]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%15.20u] - l.%d\n, [%15.20u]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_4026) {
#line 6664
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%15.20u] - l.%d\n, [%15.20u]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%15.20u] - l.%d\n, [%15.20u]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_4027) {
#line 6671
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%15.20u] - l.%d\n, [%15.20u]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%15.20u] - l.%d\n, [%15.20u]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_4028) {
#line 6678
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-u] - l.%d\n, [%-u]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%-u] - l.%d\n, [%-u]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_4029) {
#line 6685
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-u] - l.%d\n, [%-u]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%-u] - l.%d\n, [%-u]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_4030) {
#line 6692
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-u] - l.%d\n, [%-u]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%-u] - l.%d\n, [%-u]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_4031) {
#line 6699
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-3u] - l.%d\n, [%-3u]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%-3u] - l.%d\n, [%-3u]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_4032) {
#line 6706
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-3u] - l.%d\n, [%-3u]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%-3u] - l.%d\n, [%-3u]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_4033) {
#line 6713
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-3u] - l.%d\n, [%-3u]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%-3u] - l.%d\n, [%-3u]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_4034) {
#line 6720
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-3.0u] - l.%d\n, [%-3.0u]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%-3.0u] - l.%d\n, [%-3.0u]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_4035) {
#line 6727
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-3.0u] - l.%d\n, [%-3.0u]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%-3.0u] - l.%d\n, [%-3.0u]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_4036) {
#line 6734
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-3.0u] - l.%d\n, [%-3.0u]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%-3.0u] - l.%d\n, [%-3.0u]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_4037) {
#line 6741
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-3.2u] - l.%d\n, [%-3.2u]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%-3.2u] - l.%d\n, [%-3.2u]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_4038) {
#line 6748
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-3.2u] - l.%d\n, [%-3.2u]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%-3.2u] - l.%d\n, [%-3.2u]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_4039) {
#line 6755
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-3.2u] - l.%d\n, [%-3.2u]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%-3.2u] - l.%d\n, [%-3.2u]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_4040) {
#line 6762
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-3.5u] - l.%d\n, [%-3.5u]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%-3.5u] - l.%d\n, [%-3.5u]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_4041) {
#line 6769
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-3.5u] - l.%d\n, [%-3.5u]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%-3.5u] - l.%d\n, [%-3.5u]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_4042) {
#line 6776
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-3.5u] - l.%d\n, [%-3.5u]", INT_MAX, -2, __LINE__);
sprintf(str1, "- %d - [%%-3.5u] - l.%d\n, [%-3.5u]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_4043) {
#line 6783
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-3.15u] - l.%d\n, [%-3.15u]", 0, -2, __LINE__);
sprintf(str1, "- %d - [%%-3.15u] - l.%d\n, [%-3.15u]", 0, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_4044) {
#line 6790
char str1[1024];
char str2[1024];
s21_sprintf(str2, "- %d - [%%-3.15u] - l.%d\n, [%-3.15u]", INT_MIN, -2, __LINE__);
sprintf(str1, "- %d - [%%-3.15u] - l.%d\n, [%-3.15u]", INT_MIN, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_i_4045) {
#line 6797
char str1[1024];
char str2[1024];
s21_sprintf(str2, "-_%d_- [%%-3.15u]_-_l.%d,_[%-3.15u]", INT_MAX, -2, __LINE__);
sprintf(str1, "-_%d_- [%%-3.15u]_-_l.%d,_[%-3.15u]", INT_MAX, -2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_e_1) {
#line 6804
char str1[1024];
char str2[1024];
double i = 123456.00;
s21_sprintf(str1, "kljhjl%e", i);
sprintf(str2, "kljhjl%e", i);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_e_2) {
#line 6812
char str1[1024];
char str2[1024];
double i = 1234500006.0000090;
s21_sprintf(str1, "kljhjl%e", i);
sprintf(str2, "kljhjl%e", i);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_e_3) {
#line 6820
char str1[1024];
char str2[1024];
double i = 16.546789090;
s21_sprintf(str1, "kljhjl%e", i);
sprintf(str2, "kljhjl%e", i);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_e_4) {
#line 6828
char str1[1024];
char str2[1024];
double i = 1.2345000e+19;
s21_sprintf(str1, "kljhjl%e", i);
sprintf(str2, "kljhjl%e", i);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_e_5) {
#line 6836
char str1[1024];
char str2[1024];
double i = 1.2345000e-19;
s21_sprintf(str1, "kljhjl%e", i);
sprintf(str2, "kljhjl%e", i);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_e_6) {
#line 6844
char str1[1024];
char str2[1024];
double i = 0.2345000e+19;
s21_sprintf(str1, "kljhjl%e", i);
sprintf(str2, "kljhjl%e", i);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_e_7) {
#line 6852
char str1[1024];
char str2[1024];
double i = 0.2345000e-19;
s21_sprintf(str1, "kljhjl%eKJH", i);
sprintf(str2, "kljhjl%eKJH", i);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_e_8) {
#line 6860
char str1[1024];
char str2[1024];
double i = 0;
s21_sprintf(str1, "kljhjl%eOIUYUIH", i);
sprintf(str2, "kljhjl%eOIUYUIH", i);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_e_1E) {
#line 6868
char str1[1024];
char str2[1024];
double i = 123456.00;
s21_sprintf(str1, "kljhjl%E", i);
sprintf(str2, "kljhjl%E", i);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_e_2E) {
#line 6876
char str1[1024];
char str2[1024];
double i = 1234500006.0000090;
s21_sprintf(str1, "kljhjl%E", i);
sprintf(str2, "kljhjl%E", i);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_e_3E) {
#line 6884
char str1[1024];
char str2[1024];
double i = 16.546789090;
s21_sprintf(str1, "kljhjl%E", i);
sprintf(str2, "kljhjl%E", i);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_e_4E) {
#line 6892
char str1[1024];
char str2[1024];
double i = 1.2345000e+19;
s21_sprintf(str1, "kljhjl%E", i);
sprintf(str2, "kljhjl%E", i);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_e_5E) {
#line 6900
char str1[1024];
char str2[1024];
double i = 1.2345000e-19;
s21_sprintf(str1, "kljhjl%E", i);
sprintf(str2, "kljhjl%E", i);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_e_6E) {
#line 6908
char str1[1024];
char str2[1024];
double i = 0.2345000e+19;
s21_sprintf(str1, "kljhjl%E", i);
sprintf(str2, "kljhjl%E", i);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_e_7E) {
#line 6916
char str1[1024];
char str2[1024];
double i = 0.2345000e-19;
s21_sprintf(str1, "kljhjl%EKJH", i);
sprintf(str2, "kljhjl%EKJH", i);
ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_e_8E) {
#line 6924
char str1[1024];
char str2[1024];
double i = 0;
s21_sprintf(str1, "kljhjl%EOIUYUIH", i);
sprintf(str2, "kljhjl%EOIUYUIH", i);
ck_assert_str_eq(str1, str2);
} END_TEST

/*START_TEST(sprintf_n_1) {
#line 6932
char str1[1024];
char str2[1024];
int x = 0;
int y = 0;
s21_sprintf(str1, "ldfsjjdklsgjlkdsa %n", &x);
sprintf(str2, "ldfsjjdklsgjlkdsa %n", &y);
ck_assert_int_eq(x, y);
} END_TEST

START_TEST(sprintf_n_2) {
#line 6941
char str1[1024];
char str2[1024];
int x = 0;
int y = 0;
s21_sprintf(str1, "%nldfsjjdklsgjlkdsa", &x);
sprintf(str2, "%nldfsjjdklsgjlkdsa", &y);
ck_assert_int_eq(x, y);
} END_TEST

START_TEST(sprintf_n_3) {
#line 6950
char str1[1024];
char str2[1024];
int x = 0;
int y = 0;
s21_sprintf(str1, "ldfsjjd%nklsgjlkdsa", &x);
sprintf(str2, "ldfsjjd%nklsgjlkdsa", &y);
ck_assert_int_eq(x, y);
}
END_TEST*/

START_TEST(sprintf_copy_1) {
    char str1[512];
    char str2[512];

    char *format = "This is a simple value %d";
    int val = 69;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_2) {
    char str1[512];
    char str2[512];

    char *format = "%.5i";
    int val = 69;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_3) {
    char str1[512];
    char str2[512];

    char *format = "%5d";
    int val = 69;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_4) {
    char str1[512];
    char str2[512];

    char *format = "%-5i";
    int val = 69;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_5) {
    char str1[512];
    char str2[512];

    char *format = "%+12d";
    int val = 69;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_6) {
    char str1[512];
    char str2[512];

    char *format = "%012i";
    int val = 69;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

/*START_TEST(sprintf_copy_7) {
    char str1[512];
    char str2[512];

    char *format = "%0*d";
    int val = 69;
    ck_assert_int_eq(s21_sprintf(str1, format, 5, val), sprintf(str2, format, 5, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_8) {
    char str1[512];
    char str2[512];

    char *format = "%0.*i";
    int val = 69;
    ck_assert_int_eq(s21_sprintf(str1, format, 5, val), sprintf(str2, format, 5, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_9) {
    char str1[512];
    char str2[512];

    char format[] = "%0.*i %d %4.*i %013d %d";
    int val = 69;
    ck_assert_int_eq(
        s21_sprintf(str1, format, 5, val, -10431, 13, 5311, 0, -581813581),
        sprintf(str2, format, 5, val, -10431, 13, 5311, 0, -581813581));

    ck_assert_str_eq(str1, str2);
} END_TEST*/

START_TEST(sprintf_copy_10) {
    char str1[512];
    char str2[512];

    char *format = "%+5.31li";
    long int val = 698518581899;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_11) {
    char str1[512];
    char str2[512];

    char *format = "%-16.9hi";
    short int val = 6958;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_12) {
    char str1[512];
    char str2[512];

    char *format = "%.0d";
    int val = 0;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_13) {
    char str1[512];
    char str2[512];

    char *format = "% d";
    int val = 0;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_14) {
    char str1[512];
    char str2[512];

    char *format = "%u";
    unsigned int val = 14140;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_15) {
    char str1[512];
    char str2[512];

    char *format = "%15u";
    unsigned int val = 14140;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_16) {
    char str1[512];
    char str2[512];

    char *format = "%-16u";
    unsigned int val = 14140;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_17) {
    char str1[512];
    char str2[512];

    char *format = "%.51u";
    unsigned int val = 14140;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_18) {
    char str1[512];
    char str2[512];

    char *format = "% 5.51u";
    unsigned int val = 14140;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_19) {
    char str1[512];
    char str2[512];

    char *format = "%hu";
    unsigned short int val = 14140;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_20) {
    char str1[512];
    char str2[512];

    char *format = "%lu";
    unsigned long int val = 949149114140;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_21) {
    char str1[512];
    char str2[512];

    char *format = "%lu, %u, %hu, %.5u, %5.u";
    unsigned long int val = 949149114140;
    ck_assert_int_eq(s21_sprintf(str1, \
        format, val, 14, 1441, 14414, 9681), \
            sprintf(str2, format, val, (unsigned)14, \
                    (unsigned short)1441, (unsigned)14414,
                             (unsigned)9681));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_22) {
    char str1[512];
    char str2[512];

    char *format = "%hd";
    short int val = 14140;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_23) {
    char str1[512];
    char str2[512];

    char *format = "%u";
    ck_assert_int_eq(s21_sprintf(str1, format, 0), sprintf(str2, format, (unsigned)0));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_24) {
    char str1[512];
    char str2[512];

    char *format = "%c";
    char val = 'X';
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_25) {
    char str1[512];
    char str2[512];

    char *format = "%.5c";
    char val = 'c';
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_26) {
    char str1[512];
    char str2[512];

    char *format = "% -5c";
    char val = 'c';
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_27) {
    char str1[512];
    char str2[512];

    char *format = "%15c";
    char val = 'c';
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_28) {
    char str1[512];
    char str2[512];

    char *format = "%-5.3c%c%c%c%c Hello! ABOBA";
    char val = 'c';
    ck_assert_int_eq(s21_sprintf(str1, \
        format, val, 'c', 'a', 'b', 'b'), \
            sprintf(str2, format, val, 'c', 'a', 'b', 'b'));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_29) {
    char str1[512];
    char str2[512];

    char *format = "%-5.3c";
    char val = 'c';
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_30) {
    char str1[512];
    char str2[512];

    char *format = "%s";
    char *val = "I LOVE STRINGS AND TESTS AND SCHOOL21 NO JOKE";
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_31) {
    char str1[512];
    char str2[512];

    char *format = "%.15s";
    char *val = "I LOVE STRINGS AND TESTS AND SCHOOL21 NO JOKE";
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_32) {
    char str1[512];
    char str2[512];

    char *format = "%15s";
    char *val = "69 IS MY FAVORITE NUMBER";
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_33) {
    char str1[512];
    char str2[512];

    char *format = "%-15.9s";
    char *val = "69 IS MY FAVORITE NUMBER";
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_34) {
    char str1[512];
    char str2[512];

    char *format = "%s";
    char *val =
        "69 IS MY FAVORITE NUMBER THIS IS SUPPOSED TO BE A VERY LONG STRING";
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_35) {
    char str1[512];
    char str2[512];

    char *format = "%s%s%s%s";
    char *val =
        "69 IS MY FAVORITE NUMBER THIS IS SUPPOSED TO BE A VERY LONG STRING";
    char *s1 = "";
    char *s2 = "87418347813748913749871389480913";
    char *s3 = "HAHAABOBASUCKER";
    ck_assert_int_eq(s21_sprintf(str1, format, val, s1, s2, s3), sprintf(str2, format, val, s1, s2, s3));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_36) {
    char str1[512];
    char str2[512];
    char *val = "kjafdiuhfjahfjdahf";
    char *format = "%120s";
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

/*START_TEST(sprintf_copy_37) {
    char str1[512];
    char str2[512];
    int ret1 = 0;
    int ret2 = 0;
    char *format = "Hello, my sexy little aboba abobushka abobina %n";
    s21_sprintf(str1, format, &ret1);
    sprintf(str2, format, &ret2);

    ck_assert_int_eq(ret1, ret2);

    ck_assert_str_eq(str1, str2);
} END_TEST*/

START_TEST(sprintf_copy_38) {
    char str1[512];
    char str2[512];
    char *format = "% f";
    float val = 0;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_39) {
    char str1[512];
    char str2[512];
    ck_assert_int_eq(s21_sprintf(str1, "abc"), sprintf(str2, "abc"));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_40) {
    char str1[512];
    char str2[512];

    ck_assert_int_eq(s21_sprintf(str1, "abc"), sprintf(str2, "abc"));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_41) {
    char str1[512];
    char str2[512];

    ck_assert_int_eq(s21_sprintf(str1, "%c", '\t'), sprintf(str2, "%c", '\t'));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_42) {
    char str1[512];
    char str2[512];

    ck_assert_int_eq(s21_sprintf(str1, \
                                 "%c%c%c%c%c", '\t', '\n', '0', 'S', 's'), \
                     sprintf(str2, "%c%c%c%c%c", '\t', '\n', '0', 'S', 's'));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_43) {
    char str1[512];
    char str2[512];

    ck_assert_int_eq(s21_sprintf(str1, "%s", "Drop Sega PLS"), sprintf(str2, "%s", "Drop Sega PLS"));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_44) {
    char str1[512];
    char str2[512];

    ck_assert_int_eq(
        s21_sprintf(str1, "%s%s%s%s%s", "Drop", " ", "Sega", " ", "PLS"),
        sprintf(str2, "%s%s%s%s%s", "Drop", " ", "Sega", " ", "PLS"));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_45) {
    char str1[512];
    char str2[512];

    ck_assert_int_eq(s21_sprintf(str1, "%d", 666), sprintf(str2, "%d", 666));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_46) {
    char str1[512];
    char str2[512];

    ck_assert_int_eq(s21_sprintf(str1, "%d%d%d%d", \
    -999, 0, 666, -100), sprintf(str2, "%d%d%d%d", -999, 0, 666, -100));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_47) {
    char str1[512];
    char str2[512];

    ck_assert_int_eq(s21_sprintf(str1, "%i", -0), sprintf(str2, "%i", -0));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_48) {
    char str1[512];
    char str2[512];
    ck_assert_int_eq(s21_sprintf(str1, "%i%i%i%i", \
        -999, 0, 666, -100), sprintf(str2, "%i%i%i%i", -999, 0, 666, -100));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_49) {
    char str1[512];
    char str2[512];
    ck_assert_int_eq(s21_sprintf(str1, "%f", 0.0001), sprintf(str2, "%f", 0.0001));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_50) {
    char str1[512];
    char str2[512];
    ck_assert_int_eq(
        s21_sprintf(str1, "%f%f%f%f", -999.666, 0.0001, 666.999, -100.001),
        sprintf(str2, "%f%f%f%f", -999.666, 0.0001, 666.999, -100.001));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_51) {
    char str1[512];
    char str2[512];
    ck_assert_int_eq(s21_sprintf(str1, "%u", 100), sprintf(str2, "%u", (unsigned)100));
    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_52) {
    char str1[512];
    char str2[512];

    ck_assert_int_eq(s21_sprintf(str1, "%u%u%u%u", \
    999, 0, 666, 100), sprintf(str2, "%u%u%u%u", \
            (unsigned)999, (unsigned)0,
                             (unsigned)666, (unsigned)100));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_53) {
    char str1[512];
    char str2[512];

    ck_assert_int_eq(s21_sprintf(str1, "%8c", '\t'), sprintf(str2, "%8c", '\t'));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_54) {
    char str1[512];
    char str2[512];

    ck_assert_int_eq(s21_sprintf(str1, "%-8c", '\t'), sprintf(str2, "%-8c", '\t'));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_55) {
    char str1[512];
    char str2[512];

    ck_assert_int_eq(
        s21_sprintf(str1, "%3c%-11c%10c%-2c%c", '\t', '\n', '0', 'S', 's'),
        sprintf(str2, "%3c%-11c%10c%-2c%c", '\t', '\n', '0', 'S', 's'));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_56) {
    char str1[512];
    char str2[512];
    char format[] = "%10ld";

    ck_assert_int_eq(s21_sprintf(str1, format, 1), sprintf(str2, format, 1));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_57) {
    char str1[512];
    char str2[512];
    char format[] = "%1.1f";

    ck_assert_int_eq(s21_sprintf(str1, format, 1.1), sprintf(str2, format, 1.1));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_58) {
    char str1[512];
    char str2[512];
    char format[] = "%8.3c";

    ck_assert_int_eq(s21_sprintf(str1, format, 'a'), sprintf(str2, format, 'a'));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_59) {
    char str1[512];
    char str2[512];
    char format[] = "%+5.5d aboba";

    int val = 10000;
    int a = s21_sprintf(str1, format, val);
    int b = sprintf(str2, format, val);
    ck_assert_int_eq(a, b);

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_60) {
    char str1[512];
    char str2[512];
    char format[] = "%7.7f";

    ck_assert_int_eq(s21_sprintf(str1, format, 11.123456), sprintf(str2, format, 11.123456));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_61) {
    char str1[512];
    char str2[512];
    char format[] = "%7.4s";

    ck_assert_int_eq(s21_sprintf(str1, format, "aboba floppa"), sprintf(str2, format, "aboba floppa"));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_62) {
    char str1[512];
    char str2[512];
    char format[] = "%6.6u";

    ck_assert_int_eq(s21_sprintf(str1, format, 12341151), sprintf(str2, format, 12341151));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_63) {
    char str1[512];
    char str2[512];
    char format[] = "%li%ld%lu";

    ck_assert_int_eq(s21_sprintf(str1, format, \
        666666666666, 777, 111), sprintf(str2, format, 666666666666, 777, 111));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_64) {
    char str1[512];
    char str2[512];
    char format[] = "%hi%hd%hu";

    ck_assert_int_eq(s21_sprintf(str1, format, 666, -777, 111), sprintf(str2, format, 666, -777, 111));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_65) {
    char str1[512];
    char str2[512];
    char format[] = "% c";

    ck_assert_int_eq(s21_sprintf(str1, format, 'a'), sprintf(str2, format, 'a'));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_66) {
    char str1[512];
    char str2[512];
    char format[] = "% s";

    ck_assert_int_eq(s21_sprintf(str1, format, \
        "aboba likes floppa"), sprintf(str2, format, "aboba likes floppa"));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_67) {
    char str1[512];
    char str2[512];
    char format[] = "% s% c";

    ck_assert_int_eq(s21_sprintf(str1, format, "", 'f'), sprintf(str2, format, "", 'f'));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_68) {
    char str1[512];
    char str2[512];
    char format[] = "%210s";

    ck_assert_int_eq(s21_sprintf(str1, format, \
            "AHHAHAHA\0AHHAHAHAH"), sprintf(str2, format, "AHHAHAHA\0AHHAHAHAH"));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_69) {
    char str1[512];
    char str2[512];
    char format[] = "%-115s";

    ck_assert_int_eq(s21_sprintf(str1, format, "Nick her"), sprintf(str2, format, "Nick her"));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_70) {
    char str1[512];
    char str2[512];
    char format[] = "%+2.1c%+4.2d%+5.4i%+10.2f%+55.55s%+1.1u";

    ck_assert_int_eq(
        s21_sprintf(str1, format, 'f', 21, 42, 666.666,
                    "Lorem ipsum dolor sit amet. Aut quam ducimus.", 11),
        sprintf(str2, format, 'f', 21, 42, 666.666,
                "Lorem ipsum dolor sit amet. Aut quam ducimus.", 11));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_71) {
    char str1[512];
    char str2[512];
    char format[] = "%.f";

    ck_assert_int_eq(s21_sprintf(str1, format, 121.123), sprintf(str2, format, 121.123));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_72) {
    char str1[512];
    char str2[512];
    char format[] = "%%";

    ck_assert_int_eq(s21_sprintf(str1, format), sprintf(str2, format));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_73) {
    char str1[512];
    char str2[512];
    char format[] = "%%%%%%%%";

    ck_assert_int_eq(s21_sprintf(str1, format), sprintf(str2, format));

    ck_assert_str_eq(str1, str2);
} END_TEST

/*START_TEST(sprintf_copy_74) {
    char str1[512];
    char str2[512];
    int n1;
    int n2;
    int a = s21_sprintf(str1, "%d%n", 123, &n1);
    int b = sprintf(str2, "%d%n", 123, &n2);

    ck_assert_int_eq(a, b);
    ck_assert_int_eq(n1, n2);
    ck_assert_str_eq(str1, str2);
} END_TEST*/

START_TEST(sprintf_copy_75) {
    char str1[512];
    char str2[512];
    char format[] = "%-.f";

    ck_assert_int_eq(s21_sprintf(str1, format, 111.111), sprintf(str2, format, 111.111));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_76) {
    char str1[512];
    char str2[512];
    char format[] = "%-.1d";

    ck_assert_int_eq(s21_sprintf(str1, format, 111), sprintf(str2, format, 111));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_copy_78) {
    char str1[512];
    char str2[512];

    char *format = "This is a simple wide char %5c";
    char w = 'c';
    int a = s21_sprintf(str1, format, w);
    int b = sprintf(str2, format, w);
    ck_assert_str_eq(str1, str2);
    ck_assert_int_eq(a, b);
}

START_TEST(sprintf_hex_width) {
    char str1[512];
    char str2[512];

    char *format = "%5x";
    unsigned val = 858158158;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_hex_flags) {
    char str1[512];
    char str2[512];

    char *format = "%#-10x";
    unsigned val = 858158158;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_hex_precision) {
    char str1[512];
    char str2[512];

    char *format = "%.15x";
    unsigned val = 858158158;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_hex_many) {
    char str1[512];
    char str2[512];

    char *format = "%#-10x%x%X%#x%#X%5.5x";
    unsigned val = 858158158;
    ck_assert_int_eq(s21_sprintf(str1, format, val, val, val, val, val, val), \
    sprintf(str2, format, val, val, val, val, val, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_hex_many_flags) {
    char str1[512];
    char str2[512];

    char *format = "%#-5.10x";
    unsigned val = 858158158;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_hex_zero) {
    char str1[512];
    char str2[512];

    char *format = "%#x";
    unsigned val = 0;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_hex_huge) {
    char str1[512];
    char str2[512];

    char *format = "%#x";
    unsigned val = 18571;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_hex_short) {
    char str1[512];
    char str2[512];

    char *format = "%#hx";
    unsigned short val = 12352;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_hex_long) {
    char str1[512];
    char str2[512];

    char *format = "%#lx";
    unsigned long val = 18571757371571;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_hex_one_longer_width) {
    char str1[512];
    char str2[512];

    char *format = "%#2x";
    unsigned val = 1;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_hex_two_longer_width) {
    char str1[512];
    char str2[512];

    char *format = "%#30x";
    unsigned val = 1;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(s21_trim_925) {
char str1[] = "";
char str2[] = "";
char *str3 = s21_trim(str1, str2);
ck_assert_str_eq(str3, "");
free(str3);
} END_TEST

START_TEST(s21_trim_926) {
char str2[] = "";
char *str3 = s21_trim(s21_NULL, str2);
ck_assert_ptr_eq(str3, s21_NULL);
free(str3);
} END_TEST

START_TEST(s21_trim_927) {
char *str3 = s21_trim(s21_NULL, s21_NULL);
ck_assert_ptr_eq(str3, s21_NULL);
free(str3);
} END_TEST

START_TEST(s21_insert_925) {
char str1[] = "";
char str2[] = "";
char *str3 = s21_insert(str1, str2, 0);
ck_assert_str_eq(str3, "");
free(str3);
} END_TEST

START_TEST(s21_insert_926) {
char str2[] = "";
char *str3 = s21_insert(s21_NULL, str2, 0);
ck_assert_ptr_eq(str3, s21_NULL);
free(str3);
} END_TEST

START_TEST(s21_insert_927) {
char *str3 = s21_insert(s21_NULL, s21_NULL, 0);
ck_assert_ptr_eq(str3, s21_NULL);
free(str3);
} END_TEST

START_TEST(s21_insert_928) {
char str2[] = "";
char *str3 = s21_insert(str2, s21_NULL, 0);
ck_assert_str_eq(str3, "");
free(str3);
} END_TEST

START_TEST(sprintf_octal_width) {
    char str1[1024];
    char str2[1024];

    char *format = "%15o";
    int val = 14140;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_octal_flags) {
    char str1[1024];
    char str2[1024];

    char *format = "%-16o";
    int val = 14140;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_octal_precision) {
    char str1[1024];
    char str2[1024];

    char *format = "%.51o";
    int val = 14140;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_octal_many_flags) {
    char str1[1024];
    char str2[1024];

    char *format = "%-5.51o";
    int val = 14140;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_octal_zero) {
    char str1[1024];
    char str2[1024];

    char *format = "%o";
    ck_assert_int_eq(s21_sprintf(str1, format, 0), sprintf(str2, format, 0));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_octal_hash) {
    char str1[1024];
    char str2[1024];

    char *format = "%#o";
    int val = 57175;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_octal_short) {
    char str1[1024];
    char str2[1024];

    char *format = "%hd";
    short int val = 14140;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_octal_long) {
    char str1[1024];
    char str2[1024];

    char *format = "%lo";
    long int val = 949149114140;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_octal_many) {
    char str1[1024];
    char str2[1024];

    char *format = "%lo, %o, %ho, %.5o, %5.o";
    long int val = 949149114140;
    ck_assert_int_eq(s21_sprintf(str1, format, val, 14, 1441, 14414, 9681), \
                     sprintf(str2, format, val, (unsigned)14,
                             (unsigned short)1441, (unsigned)14414,
                             (unsigned)9681));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_pointer_width) {
    char str1[512];
    char str2[512];

    char *format = "%5p";
    unsigned val = 858158158;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_pointer_flags) {
    char str1[512];
    char str2[512];

    char *format = "%#-10p";
    unsigned val = 858158158;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_pointer_precision) {
    char str1[512];
    char str2[512];

    char *format = "%.15p";
    unsigned val = 858158158;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_pointer_many) {
    char str1[512];
    char str2[512];

    char *format = "%#-10x%x%X%#x%#X%5.5x";
    unsigned val = 858158158;
    ck_assert_int_eq(s21_sprintf(str1, format, val, val, val, val, val, val), \
    sprintf(str2, format, val, val, val, val, val, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_pointer_many_flags) {
    char str1[512];
    char str2[512];

    char *format = "%#-5.10x";
    unsigned val = 858158158;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_pointer_zero) {
    char str1[512];
    char str2[512];

    char *format = "%#x";
    unsigned val = 0;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_pointer_huge) {
    char str1[512];
    char str2[512];

    char *format = "%#x";
    unsigned val = 18571;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_pointer_short) {
    char str1[512];
    char str2[512];

    char *format = "%#hx";
    unsigned short val = 12352;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_pointer_long) {
    char str1[512];
    char str2[512];

    char *format = "%#lx";
    unsigned long val = 18571757371571;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_pointer_one_longer_width) {
    char str1[512];
    char str2[512];

    char *format = "%#2x";
    unsigned val = 1;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_pointer_two_longer_width) {
    char str1[512];
    char str2[512];

    char *format = "%#30x";
    unsigned val = 1;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sprintf_octal) {
    char str1[1024];
    char str2[1024];

    char *format = "%lo";
    long int val = 84518;
    ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(sscanf_d) {
    char str1[1024];
    char *format = "%d";
    int x = 0;
    s21_sscanf(str1, format, x);
} END_TEST

void part1_tests(TCase *tc1_1) {
    tcase_add_test(tc1_1, memchr_1);
    tcase_add_test(tc1_1, memchr_2);
    tcase_add_test(tc1_1, memchr_3);
    tcase_add_test(tc1_1, memchr_4);
    tcase_add_test(tc1_1, memchr_5);
    tcase_add_test(tc1_1, memchr_6);
    tcase_add_test(tc1_1, memchr_7);
    tcase_add_test(tc1_1, memchr_8);
    tcase_add_test(tc1_1, memchr_9);
    tcase_add_test(tc1_1, memchr_10);
    tcase_add_test(tc1_1, memchr_11);
    tcase_add_test(tc1_1, memchr_12);
    tcase_add_test(tc1_1, memchr_13);
    tcase_add_test(tc1_1, memchr_14);
    tcase_add_test(tc1_1, memchr_15);
    tcase_add_test(tc1_1, memchr_16);
    tcase_add_test(tc1_1, memchr_17);
    tcase_add_test(tc1_1, memchr_18);
    tcase_add_test(tc1_1, memchr_19);
    tcase_add_test(tc1_1, memchr_20);
    tcase_add_test(tc1_1, memchr_21);
    tcase_add_test(tc1_1, memchr_22);
    tcase_add_test(tc1_1, memchr_23);
    tcase_add_test(tc1_1, memchr_24);
    tcase_add_test(tc1_1, memchr_25);
    tcase_add_test(tc1_1, memchr_26);
    tcase_add_test(tc1_1, memchr_27);
    tcase_add_test(tc1_1, memchr_28);
    tcase_add_test(tc1_1, memchr_29);
    tcase_add_test(tc1_1, memchr_30);
    tcase_add_test(tc1_1, memchr_31);
    tcase_add_test(tc1_1, memchr_32);
    tcase_add_test(tc1_1, memchr_33);
    tcase_add_test(tc1_1, memchr_34);
    tcase_add_test(tc1_1, memchr_35);
    tcase_add_test(tc1_1, memchr_36);
    tcase_add_test(tc1_1, memchr_37);
    tcase_add_test(tc1_1, memchr_38);
    tcase_add_test(tc1_1, memchr_39);
    tcase_add_test(tc1_1, memchr_40);
    tcase_add_test(tc1_1, memchr_41);
    tcase_add_test(tc1_1, memchr_42);
    tcase_add_test(tc1_1, memchr_43);
    tcase_add_test(tc1_1, memcmp_1);
    tcase_add_test(tc1_1, memcmp_2);
    tcase_add_test(tc1_1, memcmp_3);
    tcase_add_test(tc1_1, memcmp_4);
    tcase_add_test(tc1_1, memcmp_5);
    tcase_add_test(tc1_1, memcmp_6);
    tcase_add_test(tc1_1, memcmp_7);
    tcase_add_test(tc1_1, memcmp_8);
    tcase_add_test(tc1_1, memcmp_9);
    tcase_add_test(tc1_1, memcmp_10);
    tcase_add_test(tc1_1, memcmp_11);
    tcase_add_test(tc1_1, memcmp_12);
    tcase_add_test(tc1_1, memcmp_13);
    tcase_add_test(tc1_1, memcmp_14);
    tcase_add_test(tc1_1, memcmp_15);
    tcase_add_test(tc1_1, memcmp_16);
    tcase_add_test(tc1_1, memcmp_17);
    tcase_add_test(tc1_1, memcmp_18);
    tcase_add_test(tc1_1, memcmp_19);
    tcase_add_test(tc1_1, memcmp_20);
    tcase_add_test(tc1_1, memcmp_21);
    tcase_add_test(tc1_1, memcmp_22);
    tcase_add_test(tc1_1, memcmp_23);
    tcase_add_test(tc1_1, memcmp_24);
    tcase_add_test(tc1_1, memcmp_25);
    tcase_add_test(tc1_1, memcmp_26);
    tcase_add_test(tc1_1, memcmp_27);
    tcase_add_test(tc1_1, memcmp_28);
    tcase_add_test(tc1_1, memcmp_29);
    tcase_add_test(tc1_1, memcmp_30);
    tcase_add_test(tc1_1, memcmp_31);
    tcase_add_test(tc1_1, memcmp_32);
    tcase_add_test(tc1_1, memcmp_33);
    tcase_add_test(tc1_1, memcmp_34);
    tcase_add_test(tc1_1, memcmp_35);
    tcase_add_test(tc1_1, memcmp_36);
    tcase_add_test(tc1_1, memcmp_37);
    tcase_add_test(tc1_1, memcmp_38);
    tcase_add_test(tc1_1, memcmp_39);
    tcase_add_test(tc1_1, memcmp_50);
    tcase_add_test(tc1_1, memcmp_51);
    tcase_add_test(tc1_1, memcmp_52);
    tcase_add_test(tc1_1, memcmp_53);
    tcase_add_test(tc1_1, memcmp_54);
    tcase_add_test(tc1_1, memcmp_55);
    tcase_add_test(tc1_1, memcmp_56);
    tcase_add_test(tc1_1, memcmp_57);
    tcase_add_test(tc1_1, memcmp_58);
    tcase_add_test(tc1_1, memcmp_59);
    tcase_add_test(tc1_1, memcmp_60);
    tcase_add_test(tc1_1, memcpy_1);
    tcase_add_test(tc1_1, memcpy_2);
    tcase_add_test(tc1_1, memcpy_3);
    tcase_add_test(tc1_1, memcpy_4);
    tcase_add_test(tc1_1, memcpy_5);
    tcase_add_test(tc1_1, memcpy_6);
    tcase_add_test(tc1_1, memcpy_7);
    tcase_add_test(tc1_1, memcpy_8);
    tcase_add_test(tc1_1, memcpy_9);
    tcase_add_test(tc1_1, memcpy_10);
    tcase_add_test(tc1_1, memcpy_11);
    tcase_add_test(tc1_1, memcpy_12);
    tcase_add_test(tc1_1, memcpy_13);
    tcase_add_test(tc1_1, memcpy_14);
    tcase_add_test(tc1_1, memcpy_15);
    tcase_add_test(tc1_1, memcpy_16);
    tcase_add_test(tc1_1, memcpy_17);
    tcase_add_test(tc1_1, memcpy_18);
    tcase_add_test(tc1_1, memcpy_19);
    tcase_add_test(tc1_1, memcpy_20);
    tcase_add_test(tc1_1, memmove_1);
    tcase_add_test(tc1_1, memmove_2);
    tcase_add_test(tc1_1, memmove_3);
    tcase_add_test(tc1_1, memmove_4);
    tcase_add_test(tc1_1, memmove_5);
    tcase_add_test(tc1_1, memmove_6);
    tcase_add_test(tc1_1, memmove_7);
    tcase_add_test(tc1_1, memmove_8);
    tcase_add_test(tc1_1, memmove_9);
    tcase_add_test(tc1_1, memmove_10);
    tcase_add_test(tc1_1, memmove_11);
    tcase_add_test(tc1_1, memmove_12);
    tcase_add_test(tc1_1, memmove_13);
    tcase_add_test(tc1_1, memmove_14);
    tcase_add_test(tc1_1, memmove_15);
    tcase_add_test(tc1_1, memmove_16);
    tcase_add_test(tc1_1, memmove_17);
    tcase_add_test(tc1_1, memmove_18);
    tcase_add_test(tc1_1, memmove_19);
    tcase_add_test(tc1_1, memmove_20);
    tcase_add_test(tc1_1, memmove_21);
    tcase_add_test(tc1_1, memmove_22);
    tcase_add_test(tc1_1, memmove_23);
    tcase_add_test(tc1_1, memmove_24);
    tcase_add_test(tc1_1, memmove_25);
    tcase_add_test(tc1_1, memmove_26);
    tcase_add_test(tc1_1, memset_1);
    tcase_add_test(tc1_1, memset_2);
    tcase_add_test(tc1_1, memset_3);
    tcase_add_test(tc1_1, memset_4);
    tcase_add_test(tc1_1, memset_5);
    tcase_add_test(tc1_1, memset_6);
    tcase_add_test(tc1_1, memset_7);
    tcase_add_test(tc1_1, memset_8);
    tcase_add_test(tc1_1, memset_9);
    tcase_add_test(tc1_1, memset_10);
    tcase_add_test(tc1_1, memset_11);
    tcase_add_test(tc1_1, memset_12);
    tcase_add_test(tc1_1, memset_13);
    tcase_add_test(tc1_1, memset_14);
    tcase_add_test(tc1_1, memset_15);
    tcase_add_test(tc1_1, memset_16);
    tcase_add_test(tc1_1, memset_17);
    tcase_add_test(tc1_1, memset_18);
    tcase_add_test(tc1_1, memset_19);
    tcase_add_test(tc1_1, memset_20);
    tcase_add_test(tc1_1, memset_21);
    tcase_add_test(tc1_1, memset_22);
    tcase_add_test(tc1_1, memset_23);
    tcase_add_test(tc1_1, memset_24);
    tcase_add_test(tc1_1, memset_25);
    tcase_add_test(tc1_1, memset_26);
    tcase_add_test(tc1_1, memset_27);
    tcase_add_test(tc1_1, memset_28);
    tcase_add_test(tc1_1, memset_29);
    tcase_add_test(tc1_1, memset_30);
    tcase_add_test(tc1_1, memset_31);
    tcase_add_test(tc1_1, memset_32);
    tcase_add_test(tc1_1, memset_33);
    tcase_add_test(tc1_1, memset_34);
    tcase_add_test(tc1_1, memset_35);
    tcase_add_test(tc1_1, memset_36);
    tcase_add_test(tc1_1, memset_37);
    tcase_add_test(tc1_1, memset_38);
    tcase_add_test(tc1_1, memset_39);
    tcase_add_test(tc1_1, memset_40);
    tcase_add_test(tc1_1, memset_41);
    tcase_add_test(tc1_1, memset_42);
    tcase_add_test(tc1_1, memset_43);
    tcase_add_test(tc1_1, memset_44);
    tcase_add_test(tc1_1, memset_45);
    tcase_add_test(tc1_1, memset_46);
    tcase_add_test(tc1_1, strcat_1);
    tcase_add_test(tc1_1, strcat_2);
    tcase_add_test(tc1_1, strcat_3);
    tcase_add_test(tc1_1, strcat_4);
    tcase_add_test(tc1_1, strcat_5);
    tcase_add_test(tc1_1, strcat_6);
    tcase_add_test(tc1_1, strcat_7);
    tcase_add_test(tc1_1, strcat_8);
    tcase_add_test(tc1_1, strcat_9);
    tcase_add_test(tc1_1, strcat_10);
    tcase_add_test(tc1_1, strcat_11);
    tcase_add_test(tc1_1, strcat_12);
    tcase_add_test(tc1_1, strcat_13);
    tcase_add_test(tc1_1, strcat_14);
    tcase_add_test(tc1_1, strcat_15);
    tcase_add_test(tc1_1, strcat_16);
    tcase_add_test(tc1_1, strcat_17);
    tcase_add_test(tc1_1, strcat_18);
    tcase_add_test(tc1_1, strcat_19);
    tcase_add_test(tc1_1, strcat_20);
    tcase_add_test(tc1_1, strncat_1);
    tcase_add_test(tc1_1, strncat_2);
    tcase_add_test(tc1_1, strncat_3);
    tcase_add_test(tc1_1, strncat_4);
    tcase_add_test(tc1_1, strncat_5);
    tcase_add_test(tc1_1, strncat_6);
    tcase_add_test(tc1_1, strncat_7);
    tcase_add_test(tc1_1, strncat_8);
    tcase_add_test(tc1_1, strncat_9);
    tcase_add_test(tc1_1, strncat_10);
    tcase_add_test(tc1_1, strncat_11);
    tcase_add_test(tc1_1, strncat_12);
    tcase_add_test(tc1_1, strncat_13);
    tcase_add_test(tc1_1, strncat_14);
    tcase_add_test(tc1_1, strncat_16);
    tcase_add_test(tc1_1, strncat_17);
    tcase_add_test(tc1_1, strncat_18);
    tcase_add_test(tc1_1, strncat_19);
    tcase_add_test(tc1_1, strncat_20);
    tcase_add_test(tc1_1, strchr_1);
    tcase_add_test(tc1_1, strchr_2);
    tcase_add_test(tc1_1, strchr_3);
    tcase_add_test(tc1_1, strchr_4);
    tcase_add_test(tc1_1, strchr_5);
    tcase_add_test(tc1_1, strchr_6);
    tcase_add_test(tc1_1, strchr_7);
    tcase_add_test(tc1_1, strchr_8);
    tcase_add_test(tc1_1, strchr_9);
    tcase_add_test(tc1_1, strchr_10);
    tcase_add_test(tc1_1, strchr_11);
    tcase_add_test(tc1_1, strchr_12);
    tcase_add_test(tc1_1, strchr_13);
    tcase_add_test(tc1_1, strchr_14);
    tcase_add_test(tc1_1, strchr_15);
    tcase_add_test(tc1_1, strchr_16);
    tcase_add_test(tc1_1, strchr_17);
    tcase_add_test(tc1_1, strchr_18);
    tcase_add_test(tc1_1, strchr_19);
    tcase_add_test(tc1_1, strchr_20);
    tcase_add_test(tc1_1, strchr_21);
    tcase_add_test(tc1_1, strcmp_1);
    tcase_add_test(tc1_1, strcmp_2);
    tcase_add_test(tc1_1, strcmp_3);
    tcase_add_test(tc1_1, strcmp_4);
    tcase_add_test(tc1_1, strcmp_5);
    tcase_add_test(tc1_1, strcmp_6);
    tcase_add_test(tc1_1, strcmp_7);
    tcase_add_test(tc1_1, strcmp_8);
    tcase_add_test(tc1_1, strcmp_9);
    tcase_add_test(tc1_1, strcmp_10);
    tcase_add_test(tc1_1, strcmp_11);
    tcase_add_test(tc1_1, strcmp_12);
    tcase_add_test(tc1_1, strcmp_13);
    tcase_add_test(tc1_1, strcmp_14);
    tcase_add_test(tc1_1, strcmp_15);
    tcase_add_test(tc1_1, strcmp_16);
    tcase_add_test(tc1_1, strcmp_17);
    tcase_add_test(tc1_1, strcmp_18);
    tcase_add_test(tc1_1, strcmp_19);
    tcase_add_test(tc1_1, strcmp_20);
    tcase_add_test(tc1_1, strcmp_21);
    tcase_add_test(tc1_1, strcmp_22);
    tcase_add_test(tc1_1, strcmp_23);
    tcase_add_test(tc1_1, strcmp_24);
    tcase_add_test(tc1_1, strcmp_25);
    tcase_add_test(tc1_1, strcmp_26);
    tcase_add_test(tc1_1, strcmp_27);
    tcase_add_test(tc1_1, strcmp_28);
    tcase_add_test(tc1_1, strcmp_29);
    tcase_add_test(tc1_1, strcmp_30);
    tcase_add_test(tc1_1, strncmp_1);
    tcase_add_test(tc1_1, strncmp_2);
    tcase_add_test(tc1_1, strncmp_3);
    tcase_add_test(tc1_1, strncmp_4);
    tcase_add_test(tc1_1, strncmp_5);
    tcase_add_test(tc1_1, strncmp_6);
    tcase_add_test(tc1_1, strncmp_7);
    tcase_add_test(tc1_1, strncmp_8);
    tcase_add_test(tc1_1, strncmp_9);
    tcase_add_test(tc1_1, strncmp_10);
    tcase_add_test(tc1_1, strncmp_11);
    tcase_add_test(tc1_1, strncmp_12);
    tcase_add_test(tc1_1, strncmp_13);
    tcase_add_test(tc1_1, strncmp_14);
    tcase_add_test(tc1_1, strncmp_15);
    tcase_add_test(tc1_1, strncmp_16);
    tcase_add_test(tc1_1, strncmp_17);
    tcase_add_test(tc1_1, strncmp_18);
    tcase_add_test(tc1_1, strncmp_19);
    tcase_add_test(tc1_1, strncmp_20);
    tcase_add_test(tc1_1, strncmp_21);
    tcase_add_test(tc1_1, strncmp_22);
    tcase_add_test(tc1_1, strncmp_23);
    tcase_add_test(tc1_1, strncmp_24);
    tcase_add_test(tc1_1, strncmp_25);
    tcase_add_test(tc1_1, strncmp_26);
    tcase_add_test(tc1_1, strncmp_27);
    tcase_add_test(tc1_1, strncmp_28);
    tcase_add_test(tc1_1, strncmp_29);
    tcase_add_test(tc1_1, strncmp_30);
    tcase_add_test(tc1_1, strncmp_31);
    tcase_add_test(tc1_1, strncmp_32);
    tcase_add_test(tc1_1, strncmp_33);
    tcase_add_test(tc1_1, strncmp_34);
    tcase_add_test(tc1_1, strncmp_35);
    tcase_add_test(tc1_1, strncmp_36);
    tcase_add_test(tc1_1, strncmp_37);
    tcase_add_test(tc1_1, strncmp_38);
    tcase_add_test(tc1_1, strncmp_39);
    tcase_add_test(tc1_1, strncmp_40);
    tcase_add_test(tc1_1, strncmp_41);
    tcase_add_test(tc1_1, strncmp_42);
    tcase_add_test(tc1_1, strncmp_43);
    tcase_add_test(tc1_1, strncmp_44);
    tcase_add_test(tc1_1, strncmp_45);
    tcase_add_test(tc1_1, strncmp_46);
    tcase_add_test(tc1_1, strncmp_47);
    tcase_add_test(tc1_1, strncmp_48);
    tcase_add_test(tc1_1, strncmp_49);
    tcase_add_test(tc1_1, strncmp_50);
    tcase_add_test(tc1_1, strncmp_51);
    tcase_add_test(tc1_1, strncmp_52);
    tcase_add_test(tc1_1, strncmp_53);
    tcase_add_test(tc1_1, strncmp_54);
    tcase_add_test(tc1_1, strncmp_55);
    tcase_add_test(tc1_1, strncmp_56);
    tcase_add_test(tc1_1, strncmp_57);
    tcase_add_test(tc1_1, strncmp_58);
    tcase_add_test(tc1_1, strncmp_59);
    tcase_add_test(tc1_1, strncmp_60);
    tcase_add_test(tc1_1, strcpy_1);
    tcase_add_test(tc1_1, strcpy_2);
    tcase_add_test(tc1_1, strcpy_3);
    tcase_add_test(tc1_1, strcpy_4);
    tcase_add_test(tc1_1, strcpy_5);
    tcase_add_test(tc1_1, strcpy_6);
    tcase_add_test(tc1_1, strcpy_7);
    tcase_add_test(tc1_1, strcpy_8);
    tcase_add_test(tc1_1, strcpy_9);
    tcase_add_test(tc1_1, strcpy_10);
    tcase_add_test(tc1_1, strcpy_11);
    tcase_add_test(tc1_1, strcpy_12);
    tcase_add_test(tc1_1, strcpy_13);
    tcase_add_test(tc1_1, strcpy_14);
    tcase_add_test(tc1_1, strcpy_15);
    tcase_add_test(tc1_1, strcpy_16);
    tcase_add_test(tc1_1, strcpy_17);
    tcase_add_test(tc1_1, strcpy_18);
    tcase_add_test(tc1_1, strcpy_19);
    tcase_add_test(tc1_1, strcpy_20);
    tcase_add_test(tc1_1, strncpy_1);
    tcase_add_test(tc1_1, strncpy_2);
    tcase_add_test(tc1_1, strncpy_3);
    tcase_add_test(tc1_1, strncpy_4);
    tcase_add_test(tc1_1, strncpy_5);
    tcase_add_test(tc1_1, strncpy_6);
    tcase_add_test(tc1_1, strncpy_7);
    tcase_add_test(tc1_1, strncpy_8);
    tcase_add_test(tc1_1, strncpy_9);
    tcase_add_test(tc1_1, strncpy_10);
    tcase_add_test(tc1_1, strncpy_11);
    tcase_add_test(tc1_1, strncpy_12);
    tcase_add_test(tc1_1, strncpy_13);
    tcase_add_test(tc1_1, strncpy_14);
    tcase_add_test(tc1_1, strncpy_15);
    tcase_add_test(tc1_1, strncpy_16);
    tcase_add_test(tc1_1, strncpy_17);
    tcase_add_test(tc1_1, strncpy_18);
    tcase_add_test(tc1_1, strncpy_19);
    tcase_add_test(tc1_1, strncpy_20);
    tcase_add_test(tc1_1, strcspn_1);
    tcase_add_test(tc1_1, strcspn_2);
    tcase_add_test(tc1_1, strcspn_3);
    tcase_add_test(tc1_1, strcspn_4);
    tcase_add_test(tc1_1, strcspn_5);
    tcase_add_test(tc1_1, strcspn_6);
    tcase_add_test(tc1_1, strcspn_7);
    tcase_add_test(tc1_1, strcspn_8);
    tcase_add_test(tc1_1, strcspn_9);
    tcase_add_test(tc1_1, strcspn_10);
    tcase_add_test(tc1_1, strcspn_11);
    tcase_add_test(tc1_1, strcspn_12);
    tcase_add_test(tc1_1, strcspn_13);
    tcase_add_test(tc1_1, strcspn_14);
    tcase_add_test(tc1_1, strcspn_15);
    tcase_add_test(tc1_1, strcspn_16);
    tcase_add_test(tc1_1, strcspn_17);
    tcase_add_test(tc1_1, strcspn_18);
    tcase_add_test(tc1_1, strcspn_19);
    tcase_add_test(tc1_1, strcspn_20);
    tcase_add_test(tc1_1, strcspn_21);
    tcase_add_test(tc1_1, strcspn_22);
    tcase_add_test(tc1_1, strcspn_23);
    tcase_add_test(tc1_1, strcspn_24);
    tcase_add_test(tc1_1, strcspn_25);
    tcase_add_test(tc1_1, strcspn_26);
    tcase_add_test(tc1_1, strcspn_27);
    tcase_add_test(tc1_1, strcspn_28);
    tcase_add_test(tc1_1, strcspn_29);
    tcase_add_test(tc1_1, strcspn_30);
    tcase_add_test(tc1_1, strlen_1);
    tcase_add_test(tc1_1, strlen_2);
    tcase_add_test(tc1_1, strlen_3);
    tcase_add_test(tc1_1, strlen_4);
    tcase_add_test(tc1_1, strlen_5);
    tcase_add_test(tc1_1, strlen_6);
    tcase_add_test(tc1_1, strlen_7);
    tcase_add_test(tc1_1, strlen_8);
    tcase_add_test(tc1_1, strlen_9);
    tcase_add_test(tc1_1, strlen_10);
    tcase_add_test(tc1_1, strlen_11);
    tcase_add_test(tc1_1, strlen_12);
    tcase_add_test(tc1_1, strlen_13);
    tcase_add_test(tc1_1, strlen_14);
    tcase_add_test(tc1_1, strlen_15);
    tcase_add_test(tc1_1, strlen_16);
    tcase_add_test(tc1_1, strlen_17);
    tcase_add_test(tc1_1, strlen_18);
    tcase_add_test(tc1_1, strlen_19);
    tcase_add_test(tc1_1, strlen_20);
    tcase_add_test(tc1_1, strpbrk_1);
    tcase_add_test(tc1_1, strpbrk_2);
    tcase_add_test(tc1_1, strpbrk_3);
    tcase_add_test(tc1_1, strpbrk_4);
    tcase_add_test(tc1_1, strpbrk_5);
    tcase_add_test(tc1_1, strpbrk_6);
    tcase_add_test(tc1_1, strpbrk_7);
    tcase_add_test(tc1_1, strpbrk_8);
    tcase_add_test(tc1_1, strpbrk_9);
    tcase_add_test(tc1_1, strpbrk_10);
    tcase_add_test(tc1_1, strpbrk_11);
    tcase_add_test(tc1_1, strpbrk_12);
    tcase_add_test(tc1_1, strpbrk_13);
    tcase_add_test(tc1_1, strpbrk_14);
    tcase_add_test(tc1_1, strpbrk_15);
    tcase_add_test(tc1_1, strpbrk_16);
    tcase_add_test(tc1_1, strpbrk_17);
    tcase_add_test(tc1_1, strpbrk_18);
    tcase_add_test(tc1_1, strpbrk_19);
    tcase_add_test(tc1_1, strpbrk_20);
    tcase_add_test(tc1_1, strpbrk_21);
    tcase_add_test(tc1_1, strpbrk_22);
    tcase_add_test(tc1_1, strpbrk_23);
    tcase_add_test(tc1_1, strpbrk_24);
    tcase_add_test(tc1_1, strpbrk_25);
    tcase_add_test(tc1_1, strpbrk_26);
}

void part2_tests(TCase *tc1_1) {
    tcase_add_test(tc1_1, strpbrk_27);
    tcase_add_test(tc1_1, strpbrk_28);
    tcase_add_test(tc1_1, strpbrk_29);
    tcase_add_test(tc1_1, strpbrk_30);
    tcase_add_test(tc1_1, strpbrk_31);
    tcase_add_test(tc1_1, strpbrk_32);
    tcase_add_test(tc1_1, strpbrk_33);
    tcase_add_test(tc1_1, strpbrk_34);
    tcase_add_test(tc1_1, strpbrk_35);
    tcase_add_test(tc1_1, strpbrk_36);
    tcase_add_test(tc1_1, strpbrk_37);
    tcase_add_test(tc1_1, strpbrk_38);
    tcase_add_test(tc1_1, strpbrk_39);
    tcase_add_test(tc1_1, strpbrk_40);
    tcase_add_test(tc1_1, strrchr_1);
    tcase_add_test(tc1_1, strrchr_2);
    tcase_add_test(tc1_1, strrchr_3);
    tcase_add_test(tc1_1, strrchr_4);
    tcase_add_test(tc1_1, strrchr_5);
    tcase_add_test(tc1_1, strrchr_6);
    tcase_add_test(tc1_1, strrchr_7);
    tcase_add_test(tc1_1, strrchr_8);
    tcase_add_test(tc1_1, strrchr_9);
    tcase_add_test(tc1_1, strrchr_10);
    tcase_add_test(tc1_1, strrchr_11);
    tcase_add_test(tc1_1, strrchr_12);
    tcase_add_test(tc1_1, strrchr_13);
    tcase_add_test(tc1_1, strrchr_14);
    tcase_add_test(tc1_1, strrchr_15);
    tcase_add_test(tc1_1, strrchr_16);
    tcase_add_test(tc1_1, strrchr_17);
    tcase_add_test(tc1_1, strrchr_18);
    tcase_add_test(tc1_1, strrchr_19);
    tcase_add_test(tc1_1, strrchr_20);
    tcase_add_test(tc1_1, strspn_1);
    tcase_add_test(tc1_1, strspn_2);
    tcase_add_test(tc1_1, strspn_3);
    tcase_add_test(tc1_1, strspn_4);
    tcase_add_test(tc1_1, strspn_5);
    tcase_add_test(tc1_1, strspn_6);
    tcase_add_test(tc1_1, strspn_7);
    tcase_add_test(tc1_1, strspn_8);
    tcase_add_test(tc1_1, strspn_9);
    tcase_add_test(tc1_1, strspn_10);
    tcase_add_test(tc1_1, strspn_11);
    tcase_add_test(tc1_1, strspn_12);
    tcase_add_test(tc1_1, strspn_13);
    tcase_add_test(tc1_1, strspn_14);
    tcase_add_test(tc1_1, strspn_15);
    tcase_add_test(tc1_1, strspn_16);
    tcase_add_test(tc1_1, strspn_17);
    tcase_add_test(tc1_1, strspn_18);
    tcase_add_test(tc1_1, strspn_19);
    tcase_add_test(tc1_1, strspn_20);
    tcase_add_test(tc1_1, strspn_21);
    tcase_add_test(tc1_1, strspn_22);
    tcase_add_test(tc1_1, strspn_23);
    tcase_add_test(tc1_1, strspn_24);
    tcase_add_test(tc1_1, strspn_25);
    tcase_add_test(tc1_1, strspn_26);
    tcase_add_test(tc1_1, strspn_27);
    tcase_add_test(tc1_1, strspn_28);
    tcase_add_test(tc1_1, strspn_29);
    tcase_add_test(tc1_1, strspn_30);
    tcase_add_test(tc1_1, strspn_31);
    tcase_add_test(tc1_1, strstr_1);
    tcase_add_test(tc1_1, strstr_2);
    tcase_add_test(tc1_1, strstr_3);
    tcase_add_test(tc1_1, strstr_4);
    tcase_add_test(tc1_1, strstr_5);
    tcase_add_test(tc1_1, strstr_6);
    tcase_add_test(tc1_1, strstr_7);
    tcase_add_test(tc1_1, strstr_8);
    tcase_add_test(tc1_1, strstr_9);
    tcase_add_test(tc1_1, strstr_10);
    tcase_add_test(tc1_1, strstr_11);
    tcase_add_test(tc1_1, strstr_12);
    tcase_add_test(tc1_1, strstr_13);
    tcase_add_test(tc1_1, strstr_14);
    tcase_add_test(tc1_1, strstr_15);
    tcase_add_test(tc1_1, strstr_16);
    tcase_add_test(tc1_1, strstr_17);
    tcase_add_test(tc1_1, strstr_18);
    tcase_add_test(tc1_1, strstr_19);
    tcase_add_test(tc1_1, strstr_20);
    tcase_add_test(tc1_1, strstr_21);
    tcase_add_test(tc1_1, strstr_22);
    tcase_add_test(tc1_1, strstr_23);
    tcase_add_test(tc1_1, strstr_24);
    tcase_add_test(tc1_1, strstr_25);
    tcase_add_test(tc1_1, strstr_26);
    tcase_add_test(tc1_1, strstr_27);
    tcase_add_test(tc1_1, strstr_28);
    tcase_add_test(tc1_1, strstr_29);
    tcase_add_test(tc1_1, strstr_30);
    tcase_add_test(tc1_1, strstr_31);
    tcase_add_test(tc1_1, strstr_32);
    tcase_add_test(tc1_1, strstr_33);
    tcase_add_test(tc1_1, strstr_34);
    tcase_add_test(tc1_1, strstr_35);
    tcase_add_test(tc1_1, strstr_36);
    tcase_add_test(tc1_1, strtok_1);
    tcase_add_test(tc1_1, strtok_2);
    tcase_add_test(tc1_1, strtok_3);
    tcase_add_test(tc1_1, strtok_4);
    tcase_add_test(tc1_1, strtok_5);
    tcase_add_test(tc1_1, strtok_6);
    tcase_add_test(tc1_1, strtok_7);
    tcase_add_test(tc1_1, strtok_8);
    tcase_add_test(tc1_1, strtok_9);
    tcase_add_test(tc1_1, strtok_10);
    tcase_add_test(tc1_1, strtok_11);
    tcase_add_test(tc1_1, strtok_12);
    tcase_add_test(tc1_1, strtok_13);
    tcase_add_test(tc1_1, strtok_14);
    tcase_add_test(tc1_1, strtok_15);
    tcase_add_test(tc1_1, strtok_16);
    tcase_add_test(tc1_1, strtok_17);
    tcase_add_test(tc1_1, strtok_18);
    tcase_add_test(tc1_1, strtok_19);
    tcase_add_test(tc1_1, strtok_20);
    tcase_add_test(tc1_1, strtok_21);
    tcase_add_test(tc1_1, strtok_22);
    tcase_add_test(tc1_1, strtok_23);
    tcase_add_test(tc1_1, strtok_24);
    tcase_add_test(tc1_1, strtok_25);
    tcase_add_test(tc1_1, strtok_26);
    tcase_add_test(tc1_1, strtok_27);
    tcase_add_test(tc1_1, strtok_28);
    tcase_add_test(tc1_1, strtok_29);
    tcase_add_test(tc1_1, strtok_30);
    tcase_add_test(tc1_1, s21_to_upper_1);
    tcase_add_test(tc1_1, s21_to_upper_2);
    tcase_add_test(tc1_1, s21_to_upper_3);
    tcase_add_test(tc1_1, s21_to_upper_4);
    tcase_add_test(tc1_1, s21_to_upper_5);
    tcase_add_test(tc1_1, s21_to_upper_6);
    tcase_add_test(tc1_1, s21_to_upper_7);
    tcase_add_test(tc1_1, s21_to_upper_8);
    tcase_add_test(tc1_1, s21_to_upper_9);
    tcase_add_test(tc1_1, s21_to_upper_10);
    tcase_add_test(tc1_1, s21_to_upper_11);
    tcase_add_test(tc1_1, s21_to_upper_12);
    tcase_add_test(tc1_1, s21_to_upper_13);
    tcase_add_test(tc1_1, s21_to_upper_14);
    tcase_add_test(tc1_1, s21_to_upper_15);
    tcase_add_test(tc1_1, s21_to_upper_16);
    tcase_add_test(tc1_1, s21_to_upper_17);
    tcase_add_test(tc1_1, s21_to_upper_18);
    tcase_add_test(tc1_1, s21_to_upper_19);
    tcase_add_test(tc1_1, s21_to_upper_20);
    tcase_add_test(tc1_1, s21_to_upper_21);
    tcase_add_test(tc1_1, s21_to_upper_22);
    tcase_add_test(tc1_1, s21_to_upper_23);
    tcase_add_test(tc1_1, s21_to_upper_24);
    tcase_add_test(tc1_1, s21_to_upper_25);
    tcase_add_test(tc1_1, s21_to_lower_1);
    tcase_add_test(tc1_1, s21_to_lower_2);
    tcase_add_test(tc1_1, s21_to_lower_3);
    tcase_add_test(tc1_1, s21_to_lower_4);
    tcase_add_test(tc1_1, s21_to_lower_5);
    tcase_add_test(tc1_1, s21_to_lower_6);
    tcase_add_test(tc1_1, s21_to_lower_7);
    tcase_add_test(tc1_1, s21_to_lower_8);
    tcase_add_test(tc1_1, s21_to_lower_9);
    tcase_add_test(tc1_1, s21_to_lower_10);
    tcase_add_test(tc1_1, s21_to_lower_11);
    tcase_add_test(tc1_1, s21_to_lower_12);
    tcase_add_test(tc1_1, s21_to_lower_13);
    tcase_add_test(tc1_1, s21_to_lower_14);
    tcase_add_test(tc1_1, s21_to_lower_15);
    tcase_add_test(tc1_1, s21_to_lower_16);
    tcase_add_test(tc1_1, s21_to_lower_17);
    tcase_add_test(tc1_1, s21_to_lower_18);
    tcase_add_test(tc1_1, s21_to_lower_19);
    tcase_add_test(tc1_1, s21_to_lower_20);
    tcase_add_test(tc1_1, s21_insert_1);
    tcase_add_test(tc1_1, s21_insert_2);
    tcase_add_test(tc1_1, s21_insert_3);
    tcase_add_test(tc1_1, s21_insert_4);
    tcase_add_test(tc1_1, s21_insert_5);
    tcase_add_test(tc1_1, s21_insert_6);
    tcase_add_test(tc1_1, s21_insert_7);
    tcase_add_test(tc1_1, s21_insert_8);
    tcase_add_test(tc1_1, s21_insert_9);
    tcase_add_test(tc1_1, s21_insert_10);
    tcase_add_test(tc1_1, s21_insert_11);
    tcase_add_test(tc1_1, s21_insert_12);
    tcase_add_test(tc1_1, s21_insert_13);
    tcase_add_test(tc1_1, s21_trim_1);
    tcase_add_test(tc1_1, s21_trim_2);
    tcase_add_test(tc1_1, s21_trim_3);
    tcase_add_test(tc1_1, s21_trim_4);
    tcase_add_test(tc1_1, s21_trim_5);
    tcase_add_test(tc1_1, s21_trim_6);
    tcase_add_test(tc1_1, s21_trim_7);
    tcase_add_test(tc1_1, s21_trim_8);
    tcase_add_test(tc1_1, s21_trim_9);
    tcase_add_test(tc1_1, s21_trim_10);
    tcase_add_test(tc1_1, s21_trim_11);
    tcase_add_test(tc1_1, s21_trim_12);
    tcase_add_test(tc1_1, s21_trim_13);
    tcase_add_test(tc1_1, s21_trim_14);
    tcase_add_test(tc1_1, s21_trim_15);
    tcase_add_test(tc1_1, s21_trim_16);
    tcase_add_test(tc1_1, s21_trim_17);
    tcase_add_test(tc1_1, s21_trim_18);
    tcase_add_test(tc1_1, s21_trim_19);
    tcase_add_test(tc1_1, s21_trim_20);
    tcase_add_test(tc1_1, s21_trim_21);
    tcase_add_test(tc1_1, s21_trim_22);
    tcase_add_test(tc1_1, s21_trim_23);
    tcase_add_test(tc1_1, s21_trim_24);
    tcase_add_test(tc1_1, s21_trim_25);
    tcase_add_test(tc1_1, strerror_0);
    tcase_add_test(tc1_1, strerror_1);
    tcase_add_test(tc1_1, strerror_2);
    tcase_add_test(tc1_1, strerror_3);
    tcase_add_test(tc1_1, strerror_4);
    tcase_add_test(tc1_1, strerror_5);
    tcase_add_test(tc1_1, strerror_6);
    tcase_add_test(tc1_1, strerror_7);
    tcase_add_test(tc1_1, strerror_8);
    tcase_add_test(tc1_1, strerror_9);
    tcase_add_test(tc1_1, strerror_10);
    tcase_add_test(tc1_1, strerror_11);
    tcase_add_test(tc1_1, strerror_12);
    tcase_add_test(tc1_1, strerror_13);
    tcase_add_test(tc1_1, strerror_14);
    tcase_add_test(tc1_1, strerror_15);
    tcase_add_test(tc1_1, strerror_16);
    tcase_add_test(tc1_1, strerror_17);
    tcase_add_test(tc1_1, strerror_18);
    tcase_add_test(tc1_1, strerror_19);
    tcase_add_test(tc1_1, strerror_20);
    tcase_add_test(tc1_1, strerror_21);
    tcase_add_test(tc1_1, strerror_22);
    tcase_add_test(tc1_1, strerror_23);
    tcase_add_test(tc1_1, strerror_24);
    tcase_add_test(tc1_1, strerror_25);
    tcase_add_test(tc1_1, strerror_26);
    tcase_add_test(tc1_1, strerror_27);
    tcase_add_test(tc1_1, strerror_28);
    tcase_add_test(tc1_1, strerror_29);
    tcase_add_test(tc1_1, strerror_30);
    tcase_add_test(tc1_1, strerror_31);
    tcase_add_test(tc1_1, strerror_32);
    tcase_add_test(tc1_1, strerror_33);
    tcase_add_test(tc1_1, strerror_34);
    tcase_add_test(tc1_1, strerror_35);
    tcase_add_test(tc1_1, strerror_36);
    tcase_add_test(tc1_1, strerror_37);
    tcase_add_test(tc1_1, strerror_38);
    tcase_add_test(tc1_1, strerror_39);
    tcase_add_test(tc1_1, strerror_40);
    tcase_add_test(tc1_1, strerror_41);
    tcase_add_test(tc1_1, strerror_42);
    tcase_add_test(tc1_1, strerror_43);
    tcase_add_test(tc1_1, strerror_44);
    tcase_add_test(tc1_1, strerror_45);
    tcase_add_test(tc1_1, strerror_46);
    tcase_add_test(tc1_1, strerror_47);
    tcase_add_test(tc1_1, strerror_48);
    tcase_add_test(tc1_1, strerror_49);
    tcase_add_test(tc1_1, strerror_50);
    tcase_add_test(tc1_1, strerror_51);
    tcase_add_test(tc1_1, strerror_52);
    tcase_add_test(tc1_1, strerror_53);
    tcase_add_test(tc1_1, strerror_54);
    tcase_add_test(tc1_1, strerror_55);
    tcase_add_test(tc1_1, strerror_56);
    tcase_add_test(tc1_1, strerror_57);
    tcase_add_test(tc1_1, strerror_58);
    tcase_add_test(tc1_1, strerror_59);
    tcase_add_test(tc1_1, strerror_60);
    tcase_add_test(tc1_1, strerror_61);
    tcase_add_test(tc1_1, strerror_62);
    tcase_add_test(tc1_1, strerror_63);
    tcase_add_test(tc1_1, strerror_64);
    tcase_add_test(tc1_1, strerror_65);
    tcase_add_test(tc1_1, strerror_66);
    tcase_add_test(tc1_1, strerror_67);
    tcase_add_test(tc1_1, strerror_68);
    tcase_add_test(tc1_1, strerror_69);
    tcase_add_test(tc1_1, strerror_70);
    tcase_add_test(tc1_1, strerror_71);
    tcase_add_test(tc1_1, strerror_72);
    tcase_add_test(tc1_1, strerror_73);
    tcase_add_test(tc1_1, strerror_74);
    tcase_add_test(tc1_1, strerror_75);
    tcase_add_test(tc1_1, strerror_76);
    tcase_add_test(tc1_1, strerror_77);
    tcase_add_test(tc1_1, strerror_78);
    tcase_add_test(tc1_1, strerror_79);
    tcase_add_test(tc1_1, strerror_80);
    tcase_add_test(tc1_1, strerror_81);
    tcase_add_test(tc1_1, strerror_82);
    tcase_add_test(tc1_1, strerror_83);
    tcase_add_test(tc1_1, strerror_84);
    tcase_add_test(tc1_1, strerror_85);
    tcase_add_test(tc1_1, strerror_86);
    tcase_add_test(tc1_1, strerror_87);
    tcase_add_test(tc1_1, strerror_88);
    tcase_add_test(tc1_1, strerror_89);
    tcase_add_test(tc1_1, strerror_90);
    tcase_add_test(tc1_1, strerror_91);
    tcase_add_test(tc1_1, strerror_92);
    tcase_add_test(tc1_1, strerror_93);
    tcase_add_test(tc1_1, strerror_94);
    tcase_add_test(tc1_1, strerror_95);
    tcase_add_test(tc1_1, strerror_96);
    tcase_add_test(tc1_1, strerror_97);
    tcase_add_test(tc1_1, strerror_98);
    tcase_add_test(tc1_1, strerror_99);
    tcase_add_test(tc1_1, strerror_100);
    tcase_add_test(tc1_1, strerror_101);
    tcase_add_test(tc1_1, strerror_102);
    tcase_add_test(tc1_1, strerror_103);
    tcase_add_test(tc1_1, strerror_104);
    tcase_add_test(tc1_1, strerror_105);
    tcase_add_test(tc1_1, strerror_106);
    tcase_add_test(tc1_1, strerror_107);
    tcase_add_test(tc1_1, strerror_108);
    tcase_add_test(tc1_1, strerror__1);
    tcase_add_test(tc1_1, strerror_109);
    tcase_add_test(tc1_1, sprintf_pr_1);
    tcase_add_test(tc1_1, sprintf_pr_2);
    tcase_add_test(tc1_1, sprintf_c_1);
    tcase_add_test(tc1_1, sprintf_c_2);
    tcase_add_test(tc1_1, sprintf_c_3);
    tcase_add_test(tc1_1, sprintf_c_4);
    tcase_add_test(tc1_1, sprintf_c_5);
    tcase_add_test(tc1_1, sprintf_c_6);
    tcase_add_test(tc1_1, sprintf_c_7);
    tcase_add_test(tc1_1, sprintf_c_8);
    tcase_add_test(tc1_1, sprintf_c_9);
    tcase_add_test(tc1_1, sprintf_c_10);
    tcase_add_test(tc1_1, sprintf_d_1);
    tcase_add_test(tc1_1, sprintf_d_2);
    tcase_add_test(tc1_1, sprintf_d_3);
    tcase_add_test(tc1_1, sprintf_d_4);
    tcase_add_test(tc1_1, sprintf_d_5);
    tcase_add_test(tc1_1, sprintf_d_6);
    tcase_add_test(tc1_1, sprintf_d_7);
    tcase_add_test(tc1_1, sprintf_d_8);
    tcase_add_test(tc1_1, sprintf_d_9);
    tcase_add_test(tc1_1, sprintf_d_10);
    tcase_add_test(tc1_1, sprintf_d_11);
    tcase_add_test(tc1_1, sprintf_d_and_c_1);
    tcase_add_test(tc1_1, sprintf_1);
    tcase_add_test(tc1_1, sprintf_2);
    tcase_add_test(tc1_1, sprintf_3);
    tcase_add_test(tc1_1, sprintf_4);
    tcase_add_test(tc1_1, sprintf_5);
    tcase_add_test(tc1_1, sprintf_6);
    tcase_add_test(tc1_1, sprintf_7);
    tcase_add_test(tc1_1, sprintf_8);
    tcase_add_test(tc1_1, sprintf_9);
    tcase_add_test(tc1_1, sprintf_10);
    tcase_add_test(tc1_1, sprintf_11);
    tcase_add_test(tc1_1, sprintf_12);
    tcase_add_test(tc1_1, sprintf_13);
    tcase_add_test(tc1_1, sprintf_14);
    tcase_add_test(tc1_1, sprintf_15);
    tcase_add_test(tc1_1, sprintf_16);
    tcase_add_test(tc1_1, sprintf_17);
    tcase_add_test(tc1_1, sprintf_18);
    tcase_add_test(tc1_1, sprintf_19);
    tcase_add_test(tc1_1, sprintf_20);
    tcase_add_test(tc1_1, sprintf_21);
    tcase_add_test(tc1_1, sprintf_22);
    tcase_add_test(tc1_1, sprintf_23);
    tcase_add_test(tc1_1, sprintf_24);
    tcase_add_test(tc1_1, sprintf_25);
    tcase_add_test(tc1_1, sprintf_26);
    tcase_add_test(tc1_1, sprintf_27);
    tcase_add_test(tc1_1, sprintf_28);
    tcase_add_test(tc1_1, sprintf_29);
    tcase_add_test(tc1_1, sprintf_30);
    tcase_add_test(tc1_1, sprintf_31);
    tcase_add_test(tc1_1, sprintf_32);
    tcase_add_test(tc1_1, sprintf_33);
    tcase_add_test(tc1_1, sprintf_34);
    tcase_add_test(tc1_1, sprintf_35);
    tcase_add_test(tc1_1, sprintf_36);
    tcase_add_test(tc1_1, sprintf_37);
    tcase_add_test(tc1_1, sprintf_38);
    tcase_add_test(tc1_1, sprintf_39);
    tcase_add_test(tc1_1, sprintf_40);
    tcase_add_test(tc1_1, sprintf_41);
    tcase_add_test(tc1_1, sprintf_42);
    tcase_add_test(tc1_1, sprintf_43);
    tcase_add_test(tc1_1, sprintf_44);
    tcase_add_test(tc1_1, int_sprintf_pr_1);
    tcase_add_test(tc1_1, int_sprintf_pr_2);
    tcase_add_test(tc1_1, int_sprintf_c_1);
    tcase_add_test(tc1_1, int_sprintf_c_2);
    tcase_add_test(tc1_1, int_sprintf_c_3);
    tcase_add_test(tc1_1, int_sprintf_c_4);
    tcase_add_test(tc1_1, int_sprintf_c_5);
    tcase_add_test(tc1_1, int_sprintf_c_6);
    tcase_add_test(tc1_1, int_sprintf_c_7);
    tcase_add_test(tc1_1, int_sprintf_c_8);
    tcase_add_test(tc1_1, int_sprintf_c_9);
    tcase_add_test(tc1_1, int_sprintf_c_10);
    tcase_add_test(tc1_1, int_sprintf_d_1);
    tcase_add_test(tc1_1, int_sprintf_d_2);
    tcase_add_test(tc1_1, int_sprintf_d_3);
    tcase_add_test(tc1_1, int_sprintf_d_4);
    tcase_add_test(tc1_1, int_sprintf_d_5);
    tcase_add_test(tc1_1, int_sprintf_d_6);
    tcase_add_test(tc1_1, int_sprintf_d_7);
    tcase_add_test(tc1_1, int_sprintf_d_8);
    tcase_add_test(tc1_1, int_sprintf_d_9);
    tcase_add_test(tc1_1, int_sprintf_d_10);
    tcase_add_test(tc1_1, int_sprintf_d_11);
    tcase_add_test(tc1_1, int_sprintf_d_and_c_1);
    tcase_add_test(tc1_1, int_sprintf_1);
    tcase_add_test(tc1_1, int_sprintf_2);
    tcase_add_test(tc1_1, int_sprintf_3);
    tcase_add_test(tc1_1, int_sprintf_4);
    tcase_add_test(tc1_1, int_sprintf_5);
    tcase_add_test(tc1_1, int_sprintf_6);
    tcase_add_test(tc1_1, int_sprintf_7);
    tcase_add_test(tc1_1, int_sprintf_8);
    tcase_add_test(tc1_1, int_sprintf_9);
    tcase_add_test(tc1_1, int_sprintf_10);
    tcase_add_test(tc1_1, int_sprintf_11);
    tcase_add_test(tc1_1, int_sprintf_12);
    tcase_add_test(tc1_1, int_sprintf_13);
    tcase_add_test(tc1_1, int_sprintf_14);
    tcase_add_test(tc1_1, int_sprintf_15);
    tcase_add_test(tc1_1, int_sprintf_16);
    tcase_add_test(tc1_1, int_sprintf_17);
    tcase_add_test(tc1_1, int_sprintf_18);
    tcase_add_test(tc1_1, int_sprintf_19);
    tcase_add_test(tc1_1, int_sprintf_20);
    tcase_add_test(tc1_1, int_sprintf_21);
    tcase_add_test(tc1_1, int_sprintf_22);
    tcase_add_test(tc1_1, sprintf_221);
    tcase_add_test(tc1_1, sprintf_222);
    tcase_add_test(tc1_1, ssprintf_223);
    tcase_add_test(tc1_1, sprintf_224);
    tcase_add_test(tc1_1, sprintf_225);
    tcase_add_test(tc1_1, ssprintf_226);
    tcase_add_test(tc1_1, ssprintf_227);
    tcase_add_test(tc1_1, ssprintf_228);
    tcase_add_test(tc1_1, ssprintf_229);
    tcase_add_test(tc1_1, ssprintf_2210);
    tcase_add_test(tc1_1, ssprintf_2211);
    tcase_add_test(tc1_1, ssprintf_2212);
    tcase_add_test(tc1_1, ssprintf_2213);
    tcase_add_test(tc1_1, ssprintf_2214);
    tcase_add_test(tc1_1, sprintf_231);
    tcase_add_test(tc1_1, sprintf_232);
    tcase_add_test(tc1_1, sprintf_233);
    tcase_add_test(tc1_1, sprintf_234);
    tcase_add_test(tc1_1, sprintf_235);
    tcase_add_test(tc1_1, sprintf_236);
    tcase_add_test(tc1_1, sprintf_237);
    tcase_add_test(tc1_1, sprintf_238);
    tcase_add_test(tc1_1, sprintf_239);
    tcase_add_test(tc1_1, sprintf_2310);
    tcase_add_test(tc1_1, sprintf_2311);
    tcase_add_test(tc1_1, sprintf_2312);
    tcase_add_test(tc1_1, sprintf_2313);
    tcase_add_test(tc1_1, sprintf_2314);
    tcase_add_test(tc1_1, sprintf_2315);
    tcase_add_test(tc1_1, sprintf_2316);
    tcase_add_test(tc1_1, sprintf_2317);
    tcase_add_test(tc1_1, sprintf_2318);
    tcase_add_test(tc1_1, sprintf_2319);
    tcase_add_test(tc1_1, sprintf_2320);
    tcase_add_test(tc1_1, sprintf_2321);
    tcase_add_test(tc1_1, sprintf_2322);
    tcase_add_test(tc1_1, sprintf_2323);
    tcase_add_test(tc1_1, sprintf_2324);
    tcase_add_test(tc1_1, sprintf_2325);
    tcase_add_test(tc1_1, sprintf_2326);
    tcase_add_test(tc1_1, sprintf_2327);
    tcase_add_test(tc1_1, sprintf_2328);
    tcase_add_test(tc1_1, sprintf_2329);
    tcase_add_test(tc1_1, sprintf_2330);
    tcase_add_test(tc1_1, sprintf_2331);
    tcase_add_test(tc1_1, sprintf_2332);
    tcase_add_test(tc1_1, sprintf_2333);
    tcase_add_test(tc1_1, sprintf_2334);
}

void part3_tests(TCase *tc1_1) {
    tcase_add_test(tc1_1, sprintf_2405);
    tcase_add_test(tc1_1, sprintf_070501);
    tcase_add_test(tc1_1, sprintf_070502);
    tcase_add_test(tc1_1, sprintf_070503);
    tcase_add_test(tc1_1, sprintf_070504);
    tcase_add_test(tc1_1, sprintf_070505);
    tcase_add_test(tc1_1, sprintf_070506);
    tcase_add_test(tc1_1, sprintf_070507);
    tcase_add_test(tc1_1, sprintf_070508);
    tcase_add_test(tc1_1, sprintf_070509);
    tcase_add_test(tc1_1, sprintf_070510);
    tcase_add_test(tc1_1, sprintf_070511);
    tcase_add_test(tc1_1, sprintf_070512);
    tcase_add_test(tc1_1, sprintf_070513);
    tcase_add_test(tc1_1, sprintf_2405x);
    tcase_add_test(tc1_1, sprintf_2406x);
    tcase_add_test(tc1_1, sprintf_2408);
    tcase_add_test(tc1_1, sprintf_2409);
    tcase_add_test(tc1_1, sprintf_2410);
    tcase_add_test(tc1_1, sprintf_2411);
    tcase_add_test(tc1_1, sprintf_2412);
    tcase_add_test(tc1_1, sprintf_2413);
    tcase_add_test(tc1_1, sprintf_2414);
    tcase_add_test(tc1_1, sprintf_2415);
    tcase_add_test(tc1_1, sprintf_2416);
    tcase_add_test(tc1_1, sprintf_2417);
    tcase_add_test(tc1_1, sprintf_2418);
    tcase_add_test(tc1_1, sprintf_2419);
    tcase_add_test(tc1_1, sprintf_2420);
    tcase_add_test(tc1_1, sprintf_2421);
    tcase_add_test(tc1_1, sprintf_2423);
    tcase_add_test(tc1_1, sprintf_2427);
    tcase_add_test(tc1_1, sprintf_2428);
    tcase_add_test(tc1_1, sprintf_2429);
    tcase_add_test(tc1_1, sprintf_2430);
    tcase_add_test(tc1_1, sprintf_2431);
    tcase_add_test(tc1_1, sprintf_2433);
    tcase_add_test(tc1_1, sprintf_2434);
    tcase_add_test(tc1_1, sprintf_2436);
    tcase_add_test(tc1_1, sprintf_2708);
    tcase_add_test(tc1_1, sprintf_2709);
    tcase_add_test(tc1_1, sprintf_2710);
    tcase_add_test(tc1_1, sprintf_2711);
    tcase_add_test(tc1_1, sprintf_2712);
    tcase_add_test(tc1_1, sprintf_2713);
    tcase_add_test(tc1_1, sprintf_2714);
    tcase_add_test(tc1_1, sprintf_2715);
    tcase_add_test(tc1_1, sprintf_2716);
    tcase_add_test(tc1_1, sprintf_2717);
    tcase_add_test(tc1_1, sprintf_2718);
    tcase_add_test(tc1_1, sprintf_2719);
    tcase_add_test(tc1_1, sprintf_2720);
    tcase_add_test(tc1_1, sprintf_2721);
    tcase_add_test(tc1_1, sprintf_2722);
    tcase_add_test(tc1_1, sprintf_2723);
    tcase_add_test(tc1_1, sprintf_2724);
    tcase_add_test(tc1_1, sprintf_2725);
    tcase_add_test(tc1_1, sprintf_2726);
    tcase_add_test(tc1_1, sprintf_2727);
    tcase_add_test(tc1_1, sprintf_2728);
    tcase_add_test(tc1_1, sprintf_2729);
    tcase_add_test(tc1_1, sprintf_2730);
    tcase_add_test(tc1_1, sprintf_2731);
    tcase_add_test(tc1_1, sprintf_2732);
    tcase_add_test(tc1_1, sprintf_2733);
    tcase_add_test(tc1_1, sprintf_2734);
    tcase_add_test(tc1_1, sprintf_2735);
    tcase_add_test(tc1_1, sprintf_2736);
    tcase_add_test(tc1_1, sprintf_2737);
    tcase_add_test(tc1_1, sprintf_2738);
    tcase_add_test(tc1_1, sprintf_2739);
    tcase_add_test(tc1_1, sprintf_2740);
    tcase_add_test(tc1_1, sprintf_2741);
    tcase_add_test(tc1_1, sprintf_2742);
    tcase_add_test(tc1_1, sprintf_2743);
    tcase_add_test(tc1_1, sprintf_2744);
    tcase_add_test(tc1_1, sprintf_2745);
    tcase_add_test(tc1_1, sprintf_2746);
    tcase_add_test(tc1_1, sprintf_2747);
    tcase_add_test(tc1_1, sprintf_2748);
    tcase_add_test(tc1_1, sprintf_2749);
    tcase_add_test(tc1_1, sprintf_2750);
    tcase_add_test(tc1_1, sprintf_2751);
    tcase_add_test(tc1_1, sprintf_2752);
    tcase_add_test(tc1_1, sprintf_2753);
    tcase_add_test(tc1_1, sprintf_2754);
    tcase_add_test(tc1_1, sprintf_2755);
    tcase_add_test(tc1_1, sprintf_2756);
    tcase_add_test(tc1_1, sprintf_2757);
    tcase_add_test(tc1_1, sprintf_2758);
    tcase_add_test(tc1_1, sprintf_2759);
    tcase_add_test(tc1_1, sprintf_2760);
    tcase_add_test(tc1_1, sprintf_2761);
    tcase_add_test(tc1_1, sprintf_2762);
    tcase_add_test(tc1_1, sprintf_2763);
    tcase_add_test(tc1_1, sprintf_2764);
    tcase_add_test(tc1_1, sprintf_2765);
    tcase_add_test(tc1_1, sprintf_2766);
    tcase_add_test(tc1_1, sprintf_2767);
    tcase_add_test(tc1_1, sprintf_2768);
    tcase_add_test(tc1_1, sprintf_2769);
    tcase_add_test(tc1_1, sprintf_2770);
    tcase_add_test(tc1_1, sprintf_2771);
    tcase_add_test(tc1_1, sprintf_2772);
    tcase_add_test(tc1_1, sprintf_2773);
    tcase_add_test(tc1_1, sprintf_2774);
    tcase_add_test(tc1_1, sprintf_2775);
    tcase_add_test(tc1_1, sprintf_2776);
    tcase_add_test(tc1_1, sprintf_2777);
    tcase_add_test(tc1_1, sprintf_2778);
    tcase_add_test(tc1_1, sprintf_2779);
    tcase_add_test(tc1_1, sprintf_2780);
    tcase_add_test(tc1_1, sprintf_2781);
    tcase_add_test(tc1_1, sprintf_2782);
    tcase_add_test(tc1_1, sprintf_2783);
    tcase_add_test(tc1_1, sprintf_2784);
    tcase_add_test(tc1_1, sprintf_2785);
    tcase_add_test(tc1_1, sprintf_2786);
    tcase_add_test(tc1_1, sprintf_2786_2);
    tcase_add_test(tc1_1, sprintf_2787);
    tcase_add_test(tc1_1, sprintf_2788);
    tcase_add_test(tc1_1, sprintf_2789);
    tcase_add_test(tc1_1, sprintf_2790);
    tcase_add_test(tc1_1, sprintf_2791);
    tcase_add_test(tc1_1, sprintf_2792);
    tcase_add_test(tc1_1, sprintf_2793);
    tcase_add_test(tc1_1, sprintf_2794);
    tcase_add_test(tc1_1, sprintf_2795);
    tcase_add_test(tc1_1, sprintf_2796);
    tcase_add_test(tc1_1, sprintf_2797);
    tcase_add_test(tc1_1, sprintf_2798);
    tcase_add_test(tc1_1, sprintf_2799);
    tcase_add_test(tc1_1, sprintf_2800);
    tcase_add_test(tc1_1, sprintf_2801);
    tcase_add_test(tc1_1, sprintf_2802);
    tcase_add_test(tc1_1, sprintf_2803);
    tcase_add_test(tc1_1, sprintf_2804);
    tcase_add_test(tc1_1, sprintf_2805);
    tcase_add_test(tc1_1, sprintf_2806);
    tcase_add_test(tc1_1, sprintf_2807);
    tcase_add_test(tc1_1, sprintf_2807_2);
    tcase_add_test(tc1_1, sprintf_2808);
    tcase_add_test(tc1_1, sprintf_2809);
    tcase_add_test(tc1_1, sprintf_2810);
    tcase_add_test(tc1_1, sprintf_2811);
    tcase_add_test(tc1_1, sprintf_2812);
    tcase_add_test(tc1_1, sprintf_2813);
    tcase_add_test(tc1_1, sprintf_2814);
    tcase_add_test(tc1_1, sprintf_2815);
    tcase_add_test(tc1_1, sprintf_2816);
    tcase_add_test(tc1_1, sprintf_2817);
    tcase_add_test(tc1_1, sprintf_2818);
    tcase_add_test(tc1_1, sprintf_2819);
    tcase_add_test(tc1_1, sprintf_2820);
    tcase_add_test(tc1_1, sprintf_2821);
    tcase_add_test(tc1_1, sprintf_2822);
    tcase_add_test(tc1_1, sprintf_2823);
    tcase_add_test(tc1_1, sprintf_2824);
    tcase_add_test(tc1_1, sprintf_2825);
    tcase_add_test(tc1_1, sprintf_2826);
    tcase_add_test(tc1_1, sprintf_2827);
    tcase_add_test(tc1_1, sprintf_2828);
    tcase_add_test(tc1_1, sprintf_2829);
    tcase_add_test(tc1_1, sprintf_2830);
    tcase_add_test(tc1_1, sprintf_2831);
    tcase_add_test(tc1_1, sprintf_2832);
    tcase_add_test(tc1_1, sprintf_2833);
    tcase_add_test(tc1_1, sprintf_2834);
    tcase_add_test(tc1_1, sprintf_2835);
    tcase_add_test(tc1_1, sprintf_2836);
    tcase_add_test(tc1_1, sprintf_2837);
    tcase_add_test(tc1_1, sprintf_2838);
    tcase_add_test(tc1_1, sprintf_2839);
    tcase_add_test(tc1_1, sprintf_2840);
    tcase_add_test(tc1_1, sprintf_2841);
    tcase_add_test(tc1_1, sprintf_2842);
    tcase_add_test(tc1_1, sprintf_2843);
    tcase_add_test(tc1_1, sprintf_2844);
    tcase_add_test(tc1_1, sprintf_2845);
    tcase_add_test(tc1_1, sprintf_2846);
    tcase_add_test(tc1_1, sprintf_2847);
    tcase_add_test(tc1_1, sprintf_2848);
    tcase_add_test(tc1_1, sprintf_2849);
    tcase_add_test(tc1_1, sprintf_2850);
    tcase_add_test(tc1_1, sprintf_2851);
    tcase_add_test(tc1_1, sprintf_2852);
    tcase_add_test(tc1_1, sprintf_2853);
    tcase_add_test(tc1_1, sprintf_2854);
    tcase_add_test(tc1_1, sprintf_2855);
    tcase_add_test(tc1_1, sprintf_2856);
    tcase_add_test(tc1_1, sprintf_2857);
    tcase_add_test(tc1_1, sprintf_2858);
    tcase_add_test(tc1_1, sprintf_2859);
    tcase_add_test(tc1_1, sprintf_2860);
    tcase_add_test(tc1_1, sprintf_2861);
    tcase_add_test(tc1_1, sprintf_2862);
    tcase_add_test(tc1_1, sprintf_2863);
    tcase_add_test(tc1_1, sprintf_2864);
    tcase_add_test(tc1_1, sprintf_2865);
    tcase_add_test(tc1_1, sprintf_2866);
    tcase_add_test(tc1_1, sprintf_2867);
    tcase_add_test(tc1_1, sprintf_2868);
    tcase_add_test(tc1_1, sprintf_2869);
    tcase_add_test(tc1_1, sprintf_2870);
    tcase_add_test(tc1_1, sprintf_2871);
    tcase_add_test(tc1_1, sprintf_2872);
    tcase_add_test(tc1_1, sprintf_2873);
    tcase_add_test(tc1_1, sprintf_2874);
    tcase_add_test(tc1_1, sprintf_2875);
    tcase_add_test(tc1_1, sprintf_2876);
    tcase_add_test(tc1_1, sprintf_2877);
    tcase_add_test(tc1_1, sprintf_2878);
    tcase_add_test(tc1_1, sprintf_2879);
    tcase_add_test(tc1_1, sprintf_2880);
    tcase_add_test(tc1_1, sprintf_2881);
    tcase_add_test(tc1_1, sprintf_2882);
    tcase_add_test(tc1_1, sprintf_2883);
    tcase_add_test(tc1_1, sprintf_2884);
    tcase_add_test(tc1_1, sprintf_2885);
    tcase_add_test(tc1_1, sprintf_2886);
    tcase_add_test(tc1_1, sprintf_2887);
    tcase_add_test(tc1_1, sprintf_2888);
    tcase_add_test(tc1_1, sprintf_2889);
    tcase_add_test(tc1_1, sprintf_2890);
    tcase_add_test(tc1_1, sprintf_2891);
    tcase_add_test(tc1_1, sprintf_2892);
    tcase_add_test(tc1_1, sprintf_2893);
    tcase_add_test(tc1_1, sprintf_2894);
    tcase_add_test(tc1_1, sprintf_2895);
    tcase_add_test(tc1_1, sprintf_2896);
    tcase_add_test(tc1_1, sprintf_2897);
    tcase_add_test(tc1_1, sprintf_2898);
    tcase_add_test(tc1_1, sprintf_2899);
    tcase_add_test(tc1_1, sprintf_2900);
    tcase_add_test(tc1_1, sprintf_2901);
    tcase_add_test(tc1_1, sprintf_2902);
    tcase_add_test(tc1_1, sprintf_2903);
    tcase_add_test(tc1_1, sprintf_2904);
    tcase_add_test(tc1_1, sprintf_2905);
    tcase_add_test(tc1_1, sprintf_2906);
    tcase_add_test(tc1_1, sprintf_3013);
    tcase_add_test(tc1_1, sprintf_3014);
    tcase_add_test(tc1_1, sprintf_3015);
    tcase_add_test(tc1_1, sprintf_3016);
    tcase_add_test(tc1_1, sprintf_3017);
    tcase_add_test(tc1_1, sprintf_3018);
    tcase_add_test(tc1_1, sprintf_3019);
    tcase_add_test(tc1_1, sprintf_3020);
    tcase_add_test(tc1_1, sprintf_3021);
    tcase_add_test(tc1_1, sprintf_3021_2);
    tcase_add_test(tc1_1, sprintf_3022);
    tcase_add_test(tc1_1, sprintf_3023);
    tcase_add_test(tc1_1, sprintf_3024);
    tcase_add_test(tc1_1, sprintf_3025);
    tcase_add_test(tc1_1, sprintf_3026);
    tcase_add_test(tc1_1, sprintf_3027);
    tcase_add_test(tc1_1, sprintf_3028);
    tcase_add_test(tc1_1, sprintf_3029);
    tcase_add_test(tc1_1, sprintf_3030);
    tcase_add_test(tc1_1, sprintf_3031);
    tcase_add_test(tc1_1, sprintf_3032);
    tcase_add_test(tc1_1, sprintf_3033);
    tcase_add_test(tc1_1, sprintf_3034);
    tcase_add_test(tc1_1, sprintf_3035);
    tcase_add_test(tc1_1, sprintf_3036);
    tcase_add_test(tc1_1, sprintf_3037);
    tcase_add_test(tc1_1, sprintf_3038);
    tcase_add_test(tc1_1, sprintf_3039);
    tcase_add_test(tc1_1, sprintf_3040);
    tcase_add_test(tc1_1, sprintf_3041);
    tcase_add_test(tc1_1, sprintf_3072);
    tcase_add_test(tc1_1, sprintf_3073);
    tcase_add_test(tc1_1, sprintf_3074);
    tcase_add_test(tc1_1, sprintf_3075);
    tcase_add_test(tc1_1, sprintf_3076);
    tcase_add_test(tc1_1, sprintf_3077);
    tcase_add_test(tc1_1, sprintf_3078);
    tcase_add_test(tc1_1, sprintf_3079);
    tcase_add_test(tc1_1, sprintf_3080);
    tcase_add_test(tc1_1, sprintf_3081);
    tcase_add_test(tc1_1, sprintf_3082);
    tcase_add_test(tc1_1, sprintf_3083);
    tcase_add_test(tc1_1, sprintf_3084);
    tcase_add_test(tc1_1, sprintf_3085);
    tcase_add_test(tc1_1, sprintf_3086);
    tcase_add_test(tc1_1, sprintf_3087);
    tcase_add_test(tc1_1, sprintf_3088);
    tcase_add_test(tc1_1, sprintf_3089);
    tcase_add_test(tc1_1, sprintf_3090);
    tcase_add_test(tc1_1, sprintf_3091);
    tcase_add_test(tc1_1, sprintf_3092);
    tcase_add_test(tc1_1, sprintf_3093);
    tcase_add_test(tc1_1, sprintf_3094);
    tcase_add_test(tc1_1, sprintf_3095);
    tcase_add_test(tc1_1, sprintf_3096);
    tcase_add_test(tc1_1, sprintf_3097);
    tcase_add_test(tc1_1, sprintf_3098);
    tcase_add_test(tc1_1, sprintf_3099);
    tcase_add_test(tc1_1, sprintf_3100);
    tcase_add_test(tc1_1, sprintf_3101);
    tcase_add_test(tc1_1, sprintf_3132);
    tcase_add_test(tc1_1, sprintf_3133);
    tcase_add_test(tc1_1, sprintf_3134);
    tcase_add_test(tc1_1, sprintf_3135);
    tcase_add_test(tc1_1, sprintf_3136);
    tcase_add_test(tc1_1, sprintf_3137);
    tcase_add_test(tc1_1, sprintf_3138);
    tcase_add_test(tc1_1, sprintf_3139);
    tcase_add_test(tc1_1, sprintf_3140);
    tcase_add_test(tc1_1, sprintf_3141);
    tcase_add_test(tc1_1, sprintf_3142);
    tcase_add_test(tc1_1, sprintf_3143);
    tcase_add_test(tc1_1, sprintf_3144);
    tcase_add_test(tc1_1, sprintf_3145);
    tcase_add_test(tc1_1, sprintf_3146);
    tcase_add_test(tc1_1, sprintf_3147);
    tcase_add_test(tc1_1, sprintf_3148);
    tcase_add_test(tc1_1, sprintf_3149);
    tcase_add_test(tc1_1, sprintf_3150);
    tcase_add_test(tc1_1, sprintf_3151);
    tcase_add_test(tc1_1, sprintf_3152);
    tcase_add_test(tc1_1, sprintf_3153);
    tcase_add_test(tc1_1, sprintf_3154);
    tcase_add_test(tc1_1, sprintf_3155);
    tcase_add_test(tc1_1, sprintf_3156);
    tcase_add_test(tc1_1, sprintf_3157);
    tcase_add_test(tc1_1, sprintf_3158);
    tcase_add_test(tc1_1, sprintf_3159);
    tcase_add_test(tc1_1, sprintf_3160);
    tcase_add_test(tc1_1, sprintf_3161);
    tcase_add_test(tc1_1, sprintf_3192);
    tcase_add_test(tc1_1, sprintf_3193);
    tcase_add_test(tc1_1, sprintf_3194);
    tcase_add_test(tc1_1, sprintf_3195);
    tcase_add_test(tc1_1, sprintf_3196);
    tcase_add_test(tc1_1, sprintf_3197);
    tcase_add_test(tc1_1, sprintf_3198);
    tcase_add_test(tc1_1, sprintf_3199);
    tcase_add_test(tc1_1, sprintf_3200);
    tcase_add_test(tc1_1, sprintf_3201);
    tcase_add_test(tc1_1, sprintf_3202);
    tcase_add_test(tc1_1, sprintf_3203);
    tcase_add_test(tc1_1, sprintf_3204);
    tcase_add_test(tc1_1, sprintf_3205);
    tcase_add_test(tc1_1, sprintf_3206);
    tcase_add_test(tc1_1, sprintf_3207);
    tcase_add_test(tc1_1, sprintf_3208);
    tcase_add_test(tc1_1, sprintf_3209);
    tcase_add_test(tc1_1, sprintf_3210);
    tcase_add_test(tc1_1, sprintf_3211);
    tcase_add_test(tc1_1, sprintf_3212);
    tcase_add_test(tc1_1, sprintf_3213);
    tcase_add_test(tc1_1, sprintf_3214);
    tcase_add_test(tc1_1, sprintf_3215);
    tcase_add_test(tc1_1, sprintf_3216);
    tcase_add_test(tc1_1, sprintf_3217);
    tcase_add_test(tc1_1, sprintf_3218);
    tcase_add_test(tc1_1, sprintf_3219);
    tcase_add_test(tc1_1, sprintf_3220);
    tcase_add_test(tc1_1, sprintf_3221);
    tcase_add_test(tc1_1, sprintf_3373);
    tcase_add_test(tc1_1, sprintf_3374);
    tcase_add_test(tc1_1, sprintf_3375);
    tcase_add_test(tc1_1, sprintf_3376);
    tcase_add_test(tc1_1, sprintf_3377);
    tcase_add_test(tc1_1, sprintf_3378);
    tcase_add_test(tc1_1, sprintf_3379);
    tcase_add_test(tc1_1, sprintf_3380);
    tcase_add_test(tc1_1, sprintf_3381);
    tcase_add_test(tc1_1, sprintf_3382);
    tcase_add_test(tc1_1, sprintf_3383);
    tcase_add_test(tc1_1, sprintf_3384);
    tcase_add_test(tc1_1, sprintf_3385);
    tcase_add_test(tc1_1, sprintf_3386);
    tcase_add_test(tc1_1, sprintf_3387);
    tcase_add_test(tc1_1, sprintf_3388);
    tcase_add_test(tc1_1, sprintf_3389);
    tcase_add_test(tc1_1, sprintf_3390);
    tcase_add_test(tc1_1, sprintf_3391);
    tcase_add_test(tc1_1, sprintf_3392);
    tcase_add_test(tc1_1, sprintf_3393);
    tcase_add_test(tc1_1, sprintf_3394);
    tcase_add_test(tc1_1, sprintf_3395);
    tcase_add_test(tc1_1, sprintf_3396);
    tcase_add_test(tc1_1, sprintf_3397);
    tcase_add_test(tc1_1, sprintf_3398);
    tcase_add_test(tc1_1, sprintf_3399);
    tcase_add_test(tc1_1, sprintf_3400);
    tcase_add_test(tc1_1, sprintf_3401);
    tcase_add_test(tc1_1, sprintf_3402);
    tcase_add_test(tc1_1, sprintf_3523);
    tcase_add_test(tc1_1, sprintf_3525);
    tcase_add_test(tc1_1, sprintf_3535);
    tcase_add_test(tc1_1, sprintf_3554);
    tcase_add_test(tc1_1, sprintf_3555);
    tcase_add_test(tc1_1, sprintf_2708_i);
    tcase_add_test(tc1_1, sprintf_2709_i);
    tcase_add_test(tc1_1, sprintf_2710_i);
    tcase_add_test(tc1_1, sprintf_2711i);
    tcase_add_test(tc1_1, sprintf_2712i);
    tcase_add_test(tc1_1, sprintf_2713i);
    tcase_add_test(tc1_1, sprintf_2714i);
    tcase_add_test(tc1_1, sprintf_2715i);
    tcase_add_test(tc1_1, sprintf_2716i);
    tcase_add_test(tc1_1, sprintf_2717i);
    tcase_add_test(tc1_1, sprintf_2718i);
    tcase_add_test(tc1_1, sprintf_2719i);
    tcase_add_test(tc1_1, sprintf_2720i);
    tcase_add_test(tc1_1, sprintf_2721i);
    tcase_add_test(tc1_1, sprintf_2722i);
    tcase_add_test(tc1_1, sprintf_2723i);
    tcase_add_test(tc1_1, sprintf_2724i);
    tcase_add_test(tc1_1, sprintf_2725i);
    tcase_add_test(tc1_1, sprintf_2726i);
    tcase_add_test(tc1_1, sprintf_2727i);
    tcase_add_test(tc1_1, sprintf_2728i);
    tcase_add_test(tc1_1, sprintf_2729i);
    tcase_add_test(tc1_1, sprintf_2730i);
    tcase_add_test(tc1_1, sprintf_2731i);
    tcase_add_test(tc1_1, sprintf_2732i);
    tcase_add_test(tc1_1, sprintf_2733i);
    tcase_add_test(tc1_1, sprintf_2734i);
    tcase_add_test(tc1_1, sprintf_2735i);
    tcase_add_test(tc1_1, sprintf_2736i);
    tcase_add_test(tc1_1, sprintf_2737i);
    tcase_add_test(tc1_1, sprintf_2738i);
    tcase_add_test(tc1_1, sprintf_2739i);
    tcase_add_test(tc1_1, sprintf_2740i);
    tcase_add_test(tc1_1, sprintf_2741i);
    tcase_add_test(tc1_1, sprintf_2742i);
    tcase_add_test(tc1_1, sprintf_2743i);
    tcase_add_test(tc1_1, sprintf_2744i);
    tcase_add_test(tc1_1, sprintf_2745i);
    tcase_add_test(tc1_1, sprintf_2746i);
    tcase_add_test(tc1_1, sprintf_2747i);
    tcase_add_test(tc1_1, sprintf_2748i);
    tcase_add_test(tc1_1, sprintf_2749i);
    tcase_add_test(tc1_1, sprintf_i_2750_i);
    tcase_add_test(tc1_1, sprintf_i_2751_i);
    tcase_add_test(tc1_1, sprintf_i_2752_i);
    tcase_add_test(tc1_1, sprintf_i_2753_i);
    tcase_add_test(tc1_1, sprintf_i_2754_i);
    tcase_add_test(tc1_1, sprintf_i_2755_i);
    tcase_add_test(tc1_1, sprintf_i_2756_i);
    tcase_add_test(tc1_1, sprintf_i_2757_i);
    tcase_add_test(tc1_1, sprintf_i_2758_i);
    tcase_add_test(tc1_1, sprintf_i_2759_i);
    tcase_add_test(tc1_1, sprintf_i_2760_i);
    tcase_add_test(tc1_1, sprintf_i_2761_i);
    tcase_add_test(tc1_1, sprintf_i_2762_i);
    tcase_add_test(tc1_1, sprintf_i_2763_i);
    tcase_add_test(tc1_1, sprintf_i_2764_i);
    tcase_add_test(tc1_1, sprintf_i_2765_i);
    tcase_add_test(tc1_1, sprintf_i_2766_i);
    tcase_add_test(tc1_1, sprintf_i_2767_i);
    tcase_add_test(tc1_1, sprintf_i_2768_i);
    tcase_add_test(tc1_1, sprintf_i_2769_i);
    tcase_add_test(tc1_1, sprintf_i_2770_i);
    tcase_add_test(tc1_1, sprintf_i_2771_i);
    tcase_add_test(tc1_1, sprintf_i_2772_i);
    tcase_add_test(tc1_1, sprintf_i_2773_i);
    tcase_add_test(tc1_1, sprintf_i_2774_i);
    tcase_add_test(tc1_1, sprintf_i_2775_i);
    tcase_add_test(tc1_1, sprintf_i_2776_i);
    tcase_add_test(tc1_1, sprintf_i_2777_i);
}

void part4_tests(TCase *tc1_1) {
    tcase_add_test(tc1_1, sprintf_i_2778_i);
    tcase_add_test(tc1_1, sprintf_i_2779_i);
    tcase_add_test(tc1_1, sprintf_i_2780_i);
    tcase_add_test(tc1_1, sprintf_i_2781_i);
    tcase_add_test(tc1_1, sprintf_i_2782_i);
    tcase_add_test(tc1_1, sprintf_i_2783_i);
    tcase_add_test(tc1_1, sprintf_i_2784_i);
    tcase_add_test(tc1_1, sprintf_i_2785_i);
    tcase_add_test(tc1_1, sprintf_i_2786_i);
    tcase_add_test(tc1_1, sprintf_i_2786_2_i);
    tcase_add_test(tc1_1, sprintf_i_2787_i);
    tcase_add_test(tc1_1, sprintf_i_2788_i);
    tcase_add_test(tc1_1, sprintf_i_2789_i);
    tcase_add_test(tc1_1, sprintf_i_2790_i);
    tcase_add_test(tc1_1, sprintf_i_2791_i);
    tcase_add_test(tc1_1, sprintf_i_2792_i);
    tcase_add_test(tc1_1, sprintf_i_2793_i);
    tcase_add_test(tc1_1, sprintf_i_2794_i);
    tcase_add_test(tc1_1, sprintf_i_2795_i);
    tcase_add_test(tc1_1, sprintf_i_2796_i);
    tcase_add_test(tc1_1, sprintf_i_2800_i);
    tcase_add_test(tc1_1, sprintf_i_2802_i);
    tcase_add_test(tc1_1, sprintf_i_2803_i);
    tcase_add_test(tc1_1, sprintf_i_2804_i);
    tcase_add_test(tc1_1, sprintf_i_2805_i);
    tcase_add_test(tc1_1, sprintf_i_2806_i);
    tcase_add_test(tc1_1, sprintf_i_2807_i);
    tcase_add_test(tc1_1, sprintf_i_2807_2_i);
    tcase_add_test(tc1_1, sprintf_i_2808_i);
    tcase_add_test(tc1_1, sprintf_i_2809_i);
    tcase_add_test(tc1_1, sprintf_i_2810_i);
    tcase_add_test(tc1_1, sprintf_i_2811_i);
    tcase_add_test(tc1_1, sprintf_i_2812_i);
    tcase_add_test(tc1_1, sprintf_i_2813_i);
    tcase_add_test(tc1_1, sprintf_i_2814_i);
    tcase_add_test(tc1_1, sprintf_i_2815_i);
    tcase_add_test(tc1_1, sprintf_i_2816_i);
    tcase_add_test(tc1_1, sprintf_i_2817_i);
    tcase_add_test(tc1_1, sprintf_i_2818_i);
    tcase_add_test(tc1_1, sprintf_i_2819_i);
    tcase_add_test(tc1_1, sprintf_i_2820_i);
    tcase_add_test(tc1_1, sprintf_i_2821_i);
    tcase_add_test(tc1_1, sprintf_i_2822_i);
    tcase_add_test(tc1_1, sprintf_i_2823_i);
    tcase_add_test(tc1_1, sprintf_i_2824_i);
    tcase_add_test(tc1_1, sprintf_i_2825_i);
    tcase_add_test(tc1_1, sprintf_i_2826_i);
    tcase_add_test(tc1_1, sprintf_i_2827_i);
    tcase_add_test(tc1_1, sprintf_i_2828_i);
    tcase_add_test(tc1_1, sprintf_i_2829_i);
    tcase_add_test(tc1_1, sprintf_i_2830_i);
    tcase_add_test(tc1_1, sprintf_i_2831_i);
    tcase_add_test(tc1_1, sprintf_i_2832_i);
    tcase_add_test(tc1_1, sprintf_i_2833_i);
    tcase_add_test(tc1_1, sprintf_i_2834_i);
    tcase_add_test(tc1_1, sprintf_i_2835_i);
    tcase_add_test(tc1_1, sprintf_i_2836_i);
    tcase_add_test(tc1_1, sprintf_i_2837_i);
    tcase_add_test(tc1_1, sprintf_i_2838_i);
    tcase_add_test(tc1_1, sprintf_i_2839_i);
    tcase_add_test(tc1_1, sprintf_i_2840_i);
    tcase_add_test(tc1_1, sprintf_i_2841_i);
    tcase_add_test(tc1_1, sprintf_i_2842_i);
    tcase_add_test(tc1_1, sprintf_i_2843_i);
    tcase_add_test(tc1_1, sprintf_i_2844_i);
    tcase_add_test(tc1_1, sprintf_i_2845_i);
    tcase_add_test(tc1_1, sprintf_i_2846_i);
    tcase_add_test(tc1_1, sprintf_i_2847_i);
    tcase_add_test(tc1_1, sprintf_i_2848_i);
    tcase_add_test(tc1_1, sprintf_i_2849_i);
    tcase_add_test(tc1_1, sprintf_i_2850_i);
    tcase_add_test(tc1_1, sprintf_i_2851_i);
    tcase_add_test(tc1_1, sprintf_i_2852_i);
    tcase_add_test(tc1_1, sprintf_i_2853_i);
    tcase_add_test(tc1_1, sprintf_i_2854_i);
    tcase_add_test(tc1_1, sprintf_i_2855_i);
    tcase_add_test(tc1_1, sprintf_i_2856_i);
    tcase_add_test(tc1_1, sprintf_i_2857_i);
    tcase_add_test(tc1_1, sprintf_i_2858_i);
    tcase_add_test(tc1_1, sprintf_i_2859_i);
    tcase_add_test(tc1_1, sprintf_i_2860_i);
    tcase_add_test(tc1_1, sprintf_i_2861_i);
    tcase_add_test(tc1_1, sprintf_i_2862_i);
    tcase_add_test(tc1_1, sprintf_i_2863_i);
    tcase_add_test(tc1_1, sprintf_i_2864_i);
    tcase_add_test(tc1_1, sprintf_i_2865_i);
    tcase_add_test(tc1_1, sprintf_i_2866_i);
    tcase_add_test(tc1_1, sprintf_i_2867_i);
    tcase_add_test(tc1_1, sprintf_i_2868_i);
    tcase_add_test(tc1_1, sprintf_i_2869_i);
    tcase_add_test(tc1_1, sprintf_i_2870_i);
    tcase_add_test(tc1_1, sprintf_i_2871_i);
    tcase_add_test(tc1_1, sprintf_i_2872_i);
    tcase_add_test(tc1_1, sprintf_i_2873_i);
    tcase_add_test(tc1_1, sprintf_i_2874_i);
    tcase_add_test(tc1_1, sprintf_i_2875_i);
    tcase_add_test(tc1_1, sprintf_i_2876_i);
    tcase_add_test(tc1_1, sprintf_i_2877_i);
    tcase_add_test(tc1_1, sprintf_i_2878_i);
    tcase_add_test(tc1_1, sprintf_i_2879_i);
    tcase_add_test(tc1_1, sprintf_i_2880_i);
    tcase_add_test(tc1_1, sprintf_i_2881_i);
    tcase_add_test(tc1_1, sprintf_i_2882_i);
    tcase_add_test(tc1_1, sprintf_i_2883_i);
    tcase_add_test(tc1_1, sprintf_i_2884_i);
    tcase_add_test(tc1_1, sprintf_i_2885_i);
    tcase_add_test(tc1_1, sprintf_i_2886_i);
    tcase_add_test(tc1_1, sprintf_i_2887_i);
    tcase_add_test(tc1_1, sprintf_i_2888_i);
    tcase_add_test(tc1_1, sprintf_i_2889_i);
    tcase_add_test(tc1_1, sprintf_i_2890_i);
    tcase_add_test(tc1_1, sprintf_i_2891_i);
    tcase_add_test(tc1_1, sprintf_i_2892_i);
    tcase_add_test(tc1_1, sprintf_i_2893_i);
    tcase_add_test(tc1_1, sprintf_i_2894_i);
    tcase_add_test(tc1_1, sprintf_i_2895_i);
    tcase_add_test(tc1_1, sprintf_i_2896_i);
    tcase_add_test(tc1_1, sprintf_i_2897_i);
    tcase_add_test(tc1_1, sprintf_i_2898_i);
    tcase_add_test(tc1_1, sprintf_i_2899_i);
    tcase_add_test(tc1_1, sprintf_i_2900_i);
    tcase_add_test(tc1_1, sprintf_i_2904_i);
    tcase_add_test(tc1_1, sprintf_i_2905_i);
    tcase_add_test(tc1_1, sprintf_i_2906_i);
    tcase_add_test(tc1_1, sprintf_i_3013);
    tcase_add_test(tc1_1, sprintf_i_3014);
    tcase_add_test(tc1_1, sprintf_i_3015);
    tcase_add_test(tc1_1, sprintf_i_3016);
    tcase_add_test(tc1_1, sprintf_i_3017);
    tcase_add_test(tc1_1, sprintf_i_3018);
    tcase_add_test(tc1_1, sprintf_i_3019);
    tcase_add_test(tc1_1, sprintf_i_3020);
    tcase_add_test(tc1_1, sprintf_i_3021);
    tcase_add_test(tc1_1, sprintf_i_3021_2);
    tcase_add_test(tc1_1, sprintf_i_3022);
    tcase_add_test(tc1_1, sprintf_i_3023);
    tcase_add_test(tc1_1, sprintf_i_3024);
    tcase_add_test(tc1_1, sprintf_i_3025);
    tcase_add_test(tc1_1, sprintf_i_3026);
    tcase_add_test(tc1_1, sprintf_i_3027);
    tcase_add_test(tc1_1, sprintf_i_3028);
    tcase_add_test(tc1_1, sprintf_i_3029);
    tcase_add_test(tc1_1, sprintf_i_3030);
    tcase_add_test(tc1_1, sprintf_i_3031);
    tcase_add_test(tc1_1, sprintf_i_3032);
    tcase_add_test(tc1_1, sprintf_i_3033);
    tcase_add_test(tc1_1, sprintf_i_3034);
    tcase_add_test(tc1_1, sprintf_i_3035);
    tcase_add_test(tc1_1, sprintf_i_3036);
    tcase_add_test(tc1_1, sprintf_i_3037);
    tcase_add_test(tc1_1, sprintf_i_3038);
    tcase_add_test(tc1_1, sprintf_i_3039);
    tcase_add_test(tc1_1, sprintf_i_3040);
    tcase_add_test(tc1_1, sprintf_i_3041);
    tcase_add_test(tc1_1, sprintf_i_3072);
    tcase_add_test(tc1_1, sprintf_i_3073);
    tcase_add_test(tc1_1, sprintf_i_3074);
    tcase_add_test(tc1_1, sprintf_i_3075);
    tcase_add_test(tc1_1, sprintf_i_3076);
    tcase_add_test(tc1_1, sprintf_i_3077);
    tcase_add_test(tc1_1, sprintf_i_3078);
    tcase_add_test(tc1_1, sprintf_i_3079);
    tcase_add_test(tc1_1, sprintf_i_3080);
    tcase_add_test(tc1_1, sprintf_i_3081);
    tcase_add_test(tc1_1, sprintf_i_3082);
    tcase_add_test(tc1_1, sprintf_i_3083);
    tcase_add_test(tc1_1, sprintf_i_3084);
    tcase_add_test(tc1_1, sprintf_i_3085);
    tcase_add_test(tc1_1, sprintf_i_3086);
    tcase_add_test(tc1_1, sprintf_i_3087);
    tcase_add_test(tc1_1, sprintf_i_3088);
    tcase_add_test(tc1_1, sprintf_i_3089);
    tcase_add_test(tc1_1, sprintf_i_3090);
    tcase_add_test(tc1_1, sprintf_i_3091);
    tcase_add_test(tc1_1, sprintf_i_3092);
    tcase_add_test(tc1_1, sprintf_i_3093);
    tcase_add_test(tc1_1, sprintf_i_3094);
    tcase_add_test(tc1_1, sprintf_i_3095);
    tcase_add_test(tc1_1, sprintf_i_3096);
    tcase_add_test(tc1_1, sprintf_i_3097);
    tcase_add_test(tc1_1, sprintf_i_3098);
    tcase_add_test(tc1_1, sprintf_i_3099);
    tcase_add_test(tc1_1, sprintf_i_3100);
    tcase_add_test(tc1_1, sprintf_i_3101);
    tcase_add_test(tc1_1, sprintf_i_3132);
    tcase_add_test(tc1_1, sprintf_i_3133);
    tcase_add_test(tc1_1, sprintf_i_3134);
    tcase_add_test(tc1_1, sprintf_i_3135);
    tcase_add_test(tc1_1, sprintf_i_3136);
    tcase_add_test(tc1_1, sprintf_i_3137);
    tcase_add_test(tc1_1, sprintf_i_3138);
    tcase_add_test(tc1_1, sprintf_i_3139);
    tcase_add_test(tc1_1, sprintf_i_3140);
    tcase_add_test(tc1_1, sprintf_i_3141);
    tcase_add_test(tc1_1, sprintf_i_3142);
    tcase_add_test(tc1_1, sprintf_i_3143);
    tcase_add_test(tc1_1, sprintf_i_3144);
    tcase_add_test(tc1_1, sprintf_i_3145);
    tcase_add_test(tc1_1, sprintf_i_3146);
    tcase_add_test(tc1_1, sprintf_i_3147);
    tcase_add_test(tc1_1, sprintf_i_3148);
    tcase_add_test(tc1_1, sprintf_i_3149);
    tcase_add_test(tc1_1, sprintf_i_3150);
    tcase_add_test(tc1_1, sprintf_i_3151);
    tcase_add_test(tc1_1, sprintf_i_3152);
    tcase_add_test(tc1_1, sprintf_i_3153);
    tcase_add_test(tc1_1, sprintf_i_3154);
    tcase_add_test(tc1_1, sprintf_i_3155);
    tcase_add_test(tc1_1, sprintf_i_3156);
    tcase_add_test(tc1_1, sprintf_i_3157);
    tcase_add_test(tc1_1, sprintf_i_3158);
    tcase_add_test(tc1_1, sprintf_i_3159);
    tcase_add_test(tc1_1, sprintf_i_3160);
    tcase_add_test(tc1_1, sprintf_i_3161);
    tcase_add_test(tc1_1, sprintf_i_3192);
    tcase_add_test(tc1_1, sprintf_i_3193);
    tcase_add_test(tc1_1, sprintf_i_3194);
    tcase_add_test(tc1_1, sprintf_i_3195);
    tcase_add_test(tc1_1, sprintf_i_3196);
    tcase_add_test(tc1_1, sprintf_i_3197);
    tcase_add_test(tc1_1, sprintf_i_3198);
    tcase_add_test(tc1_1, sprintf_i_3199);
    tcase_add_test(tc1_1, sprintf_i_3200);
    tcase_add_test(tc1_1, sprintf_i_3201);
    tcase_add_test(tc1_1, sprintf_i_3202);
    tcase_add_test(tc1_1, sprintf_i_3203);
    tcase_add_test(tc1_1, sprintf_i_3204);
    tcase_add_test(tc1_1, sprintf_i_3205);
    tcase_add_test(tc1_1, sprintf_i_3206);
    tcase_add_test(tc1_1, sprintf_i_3207);
    tcase_add_test(tc1_1, sprintf_i_3208);
    tcase_add_test(tc1_1, sprintf_i_3209);
    tcase_add_test(tc1_1, sprintf_i_3210);
    tcase_add_test(tc1_1, sprintf_i_3211);
    tcase_add_test(tc1_1, sprintf_i_3212);
    tcase_add_test(tc1_1, sprintf_i_3213);
    tcase_add_test(tc1_1, sprintf_i_3214);
    tcase_add_test(tc1_1, sprintf_i_3215);
    tcase_add_test(tc1_1, sprintf_i_3216);
    tcase_add_test(tc1_1, sprintf_i_3217);
    tcase_add_test(tc1_1, sprintf_i_3218);
    tcase_add_test(tc1_1, sprintf_i_3219);
    tcase_add_test(tc1_1, sprintf_i_3220);
    tcase_add_test(tc1_1, sprintf_i_3221);
    tcase_add_test(tc1_1, sprintf_i_4001);
    tcase_add_test(tc1_1, sprintf_i_4002);
    tcase_add_test(tc1_1, sprintf_i_4004);
    tcase_add_test(tc1_1, sprintf_i_4005);
    tcase_add_test(tc1_1, sprintf_i_4006);
    tcase_add_test(tc1_1, sprintf_i_4007);
    tcase_add_test(tc1_1, sprintf_i_4008);
    tcase_add_test(tc1_1, sprintf_i_4009);
    tcase_add_test(tc1_1, sprintf_i_4010);
    tcase_add_test(tc1_1, sprintf_i_4011);
    tcase_add_test(tc1_1, sprintf_i_4012);
    tcase_add_test(tc1_1, sprintf_i_4013);
    tcase_add_test(tc1_1, sprintf_i_4014);
    tcase_add_test(tc1_1, sprintf_i_4015);
    tcase_add_test(tc1_1, sprintf_i_4016);
    tcase_add_test(tc1_1, sprintf_i_4017);
    tcase_add_test(tc1_1, sprintf_i_4018);
    tcase_add_test(tc1_1, sprintf_i_4019);
    tcase_add_test(tc1_1, sprintf_i_4020);
    tcase_add_test(tc1_1, sprintf_i_4021);
    tcase_add_test(tc1_1, sprintf_i_4022);
    tcase_add_test(tc1_1, sprintf_i_4023);
    tcase_add_test(tc1_1, sprintf_i_4024);
    tcase_add_test(tc1_1, sprintf_i_4025);
    tcase_add_test(tc1_1, sprintf_i_4026);
    tcase_add_test(tc1_1, sprintf_i_4027);
    tcase_add_test(tc1_1, sprintf_i_4028);
    tcase_add_test(tc1_1, sprintf_i_4029);
    tcase_add_test(tc1_1, sprintf_i_4030);
    tcase_add_test(tc1_1, sprintf_i_4031);
    tcase_add_test(tc1_1, sprintf_i_4032);
    tcase_add_test(tc1_1, sprintf_i_4033);
    tcase_add_test(tc1_1, sprintf_i_4034);
    tcase_add_test(tc1_1, sprintf_i_4035);
    tcase_add_test(tc1_1, sprintf_i_4036);
    tcase_add_test(tc1_1, sprintf_i_4037);
    tcase_add_test(tc1_1, sprintf_i_4038);
    tcase_add_test(tc1_1, sprintf_i_4039);
    tcase_add_test(tc1_1, sprintf_i_4040);
    tcase_add_test(tc1_1, sprintf_i_4041);
    tcase_add_test(tc1_1, sprintf_i_4042);
    tcase_add_test(tc1_1, sprintf_i_4043);
    tcase_add_test(tc1_1, sprintf_i_4044);
    tcase_add_test(tc1_1, sprintf_i_4045);
     tcase_add_test(tc1_1, sprintf_e_1);
     tcase_add_test(tc1_1, sprintf_e_2);
     tcase_add_test(tc1_1, sprintf_e_3);
     tcase_add_test(tc1_1, sprintf_e_4);
     tcase_add_test(tc1_1, sprintf_e_5);
     tcase_add_test(tc1_1, sprintf_e_6);
     tcase_add_test(tc1_1, sprintf_e_7);
     tcase_add_test(tc1_1, sprintf_e_8);
     tcase_add_test(tc1_1, sprintf_e_1E);
     tcase_add_test(tc1_1, sprintf_e_2E);
     tcase_add_test(tc1_1, sprintf_e_3E);
     tcase_add_test(tc1_1, sprintf_e_4E);
     tcase_add_test(tc1_1, sprintf_e_5E);
     tcase_add_test(tc1_1, sprintf_e_6E);
     tcase_add_test(tc1_1, sprintf_e_7E);
     tcase_add_test(tc1_1, sprintf_e_8E);
//    tcase_add_test(tc1_1, sprintf_n_1); ТУТ! N spec
//    tcase_add_test(tc1_1, sprintf_n_2); ТУТ! N spec
//    tcase_add_test(tc1_1, sprintf_n_3); ТУТ! N spec
    tcase_add_test(tc1_1, sprintf_copy_1);
    tcase_add_test(tc1_1, sprintf_copy_2);
    tcase_add_test(tc1_1, sprintf_copy_3);
    tcase_add_test(tc1_1, sprintf_copy_4);
    tcase_add_test(tc1_1, sprintf_copy_5);
     tcase_add_test(tc1_1, sprintf_copy_6);
//     tcase_add_test(tc1_1, sprintf_copy_7); !!! * spec
//     tcase_add_test(tc1_1, sprintf_copy_8); !!!
//     tcase_add_test(tc1_1, sprintf_copy_9); !!!
    tcase_add_test(tc1_1, sprintf_copy_10);
    tcase_add_test(tc1_1, sprintf_copy_11);
    tcase_add_test(tc1_1, sprintf_copy_12);
    tcase_add_test(tc1_1, sprintf_copy_13);
    tcase_add_test(tc1_1, sprintf_copy_14);
    tcase_add_test(tc1_1, sprintf_copy_15);
    tcase_add_test(tc1_1, sprintf_copy_16);
    tcase_add_test(tc1_1, sprintf_copy_17);
    tcase_add_test(tc1_1, sprintf_copy_18);
    tcase_add_test(tc1_1, sprintf_copy_19);
    tcase_add_test(tc1_1, sprintf_copy_20);
    tcase_add_test(tc1_1, sprintf_copy_21);
    tcase_add_test(tc1_1, sprintf_copy_22);
    tcase_add_test(tc1_1, sprintf_copy_23);
    tcase_add_test(tc1_1, sprintf_copy_24);
    tcase_add_test(tc1_1, sprintf_copy_25);
    tcase_add_test(tc1_1, sprintf_copy_26);
    tcase_add_test(tc1_1, sprintf_copy_27);
    tcase_add_test(tc1_1, sprintf_copy_28);
    tcase_add_test(tc1_1, sprintf_copy_29);
    tcase_add_test(tc1_1, sprintf_copy_30);
    tcase_add_test(tc1_1, sprintf_copy_31);
    tcase_add_test(tc1_1, sprintf_copy_32);
    tcase_add_test(tc1_1, sprintf_copy_33);
    tcase_add_test(tc1_1, sprintf_copy_34);
    tcase_add_test(tc1_1, sprintf_copy_35);
    tcase_add_test(tc1_1, sprintf_copy_36);
//    tcase_add_test(tc1_1, sprintf_copy_37);
//    ТУТ!!! N спецификатор & ошибка валгринд из стандартной
    tcase_add_test(tc1_1, sprintf_copy_38);
    tcase_add_test(tc1_1, sprintf_copy_39);
    tcase_add_test(tc1_1, sprintf_copy_40);
    tcase_add_test(tc1_1, sprintf_copy_41);
    tcase_add_test(tc1_1, sprintf_copy_42);
    tcase_add_test(tc1_1, sprintf_copy_43);
    tcase_add_test(tc1_1, sprintf_copy_44);
    tcase_add_test(tc1_1, sprintf_copy_45);
    tcase_add_test(tc1_1, sprintf_copy_46);
    tcase_add_test(tc1_1, sprintf_copy_47);
    tcase_add_test(tc1_1, sprintf_copy_48);
    tcase_add_test(tc1_1, sprintf_copy_49);
    tcase_add_test(tc1_1, sprintf_copy_50);
    tcase_add_test(tc1_1, sprintf_copy_51);
    tcase_add_test(tc1_1, sprintf_copy_52);
    tcase_add_test(tc1_1, sprintf_copy_53);
    tcase_add_test(tc1_1, sprintf_copy_54);
    tcase_add_test(tc1_1, sprintf_copy_55);
    tcase_add_test(tc1_1, sprintf_copy_56);
    tcase_add_test(tc1_1, sprintf_copy_57);
    tcase_add_test(tc1_1, sprintf_copy_58);
    tcase_add_test(tc1_1, sprintf_copy_59);
    tcase_add_test(tc1_1, sprintf_copy_60);
    tcase_add_test(tc1_1, sprintf_copy_61);
    tcase_add_test(tc1_1, sprintf_copy_62);
    tcase_add_test(tc1_1, sprintf_copy_63);
    tcase_add_test(tc1_1, sprintf_copy_64);
    tcase_add_test(tc1_1, sprintf_copy_65);
    tcase_add_test(tc1_1, sprintf_copy_66);
    tcase_add_test(tc1_1, sprintf_copy_67);
    tcase_add_test(tc1_1, sprintf_copy_68);
    tcase_add_test(tc1_1, sprintf_copy_69);
    tcase_add_test(tc1_1, sprintf_copy_70);
    tcase_add_test(tc1_1, sprintf_copy_71);
    tcase_add_test(tc1_1, sprintf_copy_72);
    tcase_add_test(tc1_1, sprintf_copy_73);
//    tcase_add_test(tc1_1, sprintf_copy_74);
//    !!!! N спецификатор & стандартная тоже ошибка
    tcase_add_test(tc1_1, sprintf_copy_75);
    tcase_add_test(tc1_1, sprintf_copy_76);
    tcase_add_test(tc1_1, sprintf_copy_78);
    tcase_add_test(tc1_1, sprintf_2335);
    tcase_add_test(tc1_1, sprintf_2336);
    tcase_add_test(tc1_1, sprintf_2337);
    tcase_add_test(tc1_1, sprintf_2338);
    tcase_add_test(tc1_1, sprintf_2339);
    tcase_add_test(tc1_1, sprintf_2340);
    tcase_add_test(tc1_1, sprintf_2341);
    tcase_add_test(tc1_1, sprintf_2342);
    tcase_add_test(tc1_1, sprintf_2343);
    tcase_add_test(tc1_1, sprintf_2344);
    tcase_add_test(tc1_1, sprintf_2345);
    tcase_add_test(tc1_1, sprintf_2346);
    tcase_add_test(tc1_1, sprintf_2347);
    tcase_add_test(tc1_1, sprintf_2348);
    tcase_add_test(tc1_1, sprintf_2349);
    tcase_add_test(tc1_1, sprintf_2350);
    tcase_add_test(tc1_1, sprintf_2351);
    tcase_add_test(tc1_1, sprintf_2352);
    tcase_add_test(tc1_1, sprintf_2353);
    tcase_add_test(tc1_1, sprintf_2354);
    tcase_add_test(tc1_1, sprintf_2355);
    tcase_add_test(tc1_1, sprintf_2356);
    tcase_add_test(tc1_1, sprintf_2357);
    tcase_add_test(tc1_1, sprintf_2358);
    tcase_add_test(tc1_1, sprintf_2359);
    tcase_add_test(tc1_1, sprintf_2360);
    tcase_add_test(tc1_1, sprintf_2361);
    tcase_add_test(tc1_1, sprintf_2362);
    tcase_add_test(tc1_1, sprintf_2363);
    tcase_add_test(tc1_1, sprintf_2364);
    tcase_add_test(tc1_1, sprintf_2365);
    tcase_add_test(tc1_1, sprintf_2366);
    tcase_add_test(tc1_1, sprintf_2367);
    tcase_add_test(tc1_1, sprintf_2368);
    tcase_add_test(tc1_1, sprintf_2369);
    tcase_add_test(tc1_1, sprintf_2370);
    tcase_add_test(tc1_1, sprintf_2371);
    tcase_add_test(tc1_1, sprintf_2372);
    tcase_add_test(tc1_1, sprintf_2373);
    tcase_add_test(tc1_1, sprintf_2374);
    tcase_add_test(tc1_1, sprintf_2375);
    tcase_add_test(tc1_1, sprintf_2376);
    tcase_add_test(tc1_1, sprintf_2377);
    tcase_add_test(tc1_1, sprintf_2378);
    tcase_add_test(tc1_1, sprintf_2379);
    tcase_add_test(tc1_1, sprintf_2380);
    tcase_add_test(tc1_1, sprintf_2381);
    tcase_add_test(tc1_1, sprintf_2382);
    tcase_add_test(tc1_1, sprintf_2383);
    tcase_add_test(tc1_1, sprintf_2384);
    tcase_add_test(tc1_1, sprintf_2385);
    tcase_add_test(tc1_1, sprintf_2386);
    tcase_add_test(tc1_1, sprintf_2387);
    tcase_add_test(tc1_1, sprintf_2388);
    tcase_add_test(tc1_1, sprintf_2391);
    tcase_add_test(tc1_1, sprintf_2392);
    tcase_add_test(tc1_1, sprintf_2393);
    tcase_add_test(tc1_1, sprintf_2394);
    tcase_add_test(tc1_1, sprintf_2395);
    tcase_add_test(tc1_1, sprintf_2396);
    tcase_add_test(tc1_1, sprintf_2401);
    tcase_add_test(tc1_1, sprintf_2402);
    tcase_add_test(tc1_1, sprintf_2403);
    tcase_add_test(tc1_1, sprintf_2404);
    tcase_add_test(tc1_1, sprintf_hex_width);
    tcase_add_test(tc1_1, sprintf_hex_flags);
    tcase_add_test(tc1_1, sprintf_hex_precision);
    tcase_add_test(tc1_1, sprintf_hex_many);
    tcase_add_test(tc1_1, sprintf_hex_many_flags);
    tcase_add_test(tc1_1, sprintf_hex_zero);
    tcase_add_test(tc1_1, sprintf_hex_huge);
    tcase_add_test(tc1_1, sprintf_hex_short);
    tcase_add_test(tc1_1, sprintf_hex_long);
    tcase_add_test(tc1_1, sprintf_hex_one_longer_width);
    tcase_add_test(tc1_1, sprintf_hex_two_longer_width);
    tcase_add_test(tc1_1, s21_trim_925);
    tcase_add_test(tc1_1, s21_trim_926);
    tcase_add_test(tc1_1, s21_trim_927);
    tcase_add_test(tc1_1, s21_insert_925);
    tcase_add_test(tc1_1, s21_insert_926);
    tcase_add_test(tc1_1, s21_insert_927);
    tcase_add_test(tc1_1, s21_insert_928);
    tcase_add_test(tc1_1, sprintf_octal_width);
    tcase_add_test(tc1_1, sprintf_octal_flags);
    tcase_add_test(tc1_1, sprintf_octal_precision);
    tcase_add_test(tc1_1, sprintf_octal_many_flags);
    tcase_add_test(tc1_1, sprintf_octal_short);
    tcase_add_test(tc1_1, sprintf_octal_long);
    tcase_add_test(tc1_1, sprintf_octal_many);
    tcase_add_test(tc1_1, sprintf_octal);
    tcase_add_test(tc1_1, sprintf_octal_zero);
    tcase_add_test(tc1_1, sprintf_octal_hash);
    tcase_add_test(tc1_1, sprintf_pointer_width);
    tcase_add_test(tc1_1, sprintf_pointer_flags);
    tcase_add_test(tc1_1, sprintf_pointer_precision);
    tcase_add_test(tc1_1, sprintf_pointer_many);
    tcase_add_test(tc1_1, sprintf_pointer_many_flags);
    tcase_add_test(tc1_1, sprintf_pointer_zero);
    tcase_add_test(tc1_1, sprintf_pointer_huge);
    tcase_add_test(tc1_1, sprintf_pointer_short);
    tcase_add_test(tc1_1, sprintf_pointer_long);
    tcase_add_test(tc1_1, sprintf_pointer_one_longer_width);
    tcase_add_test(tc1_1, sprintf_pointer_two_longer_width);
    tcase_add_test(tc1_1, sscanf_d);
}

int main(void) {
    Suite *s1 = suite_create("Core");
    TCase *tc1_1 = tcase_create("Core");
    SRunner *sr = srunner_create(s1);
    int nf;

    suite_add_tcase(s1, tc1_1);
    part1_tests(tc1_1);
    part2_tests(tc1_1);
    part3_tests(tc1_1);
    part4_tests(tc1_1);


    srunner_set_fork_status(sr, CK_NOFORK);
    srunner_run_all(sr, CK_ENV);
    nf = srunner_ntests_failed(sr);
    srunner_free(sr);

    return nf == 0 ? 0 : 1;
}
