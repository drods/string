#include <check.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../s21_string.h"

#define CK_FORK no
#define BUFF_SIZE 512

START_TEST(s21_strchr_1) {
  char *str = "Hello world";
  ck_assert_ptr_eq(strchr(str, ' '), s21_strchr(str, ' '));
}
END_TEST

START_TEST(s21_strchr_2) {
  char *str = "";
  int ch = 'a';
  ck_assert_ptr_eq(strchr(str, ch), s21_strchr(str, ch));
}
END_TEST

START_TEST(s21_strchr_3) {
  char *str = "Hello world";
  char ch = 'l';
  ck_assert_ptr_eq(strchr(str, ch), s21_strchr(str, ch));
}
END_TEST

START_TEST(s21_strchr_4) {
  char *str = "Hello world";
  char ch = 'a';
  ck_assert_ptr_eq(strchr(str, ch), s21_strchr(str, ch));
}
END_TEST

START_TEST(s21_strchr_5) {
  char *str = "Hello world";
  int ch = 'w';
  ck_assert_ptr_eq(strchr(str, ch), s21_strchr(str, ch));
}
END_TEST

START_TEST(s21_strlen_1) {
  char *str = "Hello world";
  ck_assert_int_eq(strlen(str), s21_strlen(str));
}
END_TEST

START_TEST(s21_strlen_2) {
  char *str = "";
  ck_assert_int_eq(strlen(str), s21_strlen(str));
}
END_TEST

START_TEST(s21_strlen_3) {
  char *str = "q";
  ck_assert_int_eq(strlen(str), s21_strlen(str));
}
END_TEST

START_TEST(s21_strlen_4) {
  char *str = "qq";
  ck_assert_int_eq(strlen(str), s21_strlen(str));
}
END_TEST

START_TEST(s21_memchr_1) {
  char *str = "qqq";
  ck_assert_ptr_eq(memchr(str, 'q', 2), s21_memchr(str, 'q', 2));
}
END_TEST

START_TEST(s21_memchr_2) {
  char *str = "Hello world!";
  ck_assert_ptr_eq(memchr(str, 108, 6), s21_memchr(str, 108, 6));
}
END_TEST

START_TEST(s21_memchr_3) {
  char *str = "Hello world!";
  ck_assert_ptr_eq(memchr(str, 'o', 5), s21_memchr(str, 'o', 5));
}
END_TEST

START_TEST(s21_memchr_4) {
  char *str = "Hello world!";
  ck_assert_ptr_eq(memchr(str, 'a', 5), s21_memchr(str, 'a', 5));
}
END_TEST

START_TEST(s21_memchr_5) {
  char *str = "Hello world!\0";
  ck_assert_ptr_eq(memchr(str, '\0', 5), s21_memchr(str, '\0', 5));
}
END_TEST

START_TEST(s21_memchr_6) {
  char *str = "lean\0";
  ck_assert_ptr_eq(memchr(str, 'q', 4), s21_memchr(str, 'q', 4));
}
END_TEST

START_TEST(s21_memchr_7) {
  char *str = "Hello world!\0";
  ck_assert_str_eq(memchr(str, 'w', 8), s21_memchr(str, 'w', 8));
}
END_TEST

START_TEST(s21_strncmp_1) {
  char *str1 = "Hello world";
  char *str2 = "Hello warld";
  int check_val = -21;
  int val = 8;
  int mem_1 = strncmp(str1, str2, val);
  int mem_2 = s21_strncmp(str1, str2, val);
  if ((mem_1 > 0 && mem_2 > 0) || (mem_1 < 0 && mem_2 < 0) ||
      (mem_1 == 0 && mem_2 == 0)) {
    check_val = 21;
  }
  ck_assert_int_gt(check_val, 0);
}
END_TEST

START_TEST(s21_strncmp_2) {
  char *str1 = "Hello world";
  char *str2 = "Hello warld";
  int check_val = -21;
  int val = 5;
  int mem_1 = strncmp(str1, str2, val);
  int mem_2 = s21_strncmp(str1, str2, val);
  if ((mem_1 > 0 && mem_2 > 0) || (mem_1 < 0 && mem_2 < 0) ||
      (mem_1 == 0 && mem_2 == 0)) {
    check_val = 21;
  }
  ck_assert_int_gt(check_val, 0);
}
END_TEST

START_TEST(s21_strncmp_3) {
  char *str1 = "\0";
  char *str2 = "Hello warld";
  int check_val = -21;
  int val = 8;
  int mem_1 = strncmp(str1, str2, val);
  int mem_2 = s21_strncmp(str1, str2, val);
  if ((mem_1 > 0 && mem_2 > 0) || (mem_1 < 0 && mem_2 < 0) ||
      (mem_1 == 0 && mem_2 == 0)) {
    check_val = 21;
  }
  ck_assert_int_gt(check_val, 0);
}
END_TEST

START_TEST(s21_strncmp_4) {
  char *str1 = "Hello world";
  char *str2 = "\0";
  int check_val = -21;
  int val = 8;
  int mem_1 = strncmp(str1, str2, val);
  int mem_2 = s21_strncmp(str1, str2, val);
  if ((mem_1 > 0 && mem_2 > 0) || (mem_1 < 0 && mem_2 < 0) ||
      (mem_1 == 0 && mem_2 == 0)) {
    check_val = 21;
  }
  ck_assert_int_gt(check_val, 0);
}
END_TEST

START_TEST(s21_strncmp_5) {
  char *str1 = "Hello world";
  char *str2 = "Hello warld";
  int check_val = -21;
  int val = 0;
  int mem_1 = strncmp(str1, str2, val);
  int mem_2 = s21_strncmp(str1, str2, val);
  if ((mem_1 > 0 && mem_2 > 0) || (mem_1 < 0 && mem_2 < 0) ||
      (mem_1 == 0 && mem_2 == 0)) {
    check_val = 21;
  }
  ck_assert_int_gt(check_val, 0);
}
END_TEST

START_TEST(s21_memcmp_1) {
  char *str1 = "Hello sp[rtkhworld";
  char *str2 = "Hello warld";
  int check_val = -21;
  int mem_1 = memcmp(str1, str2, '\0');
  int mem_2 = s21_memcmp(str1, str2, '\0');
  if ((mem_1 > 0 && mem_2 > 0) || (mem_1 < 0 && mem_2 < 0) ||
      (mem_1 == 0 && mem_2 == 0)) {
    check_val = 21;
  }
  ck_assert_int_gt(check_val, 0);
}
END_TEST

START_TEST(s21_memcmp_2) {
  char *str1 = "Hello world";
  char *str2 = "Hello world";
  int check_val = -21;
  int mem_1 = memcmp(str1, str2, '\0');
  int mem_2 = s21_memcmp(str1, str2, '\0');
  if ((mem_1 > 0 && mem_2 > 0) || (mem_1 < 0 && mem_2 < 0) ||
      (mem_1 == 0 && mem_2 == 0)) {
    check_val = 21;
  }
  ck_assert_int_gt(check_val, 0);
}
END_TEST

START_TEST(s21_memcmp_3) {
  char *str1 = "Hello world";
  char *str2 = "Hello world";
  int check_val = -21;
  int mem_1 = memcmp(str1, str2, 0);
  int mem_2 = s21_memcmp(str1, str2, 0);
  if ((mem_1 > 0 && mem_2 > 0) || (mem_1 < 0 && mem_2 < 0) ||
      (mem_1 == 0 && mem_2 == 0)) {
    check_val = 21;
  }
  ck_assert_int_gt(check_val, 0);
}
END_TEST

START_TEST(s21_memcmp_4) {
  char *str1 = "Hello world";
  char *str2 = "";
  int check_val = -21;
  int mem_1 = memcmp(str1, str2, 5);
  int mem_2 = s21_memcmp(str1, str2, 5);
  if ((mem_1 > 0 && mem_2 > 0) || (mem_1 < 0 && mem_2 < 0) ||
      (mem_1 == 0 && mem_2 == 0)) {
    check_val = 21;
  }
  ck_assert_int_gt(check_val, 0);
}
END_TEST

START_TEST(s21_memcmp_5) {
  char *str1 = "Hello world";
  char *str2 = "Rat";
  int check_val = -21;
  int mem_1 = memcmp(str1, str2, 3);
  int mem_2 = s21_memcmp(str1, str2, 3);
  if ((mem_1 > 0 && mem_2 > 0) || (mem_1 < 0 && mem_2 < 0) ||
      (mem_1 == 0 && mem_2 == 0)) {
    check_val = 21;
  }
  ck_assert_int_gt(check_val, 0);
}
END_TEST

START_TEST(s21_memcmp_6) {
  char *str1 = "Hello world";
  char *str2 = "d08yqwp9dqoiwjd;jhasj";
  int check_val = -21;
  int mem_1 = memcmp(str1, str2, 6);
  int mem_2 = s21_memcmp(str1, str2, 6);
  if ((mem_1 > 0 && mem_2 > 0) || (mem_1 < 0 && mem_2 < 0) ||
      (mem_1 == 0 && mem_2 == 0)) {
    check_val = 21;
  }
  ck_assert_int_gt(check_val, 0);
}
END_TEST

START_TEST(s21_memcmp_7) {
  char *str1 = "Hello world";
  char *str2 = "Ration of monsters";
  int check_val = -21;
  int mem_1 = memcmp(str1, str2, 6);
  int mem_2 = s21_memcmp(str1, str2, 6);
  if ((mem_1 > 0 && mem_2 > 0) || (mem_1 < 0 && mem_2 < 0) ||
      (mem_1 == 0 && mem_2 == 0)) {
    check_val = 21;
  }
  ck_assert_int_gt(check_val, 0);
}
END_TEST

START_TEST(s21_memcmp_8) {
  char *str1 = "Hello world";
  char *str2 = "Cringe";
  int check_val = -21;
  int mem_1 = memcmp(str1, str2, 5);
  int mem_2 = s21_memcmp(str1, str2, 5);
  if ((mem_1 > 0 && mem_2 > 0) || (mem_1 < 0 && mem_2 < 0) ||
      (mem_1 == 0 && mem_2 == 0)) {
    check_val = 21;
  }
  ck_assert_int_gt(check_val, 0);
}
END_TEST

START_TEST(s21_memcpy_1) {
  s21_size_t n1 = 3;
  char b1[1024] = "";
  char b11[1024] = "";
  char str_1_2[1024] = "LUGANO THE BEST!";
  ck_assert_str_eq(memcpy(b1, str_1_2, n1), s21_memcpy(b11, str_1_2, n1));
}
END_TEST

START_TEST(s21_memcpy_2) {
  s21_size_t n2 = 5;
  char b2[1024] = "";
  char b22[1024] = "";
  char str_2_2[1024] = "THE OF \0BEST!!";
  ck_assert_str_eq(memcpy(b2, str_2_2, n2), s21_memcpy(b22, str_2_2, n2));
}
END_TEST

START_TEST(s21_memcpy_3) {
  s21_size_t n3 = 4;
  char b3[1024] = "777 ";
  char b33[1024] = "777 ";
  char str_3_2[1024] = "LUGANO!";
  ck_assert_str_eq(memcpy(b3, str_3_2, n3), s21_memcpy(b33, str_3_2, n3));
}
END_TEST

START_TEST(s21_memcpy_4) {
  s21_size_t n4 = 4;
  char b4[1024] = "LUGANO! 777 ";
  char b44[1024] = "LUGANO! 777 ";
  ck_assert_str_eq(memcpy(b4, b4 + 7, n4), s21_memcpy(b44, b44 + 7, n4));
}
END_TEST

START_TEST(s21_strncat_1) {
  char str1[100] = "Hello world!";
  char str2[100] = "Bye";
  ck_assert_ptr_eq(strncat(str1, str2, 5), s21_strncat(str1, str2, 5));
}
END_TEST

START_TEST(s21_strncat_2) {
  char str1[100] = "Hello world!";
  char str2[100] = "BlackRat";
  ck_assert_ptr_eq(strncat(str1, str2, 7), s21_strncat(str1, str2, 7));
}
END_TEST

START_TEST(s21_strncat_3) {
  char str1[100] = "Hello world!";
  char str2[100] = "\0";
  ck_assert_ptr_eq(strncat(str1, str2, 7), s21_strncat(str1, str2, 7));
}
END_TEST

START_TEST(s21_strncat_4) {
  char str1[100] = "\0";
  char str2[100] = "Hello world!";
  ck_assert_ptr_eq(strncat(str1, str2, 3), s21_strncat(str1, str2, 3));
}
END_TEST

START_TEST(s21_strncat_5) {
  char str1[100] = "\0www";
  char str2[100] = "Hello world!";
  ck_assert_ptr_eq(strncat(str1, str2, 3), s21_strncat(str1, str2, 3));
}
END_TEST

START_TEST(s21_strncat_6) {
  char str1[100] = "";
  char str2[100] = "Hello world!";
  ck_assert_ptr_eq(strncat(str1, str2, 3), s21_strncat(str1, str2, 3));
}
END_TEST

START_TEST(s21_strncat_7) {
  char str1[100] = "Hello world!";
  char str2[100] = "";
  ck_assert_ptr_eq(strncat(str1, str2, 5), s21_strncat(str1, str2, 5));
}
END_TEST

START_TEST(s21_strncpy_1) {
  char str1[100] = "Hello world!";
  char str2[100] = "Rat";
  ck_assert_ptr_eq(strncpy(str1, str2, 5), s21_strncpy(str1, str2, 5));
}
END_TEST

START_TEST(s21_strncpy_2) {
  char str1[100] = "";
  char str2[100] = "Rat";
  ck_assert_ptr_eq(strncpy(str1, str2, 5), s21_strncpy(str1, str2, 5));
}
END_TEST

START_TEST(s21_strncpy_3) {
  char str1[100] = "Hello world!";
  char str2[100] = "";
  ck_assert_ptr_eq(strncpy(str1, str2, 5), s21_strncpy(str1, str2, 5));
}
END_TEST

START_TEST(s21_strncpy_4) {
  char str1[100] = "Rat";
  char str2[100] = "Hello world!";
  ck_assert_ptr_eq(strncpy(str1, str2, 8), s21_strncpy(str1, str2, 8));
}
END_TEST

START_TEST(s21_strncpy_5) {
  char str1[100] = "Rat";
  char str2[100] = "Hell\0o world!";
  ck_assert_ptr_eq(strncpy(str1, str2, 8), s21_strncpy(str1, str2, 8));
}
END_TEST

START_TEST(s21_strpbrk_1) {
  char str1[100] = "killer queen byte dust";
  char str2[100] = "que";
  ck_assert_str_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
}
END_TEST

START_TEST(s21_strpbrk_2) {
  char str1[100] = "run boy run";
  char str2[100] = "run";
  ck_assert_str_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
}
END_TEST

START_TEST(s21_strpbrk_3) {
  char str1[100] = "wonder of you";
  char str2[100] = "shine";
  ck_assert_str_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
}
END_TEST

START_TEST(s21_strpbrk_4) {
  char str1[100] = "go a go b go c go d";
  char str2[100] = "go";
  ck_assert_str_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
}
END_TEST

START_TEST(s21_strpbrk_5) {
  char str1[100] = "Rat";
  char str2[100] = "";
  ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
}
END_TEST

START_TEST(s21_strstr_1) {
  char str1[100] = "killer queen byte dust";
  char str2[100] = "que";
  char *res1;
  char *res2;
  res1 = strstr(str1, str2);
  res2 = s21_strstr(str1, str2);
  ck_assert_ptr_eq(res1, res2);
}
END_TEST

START_TEST(s21_strstr_2) {
  char str1[100] = "run boy run";
  char str2[100] = "run";
  char *res1;
  char *res2;
  res1 = strstr(str1, str2);
  res2 = s21_strstr(str1, str2);
  ck_assert_ptr_eq(res1, res2);
}
END_TEST

START_TEST(s21_strstr_3) {
  char str1[100] = "wonder of you";
  char str2[100] = "shine";
  char *res1;
  char *res2;
  res1 = strstr(str1, str2);
  res2 = s21_strstr(str1, str2);
  ck_assert_ptr_eq(res1, res2);
}
END_TEST

START_TEST(s21_strstr_4) {
  char str1[100] = "go a go b go c go d";
  char str2[100] = "go";
  char *res1;
  char *res2;
  res1 = strstr(str1, str2);
  res2 = s21_strstr(str1, str2);
  ck_assert_str_eq(res1, res2);
}
END_TEST

START_TEST(s21_strstr_5) {
  char str1[100] = "Rat";
  char str2[100] = "";
  char *res1;
  char *res2;
  res1 = strstr(str1, str2);
  res2 = s21_strstr(str1, str2);
  ck_assert_ptr_eq(res1, res2);
}
END_TEST

START_TEST(s21_strrchr_1) {
  char str1[100] = "";
  char str2 = 'O';

  ck_assert_ptr_eq(strrchr(str1, str2), s21_strrchr(str1, str2));
}
END_TEST

START_TEST(s21_strrchr_2) {
  char str1[100] = "run boy run";
  char str2 = 'R';
  ck_assert_ptr_eq(strrchr(str1, str2), s21_strrchr(str1, str2));
}
END_TEST

START_TEST(s21_strrchr_3) {
  char str1[100] = "I JUST WANNA SHINE TOGETHER ON zE MIAMY BEACH";
  char str2 = 'z';
  ck_assert_str_eq(strrchr(str1, str2), s21_strrchr(str1, str2));
}
END_TEST

START_TEST(s21_strrchr_4) {
  char str1[100] = "go a go b go c go d";
  char str2 = 'l';
  ck_assert_ptr_eq(strrchr(str1, str2), s21_strrchr(str1, str2));
}
END_TEST

START_TEST(s21_strrchr_5) {
  char str1[100] = "RatioOmagadYouAreSoPerfectoMomemto!!";
  char str2 = ' ';
  ck_assert_ptr_eq(strrchr(str1, str2), s21_strrchr(str1, str2));
}
END_TEST

START_TEST(s21_strcspn_2) {
  char str1[100] = "run boy run";
  char str2[100] = "12345";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(s21_strcspn_3) {
  char str1[100] = "wonder of you %^&@@";
  char str2[100] = "%^@";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(s21_strcspn_4) {
  char str1[100] = "go a go b go c go d";
  char str2[100] = "go";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(s21_strcspn_5) {
  char str1[100] = "Rats are paris bithces which eat Paris's trash";
  char str2[100] = "";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(s21_strcspn_6) {
  char str1[100] = "Rats are paris bithces which eat Paris's trash";
  char str2[100] = "w'";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(s21_strerror_1) {
  char *res1 = S21_NULL;
  res1 = strerror(10);
  char *res2 = S21_NULL;
  res2 = s21_strerror(10);
  ck_assert_str_eq(res1, res2);
}
END_TEST

START_TEST(s21_strerror_2) {
  char *res1 = S21_NULL;
  res1 = strerror(49);
  char *res2 = S21_NULL;
  res2 = s21_strerror(49);
  ck_assert_str_eq(res1, res2);
}
END_TEST

START_TEST(s21_strerror_3) {
  char *res1 = S21_NULL;
  res1 = strerror(11);
  char *res2 = S21_NULL;
  res2 = s21_strerror(11);
  ck_assert_str_eq(res1, res2);
}
END_TEST

START_TEST(s21_strerror_4) {
  char *res1 = S21_NULL;
  res1 = strerror(4);
  char *res2 = S21_NULL;
  res2 = s21_strerror(4);
  ck_assert_str_eq(res1, res2);
}
END_TEST

START_TEST(s21_strerror_5) {
  char *res1 = S21_NULL;
  res1 = strerror(1);
  char *res2 = S21_NULL;
  res2 = s21_strerror(1);
  ck_assert_str_eq(res1, res2);
}
END_TEST

START_TEST(s21_strerror_6) {
  char *res1 = S21_NULL;
  res1 = strerror(-19);
  char *res2 = S21_NULL;
  res2 = s21_strerror(-19);
  ck_assert_str_eq(res1, res2);
}

END_TEST
START_TEST(s21_to_lower_1) {
  char *res1 = S21_NULL;
  res1 = s21_to_lower("QUWHDUhdGHWQIDYGQWYDgQYWDGqygdUQ");
  char *res2 = S21_NULL;
  res2 = s21_to_lower("QUWHDUhdGHWQIDYGQWYDgQYWDGqygdUQ");
  ck_assert_str_eq(res1, res2);
  if (res1) free(res1);
  if (res2) free(res2);
}
END_TEST

START_TEST(s21_to_lower_2) {
  char *res1 = S21_NULL;
  res1 = s21_to_lower("126351865238165ygdUQ");
  char *res2 = S21_NULL;
  res2 = s21_to_lower("126351865238165ygdUQ");
  ck_assert_str_eq(res1, res2);
  if (res1) free(res1);
  if (res2) free(res2);
}
END_TEST

START_TEST(s21_to_lower_3) {
  char *res1 = S21_NULL;
  res1 = s21_to_lower("dhdjdjajdadh@#@#@#@#@##@");
  char *res2 = S21_NULL;
  res2 = s21_to_lower("dhdjdjajdadh@#@#@#@#@##@");
  ck_assert_str_eq(res1, res2);
  if (res1) free(res1);
  if (res2) free(res2);
}
END_TEST

START_TEST(s21_to_lower_4) {
  char *res1 = S21_NULL;
  res1 = s21_to_lower("");
  char *res2 = S21_NULL;
  res2 = s21_to_lower("");
  ck_assert_str_eq(res1, res2);
  if (res1) free(res1);
  if (res2) free(res2);
}
END_TEST

START_TEST(s21_to_upper_1) {
  char *res1 = S21_NULL;
  res1 = s21_to_upper("QUWHDUhdGHWQIDYGQWYDgQYWDGqygdUQ");
  char *res2 = S21_NULL;
  res2 = s21_to_upper("QUWHDUhdGHWQIDYGQWYDgQYWDGqygdUQ");
  ck_assert_str_eq(res1, res2);
  if (res1) free(res1);
  if (res2) free(res2);
}
END_TEST

START_TEST(s21_to_upper_2) {
  char *res1 = S21_NULL;
  res1 = s21_to_upper("126351865238165ygdUQ");
  char *res2 = S21_NULL;
  res2 = s21_to_upper("126351865238165ygdUQ");
  ck_assert_str_eq(res1, res2);
  if (res1) free(res1);
  if (res2) free(res2);
}
END_TEST

START_TEST(s21_to_upper_3) {
  char *res1 = S21_NULL;
  res1 = s21_to_upper("dhdjdjajdadh@#@#@#@#@##@");
  char *res2 = S21_NULL;
  res2 = s21_to_upper("dhdjdjajdadh@#@#@#@#@##@");
  ck_assert_str_eq(res1, res2);
  if (res1) free(res1);
  if (res2) free(res2);
}
END_TEST

START_TEST(s21_to_upper_4) {
  char *res1 = S21_NULL;
  res1 = s21_to_upper("");
  char *res2 = S21_NULL;
  res2 = s21_to_upper("");
  ck_assert_str_eq(res1, res2);
  if (res1) free(res1);
  if (res2) free(res2);
}
END_TEST

START_TEST(s21_trim_2) {
  char *res1 = S21_NULL;
  res1 = s21_trim("   Hello World   ", " ");
  if (res1) {
    ck_assert_str_eq(res1, "Hello World");
    free(res1);
  }
}
END_TEST

START_TEST(s21_trim_3) {
  char *res1 = S21_NULL;
  res1 = s21_trim("dhdjdjajdadh@#@#@#@#@##@", "@:Q:Q:Q:Q:;");
  if (res1) {
    ck_assert_str_eq(res1, "dhdjdjajdadh@#@#@#@#@##");
    free(res1);
  }
}
END_TEST

START_TEST(s21_insert_1) {
  char *res1 = S21_NULL;
  res1 = s21_insert("1263518@#@#@##@", "hwd", 1);
  if (res1) {
    ck_assert_str_eq(res1, "1hwd263518@#@#@##@");
    free(res1);
  }
}
END_TEST

START_TEST(s21_insert_2) {
  char *res1 = S21_NULL;
  res1 = s21_insert("126351865238165ygdUQ", "pq9uhwd", 8);
  if (res1) {
    ck_assert_str_eq(res1, "12635186pq9uhwd5238165ygdUQ");
    free(res1);
  }
}
END_TEST

START_TEST(s21_insert_3) {
  char *res1 = S21_NULL;
  res1 = s21_insert("12635186523816QWDQWDQWDQWD5ygdUQ", "pq9uhwd", 15);
  if (res1) {
    ck_assert_str_eq(res1, "12635186523816Qpq9uhwdWDQWDQWDQWD5ygdUQ");
    free(res1);
  }
}
END_TEST

START_TEST(s21_strtok_1) {
  char str1[100] = "killer queen byte dust";
  char str2[100] = "er q";
  ck_assert_str_eq(strtok(str1, str2), s21_strtok(str1, str2));
}
END_TEST

START_TEST(s21_strtok_2) {
  char str1[100] = "run boy run";
  char str2[100] = "12345";
  ck_assert_str_eq(strtok(str1, str2), s21_strtok(str1, str2));
}
END_TEST

START_TEST(s21_strtok_3) {
  char str1[100] = "wonder of you %^&@@";
  char str2[100] = "%^@";
  ck_assert_str_eq(strtok(str1, str2), s21_strtok(str1, str2));
}
END_TEST

START_TEST(s21_strtok_4) {
  char str1[100] = "go a go b go c go d";
  char str2[100] = "go";
  ck_assert_str_eq(strtok(str1, str2), s21_strtok(str1, str2));
}
END_TEST

START_TEST(s21_strtok_5) {
  char str1[100] = "Rats are paris bithces which eat Paris's trash";
  char str2[100] = "";
  ck_assert_str_eq(strtok(str1, str2), s21_strtok(str1, str2));
}
END_TEST

START_TEST(s21_strtok_6) {
  char str1[100] = "Rats are paris bithces which eat Paris's trash";
  char str2[100] = "w";
  ck_assert_str_eq(strtok(str1, str2), s21_strtok(str1, str2));
}
END_TEST

START_TEST(s21_strtok_7) {
  char str1[100] = "hey yokgfjydjyd@!!!!!!!!!!!!!@@@#@@!!!";
  char str2[100] = "w";
  ck_assert_str_eq(strtok(str1, str2), s21_strtok(str1, str2));
}
END_TEST

START_TEST(s21_strtok_8) {
  char str1[100] = "Rats are \0paris bithces which\0";
  char str2[100] = "a";
  ck_assert_str_eq(strtok(str1, str2), s21_strtok(str1, str2));
}
END_TEST

/* INCORRECT TEST
START_TEST(s21_strtok_9) {
  char str1[100] = "\0\0\0\0";
  char str2[100] = "::::";
  ck_assert_str_eq(strtok(str1, str2), s21_strtok(str1, str2));
}
END_TEST*/

START_TEST(s21_memset_1) {
  char res[] = "aboba";
  char expected[] = "aboba";
  char replace = 'g';
  s21_size_t n_byte = 5;
  s21_memset(res, replace, n_byte);
  memset(expected, replace, n_byte);
  ck_assert_str_eq(res, expected);
}
END_TEST

START_TEST(s21_memset_2) {
  char res[] = "aboba";
  char expected[] = "aboba";
  char replace = 'g';
  s21_size_t n_byte = 0;
  s21_memset(res, replace, n_byte);
  memset(expected, replace, n_byte);
  ck_assert_str_eq(res, expected);
}
END_TEST

START_TEST(s21_memset_3) {
  char res[] = "";
  char expected[] = "";
  char replace = '\0';
  s21_size_t n_byte = 0;
  s21_memset(res, replace, n_byte);
  memset(expected, replace, n_byte);
  ck_assert_str_eq(res, expected);
}
END_TEST

START_TEST(s21_memset_4) {
  char res[] = "aboba";
  char expected[] = "aboba";
  char replace = 'A';
  s21_size_t n_byte = 3;
  s21_memset(res, replace, n_byte);
  memset(expected, replace, n_byte);
  ck_assert_str_eq(res, expected);
}
END_TEST

START_TEST(s21_memset_5) {
  char res[] = "a1obA";
  char expected[] = "a1obA";
  char replace = '1';
  s21_size_t n_byte = 5;
  s21_memset(res, replace, n_byte);
  memset(expected, replace, n_byte);
  ck_assert_str_eq(res, expected);
}
END_TEST

START_TEST(s21_memset_6) {
  char res[] =
      "a1oas[pifjaosidfj oapisjdfpoi asjdfoij ouh12oi3 uh12i3 "
      "hiajhIOUAHSDiouAHSdu1).bA";
  char expected[] =
      "a1oas[pifjaosidfj oapisjdfpoi asjdfoij ouh12oi3 uh12i3 "
      "hiajhIOUAHSDiouAHSdu1).bA";
  char replace = '1';
  s21_size_t n_byte = 5;
  s21_memset(res, replace, n_byte);
  memset(expected, replace, n_byte);
  ck_assert_str_eq(res, expected);
}
END_TEST

START_TEST(sprintf_simple_int) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  char *format = "This is a simple value %d";
  int val = 69;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_precise_int) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  char *format = "%.5i";
  int val = 69;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_width_int) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  char *format = "%5d";
  int val = 69;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_minus_width_int) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  char *format = "%-5i";
  int val = 69;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_plus_width_int) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  char *format = "%+12d";
  int val = 69;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_padding_int) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  char *format = "%012i";
  int val = 69;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_star_precision_int) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  char *format = "%0.*i";
  int val = 69;
  ck_assert_int_eq(s21_sprintf(str1, format, 5, val),
                   sprintf(str2, format, 5, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_many_flags_many_ints) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  char format[] = "%0.*i %d %4.*i %013d %d";
  int val = 69;
  ck_assert_int_eq(
      s21_sprintf(str1, format, 5, val, -10431, 13, 5311, 0, -581813581),
      sprintf(str2, format, 5, val, -10431, 13, 5311, 0, -581813581));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_flags_long_int) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  char *format = "%+5.31li";
  long int val = 698518581899;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_flags_short_int) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  char *format = "%-16.9hi";
  short int val = 6958;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_flags_another_long_int) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  char *format = "%0.*ld";
  long val = 8581385185;
  ck_assert_int_eq(s21_sprintf(str1, format, 5, val),
                   sprintf(str2, format, 5, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_zero_precision_zero_int) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  char *format = "%.0d";
  int val = 1;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_space_flag_int) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  char *format = "% d";
  int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_unsigned_val) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  char *format = "%u";
  unsigned int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_unsigned_val_width) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  char *format = "%15u";
  unsigned int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_unsigned_val_flags) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  char *format = "%-16u";
  unsigned int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_unsigned_val_precision) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  char *format = "%.51u";
  unsigned int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_unsigned_val_many_flags) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  char *format = "% 5.51u";
  unsigned int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_unsigned_val_short) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  char *format = "%hu";
  unsigned short int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_unsigned_val_long) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  char *format = "%lu";
  unsigned long int val = 949149114140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_unsigned_val_many) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  char *format = "%lu, %u, %hu, %.5u, %5.u";
  unsigned long int val = 949149114140;
  ck_assert_int_eq(
      s21_sprintf(str1, format, val, 14, 1441, 14414, 9681),
      sprintf(str2, format, val, (unsigned)14, (unsigned short)1441,
              (unsigned)14414, (unsigned)9681));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_octal_width) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  char *format = "%15o";
  int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_octal_flags) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  char *format = "%-16o";
  int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_octal_precision) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  char *format = "%.51o";
  int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_octal_many_flags) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  char *format = "%-5.51o";
  int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_octal_zero) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  char *format = "%o";
  ck_assert_int_eq(s21_sprintf(str1, format, 0), sprintf(str2, format, 0));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_octal_hash) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  char *format = "%#o";
  int val = 57175;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_octal_short) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  char *format = "%hd";
  short int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_octal_long) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  char *format = "%lo";
  long int val = 949149114140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_octal_many) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  char *format = "%lo, %o, %ho, %.5o, %5.o";
  long int val = 949149114140;
  ck_assert_int_eq(
      s21_sprintf(str1, format, val, 14, 1441, 14414, 9681),
      sprintf(str2, format, val, (unsigned)14, (unsigned short)1441,
              (unsigned)14414, (unsigned)9681));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_octal) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  char *format = "%lo";
  long int val = 84518;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_unsigned_zero) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  char *format = "%u";
  ck_assert_int_eq(s21_sprintf(str1, format, 0),
                   sprintf(str2, format, (unsigned)0));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_hex_width) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  char *format = "%5x";
  unsigned val = 858158158;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_hex_flags) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  char *format = "%#-10x";
  unsigned val = 858158158;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_hex_precision) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  char *format = "%.15x";
  unsigned val = 858158158;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_hex_many) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  char *format = "%#-10x%x%X%#x%#X%5.5x";
  unsigned val = 858158158;
  ck_assert_int_eq(s21_sprintf(str1, format, val, val, val, val, val, val),
                   sprintf(str2, format, val, val, val, val, val, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_hex_many_flags) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  char *format = "%#-5.10x";
  unsigned val = 858158158;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_hex_zero) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  char *format = "%#x";
  unsigned val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_hex_huge) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  char *format = "%#x";
  unsigned val = 18571;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_hex_short) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  char *format = "%#hx";
  unsigned short val = 12352;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_hex_long) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  char *format = "%#lx";
  unsigned long val = 18571757371571;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_hex_one_longer_width) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  char *format = "%#2x";
  unsigned val = 1;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_hex_two_longer_width) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  char *format = "%#30x";
  unsigned val = 1;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_one_char) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  char *format = "%c";
  char val = 'X';
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST
START_TEST(sprintf_one_precision) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  char *format = "%.5c";
  char val = 'c';
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_one_flags) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  char *format = "% -5c";
  char val = 'c';
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_one_width) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  char *format = "%15c";
  char val = 'c';
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_one_many) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  char *format = "%-5.3c%c%c%c%c Hello! ABOBA";
  char val = 'c';
  ck_assert_int_eq(s21_sprintf(str1, format, val, 'c', 'a', 'b', 'b'),
                   sprintf(str2, format, val, 'c', 'a', 'b', 'b'));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_one_many_flags) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  char *format = "%-5.3c";
  char val = 'c';
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_string) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  char *format = "%s";
  char *val = "I LOVE STRINGS AND TESTS AND SCHOOL21 NO JOKE";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_string_precision) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  char *format = "%.15s";
  char *val = "I LOVE STRINGS AND TESTS AND SCHOOL21 NO JOKE";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_string_width) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  char *format = "%15s";
  char *val = "69 IS MY FAVORITE NUMBER";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_string_flags) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  char *format = "%-15.9s";
  char *val = "69 IS MY FAVORITE NUMBER";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_string_long) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  char *format = "%s";
  char *val =
      "69 IS MY FAVORITE NUMBER THIS IS SUPPOSED TO BE A VERY LONG STRING";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_string_many) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  char *format = "%s%s%s%s";
  char *val =
      "69 IS MY FAVORITE NUMBER THIS IS SUPPOSED TO BE A VERY LONG STRING";
  char *s1 = "";
  char *s2 = "87418347813748913749871389480913";
  char *s3 = "HAHAABOBASUCKER";
  ck_assert_int_eq(s21_sprintf(str1, format, val, s1, s2, s3),
                   sprintf(str2, format, val, s1, s2, s3));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_ptr) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  char *format = "%p";
  ck_assert_int_eq(s21_sprintf(str1, format, format),
                   sprintf(str2, format, format));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_ptr_width) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  char *format = "%15p";
  ck_assert_int_eq(s21_sprintf(str1, format, format),
                   sprintf(str2, format, format));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_ptr_precision) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  char *format = "%.5p";
  ck_assert_int_eq(s21_sprintf(str1, format, format),
                   sprintf(str2, format, format));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_string_width_huge) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *val = "kjafdiuhfjahfjdahf";
  char *format = "%120s";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_n_specifier) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  int ret = 0;
  char *format = "Hello, my sexy little aboba abobushka abobina %n";
  ck_assert_int_eq(s21_sprintf(str1, format, &ret),
                   s21_sprintf(str2, format, &ret));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_float_precision) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "%Lf";
  long double val = 513515.131513515151351;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_float_width) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "%10Lf";
  long double val = 15.35;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_float_precision_zero) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "%.0Lf";
  long double val = 15.35;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_float_precision_empty) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "%.Lf";
  long double val = 15.35;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_float_precision_huge) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "%.15Lf";
  long double val = 15.35;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_float_huge) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "%Lf";
  long double val = 72537572375.1431341;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_float_flags) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "% f";
  float val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_float_many) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "% .0f %.lf %Lf %f %lf %Lf";
  float val = 0;
  double val1 = 0;
  long double val2 = 3515315.153151;
  float val3 = 5.5;
  double val4 = 9851.51351;
  long double val5 = 95919539159.53151351131;
  ck_assert_int_eq(s21_sprintf(str1, format, val, val1, val2, val3, val4, val5),
                   sprintf(str2, format, val, val1, val2, val3, val4, val5));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_e_precision) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "%.17Le";
  long double val = 15.35;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_e_precision_zero) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "%.0Le";
  long double val = 15.35;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_e_precision_empty) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "%.Le";
  long double val = 15.000009121;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST
START_TEST(sprintf_e_precision_huge) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "%.15Le";
  long double val = 0.000000000000000123;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_e_precision_huge_negative) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "%.15Le";
  long double val = -15.35581134;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_e_huge) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "%Le";
  long double val = 72537572375.1431341;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_e_flags) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "%015E";
  float val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_e_width) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "%15e";
  float val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_e_many) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "% .0e %.le %Le %e %le %Le";
  float val = 0;
  double val1 = 0;
  long double val2 = 3515315.153151;
  float val3 = 5.5;
  double val4 = 0.094913941;
  long double val5 = 95919539159.53151351131;
  ck_assert_int_eq(s21_sprintf(str1, format, val, val1, val2, val3, val4, val5),
                   sprintf(str2, format, val, val1, val2, val3, val4, val5));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_E_int) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "%.17LE";
  long double val = 4134121;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_all_empty) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  ck_assert_int_eq(s21_sprintf(str1, "abc"), sprintf(str2, "abc"));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_one_char) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  ck_assert_int_eq(s21_sprintf(str1, "%c", '\t'), sprintf(str2, "%c", '\t'));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_many_char) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  ck_assert_int_eq(
      s21_sprintf(str1, "%*c%c%c%c%c", 5, '\t', '\n', '0', 'S', 's'),
      sprintf(str2, "%*c%c%c%c%c", 5, '\t', '\n', '0', 'S', 's'));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_one_string) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  ck_assert_int_eq(s21_sprintf(str1, "%s", "Drop Sega PLS"),
                   sprintf(str2, "%s", "Drop Sega PLS"));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_many_string) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  ck_assert_int_eq(
      s21_sprintf(str1, "%s%s%s%s%s", "Drop", " ", "Sega", " ", "PLS"),
      sprintf(str2, "%s%s%s%s%s", "Drop", " ", "Sega", " ", "PLS"));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_one_dec) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  ck_assert_int_eq(s21_sprintf(str1, "%d", 666), sprintf(str2, "%d", 666));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_many_dec) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  ck_assert_int_eq(s21_sprintf(str1, "%d%d%d%d", -999, 0, 666, -100),
                   sprintf(str2, "%d%d%d%d", -999, 0, 666, -100));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_one_int) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  ck_assert_int_eq(s21_sprintf(str1, "%i", -0), sprintf(str2, "%i", -0));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_many_int) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  ck_assert_int_eq(s21_sprintf(str1, "%i%i%i%i", -999, 0, 666, -100),
                   sprintf(str2, "%i%i%i%i", -999, 0, 666, -100));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_one_float) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  ck_assert_int_eq(s21_sprintf(str1, "%f", 0.0001),
                   sprintf(str2, "%f", 0.0001));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_many_float) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  ck_assert_int_eq(
      s21_sprintf(str1, "%f%f%f%f", -999.666, 0.0001, 666.999, -100.001),
      sprintf(str2, "%f%f%f%f", -999.666, 0.0001, 666.999, -100.001));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_one_unsigned_dec) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  ck_assert_int_eq(s21_sprintf(str1, "%u", 100),
                   sprintf(str2, "%u", (unsigned)100));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_many_unsigned_dec) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  ck_assert_int_eq(s21_sprintf(str1, "%u%u%u%u", 999, 0, 666, 100),
                   sprintf(str2, "%u%u%u%u", (unsigned)999, (unsigned)0,
                           (unsigned)666, (unsigned)100));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_one_char_with_alignment_left) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  ck_assert_int_eq(s21_sprintf(str1, "%8c", '\t'), sprintf(str2, "%8c", '\t'));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_one_char_with_alignment_right) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  ck_assert_int_eq(s21_sprintf(str1, "%-8c", '\t'),
                   sprintf(str2, "%-8c", '\t'));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_many_char_with_alignment) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  ck_assert_int_eq(
      s21_sprintf(str1, "%3c%-11c%10c%-2c%c", '\t', '\n', '0', 'S', 's'),
      sprintf(str2, "%3c%-11c%10c%-2c%c", '\t', '\n', '0', 'S', 's'));

  ck_assert_str_eq(str1, str2);
}
END_TEST

// START HEX TEST
START_TEST(sprintf_test_one_hex_lower) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  ck_assert_int_eq(s21_sprintf(str1, "%x", (unsigned)INT32_MIN),
                   sprintf(str2, "%x", (unsigned)INT32_MIN));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%x", 0), sprintf(str2, "%x", 0));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%x", INT32_MAX),
                   sprintf(str2, "%x", INT32_MAX));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_one_hex_upper) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  ck_assert_int_eq(s21_sprintf(str1, "%X", (unsigned)INT32_MIN),
                   sprintf(str2, "%X", (unsigned)INT32_MIN));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%X", 0), sprintf(str2, "%x", 0));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%X", INT32_MAX),
                   sprintf(str2, "%X", INT32_MAX));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_many_hex_lower) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  ck_assert_int_eq(
      s21_sprintf(str1, "%x%x%x%x%x", 12340987, 135, 0, -1230, -123213123),
      sprintf(str2, "%x%x%x%x%x", 12340987, 135, 0, -1230, -123213123));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_many_hex_upper) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  ck_assert_int_eq(
      s21_sprintf(str1, "%X%X%X%X%X", 12340987, 135, 0, -1230, -123213123),
      sprintf(str2, "%X%X%X%X%X", 12340987, 135, 0, -1230, -123213123));
  ck_assert_str_eq(str1, str2);
}
END_TEST
// END HEX TEST

// START HEX WITH ALIGNMENT
START_TEST(sprintf_test_one_hex_lower_with_alignment_left) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  ck_assert_int_eq(s21_sprintf(str1, "%-3x", (unsigned)INT32_MIN),
                   sprintf(str2, "%-3x", (unsigned)INT32_MIN));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%-3x", 0), sprintf(str2, "%-3x", 0));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%-3x", INT32_MAX),
                   sprintf(str2, "%-3x", INT32_MAX));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_one_hex_lower_with_alignment_right) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  ck_assert_int_eq(s21_sprintf(str1, "%13x", (unsigned)INT32_MIN),
                   sprintf(str2, "%13x", (unsigned)INT32_MIN));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%13x", 0), sprintf(str2, "%13x", 0));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%13x", INT32_MAX),
                   sprintf(str2, "%13x", INT32_MAX));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_one_hex_upper_with_alignment_left) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  ck_assert_int_eq(s21_sprintf(str1, "%-60X", INT32_MIN),
                   sprintf(str2, "%-60X", (unsigned)INT32_MIN));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%-60X", 0), sprintf(str2, "%-60X", 0));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%-60X", INT32_MAX),
                   sprintf(str2, "%-60X", INT32_MAX));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_one_hex_upper_with_alignment_right) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  ck_assert_int_eq(s21_sprintf(str1, "%7X", (unsigned)INT32_MIN),
                   sprintf(str2, "%7X", (unsigned)INT32_MIN));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%7X", 0), sprintf(str2, "%7X", 0));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%7X", INT32_MAX),
                   sprintf(str2, "%7X", INT32_MAX));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_many_hex_lower_with_alignment) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  ck_assert_int_eq(
      s21_sprintf(str1, "%2x%-7x%9x%11x%0x", 12340987, 100, 0, 1, -666999),
      sprintf(str2, "%2x%-7x%9x%11x%0x", 12340987, 100, 0, 1, -666999));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_many_hex_upper_with_alignment) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  ck_assert_int_eq(
      s21_sprintf(str1, "%2X%-7X%9X%11X%0X", 12340987, 100, 0, 1, -666999),
      sprintf(str2, "%2X%-7X%9X%11X%0X", 12340987, 100, 0, 1, -666999));
  ck_assert_str_eq(str1, str2);
}
END_TEST
// START HEX WITH ALIGNMENT

// START HEX TEST WITH #
START_TEST(sprintf_test_one_hex_with_hashtag) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  ck_assert_int_eq(s21_sprintf(str1, "%#x", INT32_MIN),
                   sprintf(str2, "%#x", (unsigned)INT32_MIN));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%#x", 0), sprintf(str2, "%#x", 0));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%#x", INT32_MAX),
                   sprintf(str2, "%#x", INT32_MAX));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_one_hex_upper_with_hashtag) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  ck_assert_int_eq(s21_sprintf(str1, "%#X", INT32_MIN),
                   sprintf(str2, "%#X", (unsigned)INT32_MIN));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%#X", 0), sprintf(str2, "%#X", 0));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%#X", INT32_MAX),
                   sprintf(str2, "%#X", INT32_MAX));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_many_hex_lower_with_hashtag_and_alignm) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  ck_assert_int_eq(
      s21_sprintf(str1, "%#x%#x%3x%#32x%#-1x", 87, 1222224535, -13, -0,
                  123213123),
      sprintf(str2, "%#x%#x%3x%#32x%#-1x", 87, 1222224535, -13, -0, 123213123));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_many_hex_upper_with_hashtag_and_alignm) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  ck_assert_int_eq(
      s21_sprintf(str1, "%#X%#X%3X%#32X%#-1X", 87, 1222224535, -13, -0,
                  123213123),
      sprintf(str2, "%#X%#X%3X%#32X%#-1X", 87, 1222224535, -13, -0, 123213123));
  ck_assert_str_eq(str1, str2);
}
END_TEST
// END HEX TEST WITH #

// START HEX TEST with width *
START_TEST(sprintf_test_one_hex_lower_with_width_star) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  ck_assert_int_eq(s21_sprintf(str1, "%*x", 11, INT32_MIN),
                   sprintf(str2, "%*x", 11, (unsigned)INT32_MIN));
  ck_assert_str_eq(str1, str2);

  ck_assert_int_eq(s21_sprintf(str1, "%*x", 11, 0),
                   sprintf(str2, "%*x", 11, 0));
  ck_assert_str_eq(str1, str2);

  ck_assert_int_eq(s21_sprintf(str1, "%*x", 11, INT32_MAX),
                   sprintf(str2, "%*x", 11, INT32_MAX));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_one_hex_upper_with_width_star) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  ck_assert_int_eq(s21_sprintf(str1, "%*X", 11, INT32_MIN),
                   sprintf(str2, "%*X", 11, (unsigned)INT32_MIN));
  ck_assert_str_eq(str1, str2);

  ck_assert_int_eq(s21_sprintf(str1, "%*X", 11, 0),
                   sprintf(str2, "%*X", 11, 0));
  ck_assert_str_eq(str1, str2);

  ck_assert_int_eq(s21_sprintf(str1, "%*X", 11, INT32_MAX),
                   sprintf(str2, "%*X", 11, INT32_MAX));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_many_hex_lower_with_width_star_and_align_and_hashtag) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  ck_assert_int_eq(s21_sprintf(str1, "%#*x%*x%-12x%3x%*x", 9, 127312897, 0, -1,
                               199, -123978, 3, -1251),
                   sprintf(str2, "%#*x%*x%-12x%3x%*x", 9, 127312897, -0, -1,
                           199, -123978, 3, -1251));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_many_hex_upper_with_width_star) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  ck_assert_int_eq(s21_sprintf(str1, "%#*X%*X%-12X%3X%*X", 9, 127312897, 0, -1,
                               199, -123978, 3, -1251),
                   sprintf(str2, "%#*X%*X%-12X%3X%*X", 9, 127312897, 0, -1, 199,
                           -123978, 3, -1251));
  ck_assert_str_eq(str1, str2);
}
END_TEST
// END HEX TEST WITH Width *

// START HEX TEST WITH precision
START_TEST(sprintf_test_one_hex_lower_with_precision) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  int a = s21_sprintf(str1, "%*.6x", 11, 0);
  int b = sprintf(str2, "%*.6x", 11, 0);
  ck_assert_int_eq(a, b);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_one_hex_upper_with_precision) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  int a = s21_sprintf(str1, "%*.6X", 11, INT32_MIN);
  int b = sprintf(str2, "%*.6X", 11, (unsigned)INT32_MIN);
  ck_assert_int_eq(a, b);
  ck_assert_str_eq(str1, str2);
}
END_TEST

// END HEX TEST WITH precision

// START HEX TEST WITH Length

START_TEST(sprintf_test_sprintf1) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char format[] = "%10ld";

  ck_assert_int_eq(s21_sprintf(str1, format, 1), sprintf(str2, format, 1));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf2) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char format[] = "%1.1f";

  ck_assert_int_eq(s21_sprintf(str1, format, 1.1), sprintf(str2, format, 1.1));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf3) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char format[] = "%8.3c";

  ck_assert_int_eq(s21_sprintf(str1, format, 'a'), sprintf(str2, format, 'a'));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf4) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char format[] = "%+5.5d aboba";

  int val = 10000;
  int a = s21_sprintf(str1, format, val);
  int b = sprintf(str2, format, val);
  ck_assert_int_eq(a, b);

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf6) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char format[] = "%7.7f";

  ck_assert_int_eq(s21_sprintf(str1, format, 11.123456),
                   sprintf(str2, format, 11.123456));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf7) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char format[] = "%7.4s";

  ck_assert_int_eq(s21_sprintf(str1, format, "aboba floppa"),
                   sprintf(str2, format, "aboba floppa"));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf8) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char format[] = "%6.6u";

  ck_assert_int_eq(s21_sprintf(str1, format, 12341151),
                   sprintf(str2, format, 12341151));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf9) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char format[] = "%li%ld%lu";

  ck_assert_int_eq(s21_sprintf(str1, format, 666666666666, 777, 111),
                   sprintf(str2, format, 666666666666, 777, 111));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf10) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char format[] = "%hi%hd%hu";

  ck_assert_int_eq(s21_sprintf(str1, format, 666, -777, 111),
                   sprintf(str2, format, 666, -777, 111));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf11) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char format[] = "%+li%+lu%+d%+lf";

  ck_assert_int_eq(s21_sprintf(str1, format, -123, 321, -5555, -1213.123),
                   sprintf(str2, format, -123, 321, -5555, -1213.123));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf12) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char format[] = "%-11.11li%-35.5lu%-3.5ld%33.17Lf";
  long double k = 333.33213;

  ck_assert_int_eq(
      s21_sprintf(str1, format, 66666666666, 5555555555, 44444444444, k),
      sprintf(str2, format, 66666666666, 5555555555, 44444444444, k));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf14) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char format[] = "% 0.0li% 0.0lu% 0.0ld % 0.0lf";

  ck_assert_int_eq(s21_sprintf(str1, format, 1, 222, 33333333333, -166513.1232),
                   sprintf(str2, format, 1, 222, 33333333333, -166513.1232));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf15) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char format[] = "% 0.0hi% 0.0hu% 0.0hd % 0.0hf";

  ck_assert_int_eq(s21_sprintf(str1, format, 1, 222, 33333333333, -166513.1232),
                   sprintf(str2, format, 1, 222, 33333333333, -166513.1232));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf16) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char format[] = "% c";

  ck_assert_int_eq(s21_sprintf(str1, format, 'a'), sprintf(str2, format, 'a'));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf17) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char format[] = "% s";

  ck_assert_int_eq(s21_sprintf(str1, format, "aboba likes floppa"),
                   sprintf(str2, format, "aboba likes floppa"));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf18) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char format[] = "% s% c";

  ck_assert_int_eq(s21_sprintf(str1, format, "", 'f'),
                   sprintf(str2, format, "", 'f'));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf19) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char format[] = "%210s";

  ck_assert_int_eq(s21_sprintf(str1, format, "AHHAHAHA\0AHHAHAHAH"),
                   sprintf(str2, format, "AHHAHAHA\0AHHAHAHAH"));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf20) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char format[] = "%-115s";

  ck_assert_int_eq(s21_sprintf(str1, format, "Nick her"),
                   sprintf(str2, format, "Nick her"));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf24) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char format[] = "%+2.1c%+4.2d%+5.4i%+10.2f%+55.55s%+1.1u";

  ck_assert_int_eq(
      s21_sprintf(str1, format, 'f', 21, 42, 666.666,
                  "Lorem ipsum dolor sit amet. Aut quam ducimus.", 11),
      sprintf(str2, format, 'f', 21, 42, 666.666,
              "Lorem ipsum dolor sit amet. Aut quam ducimus.", 11));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf25) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char format[] = "%.f";

  ck_assert_int_eq(s21_sprintf(str1, format, 121.123),
                   sprintf(str2, format, 121.123));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf28) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  int n1 = 0;
  int n2 = 0;
  int a = s21_sprintf(str1, "%d%n", 123, &n1);
  int b = s21_sprintf(str2, "%d%n", 123, &n2);

  ck_assert_int_eq(a, b);
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(sprintf_test_sprintf29) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char format[] = "%-.f";

  ck_assert_int_eq(s21_sprintf(str1, format, 111.111),
                   sprintf(str2, format, 111.111));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf30) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char format[] = "%-.1d";

  ck_assert_int_eq(s21_sprintf(str1, format, 111), sprintf(str2, format, 111));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf31) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char format[] = "%e";
  double x = 111;
  ck_assert_int_eq(s21_sprintf(str1, format, x), sprintf(str2, format, x));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf32) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char format[] = "%e%e%e%e";

  ck_assert_int_eq(s21_sprintf(str1, format, 11.111, 222.2222, 666., -555.125),
                   sprintf(str2, format, 11.111, 222.2222, 666., -555.125));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf33) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char format[] = "%Le";
  long double x = 122.1231;

  ck_assert_int_eq(s21_sprintf(str1, format, x), sprintf(str2, format, x));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf35) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char format[] = "%.10e";

  ck_assert_int_eq(s21_sprintf(str1, format, 111.184314818),
                   sprintf(str2, format, 111.184314818));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf36) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char format[] = "%5.3e%3.2e%lf";

  ck_assert_int_eq(s21_sprintf(str1, format, 0.000111, 111.555, 1.999),
                   sprintf(str2, format, 0.000111, 111.555, 1.999));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf37) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char format[] = "%E";

  ck_assert_int_eq(s21_sprintf(str1, format, 0.666666),
                   sprintf(str2, format, 0.666666));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf38) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char format[] = "%*.*E%E%E";

  ck_assert_int_eq(s21_sprintf(str1, format, 5, 5, 0.0000999, 111.9999, 6.666),
                   sprintf(str2, format, 5, 5, 0.0000999, 111.9999, 6.666));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf39) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char format[] = "%e ABOBA %Lf %Lf %Le";
  long double c = 848181;
  long double a = 0.00000001;
  long double b = 1111111.11;
  ck_assert_int_eq(s21_sprintf(str1, format, 123.123, a, b, c),
                   sprintf(str2, format, 123.123, a, b, c));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf40) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char format[] = "%#e Floppa %#E%#f";

  ck_assert_int_eq(s21_sprintf(str1, format, 123.111, 0.0000999, 0.555),
                   sprintf(str2, format, 123.111, 0.0000999, 0.555));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf41) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char format[] = "%.Lf";
  long double a = 7.9418438184;

  ck_assert_int_eq(s21_sprintf(str1, format, a), sprintf(str2, format, a));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf42) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char format[] = "%#5p";
  int a = 5;
  ck_assert_int_eq(s21_sprintf(str1, format, &a), sprintf(str2, format, &a));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf43) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char format[] = "%.5o";

  ck_assert_int_eq(s21_sprintf(str1, format, 12345),
                   sprintf(str2, format, 12345));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf44) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char format[] = "%#5lX";
  long hex = 314818438141;
  ck_assert_int_eq(s21_sprintf(str1, format, hex), sprintf(str2, format, hex));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_g_trailing_zero) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char format[] = "%g";
  double hex = 0.50300;
  ck_assert_int_eq(s21_sprintf(str1, format, hex), sprintf(str2, format, hex));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_g_large) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char format[] = "%*.*g";
  double hex = 5131.43141;
  ck_assert_int_eq(s21_sprintf(str1, format, 3, 5, hex),
                   sprintf(str2, format, 3, 5, hex));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_g_small) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char format[] = "%g";
  double hex = 0.123000;
  ck_assert_int_eq(s21_sprintf(str1, format, hex), sprintf(str2, format, hex));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_g_precision) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char format[] = "%.5g";
  double hex = 0.123000;
  ck_assert_int_eq(s21_sprintf(str1, format, hex), sprintf(str2, format, hex));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_g_precision_zero) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char format[] = "%.0g";
  double hex = 0.123000;
  ck_assert_int_eq(s21_sprintf(str1, format, hex), sprintf(str2, format, hex));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_g_precision_missing) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char format[] = "%.g";
  double hex = 0.123000;
  ck_assert_int_eq(s21_sprintf(str1, format, hex), sprintf(str2, format, hex));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_g_one_zero) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char format[] = "%g";
  double hex = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, hex), sprintf(str2, format, hex));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_g_zero) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char format[] = "%.5g";
  double hex = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, hex), sprintf(str2, format, hex));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_g_mantiss) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char format[] = "%g";
  double hex = 0.0000005;
  ck_assert_int_eq(s21_sprintf(str1, format, hex), sprintf(str2, format, hex));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_g_mantiss_flags) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char format[] = "%5.8g";
  double hex = 0.0000005;
  ck_assert_int_eq(s21_sprintf(str1, format, hex), sprintf(str2, format, hex));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_g_short_no_mantiss) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char format[] = "%g";
  double hex = 0.005;
  ck_assert_int_eq(s21_sprintf(str1, format, hex), sprintf(str2, format, hex));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_LG) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char format[] = "%LG";
  long double hex = 0.000005;
  ck_assert_int_eq(s21_sprintf(str1, format, hex), sprintf(str2, format, hex));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_g_many) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char format[] = "%LG %g %G %Lg %.5g";
  long double hex = 0.000005;
  double hex1 = 41.1341;
  double hex2 = 848.9000;
  long double hex3 = 0.0843;
  double hex4 = 0.0005;
  double hex5 = 0.8481481;
  ck_assert_int_eq(s21_sprintf(str1, format, hex, hex1, hex2, hex3, hex4, hex5),
                   sprintf(str2, format, hex, hex1, hex2, hex3, hex4, hex5));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(wide_char) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  char *format = "This is a simple wide char %05lc%-5lc";
  unsigned long w = L'汉';
  int a = s21_sprintf(str1, format, w, w);
  int b = s21_sprintf(str2, format, w, w);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(a, b);
}
END_TEST

START_TEST(sprintf_width_char) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  char *format = "This is a simple wide char %5c";
  char w = 'c';
  int a = s21_sprintf(str1, format, w);
  int b = sprintf(str2, format, w);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(a, b);
}
END_TEST

START_TEST(float_with_hash_and_null) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  int a = s21_sprintf(str1, "%#.0f %015f %-10f", 5.364, 3.333, 0.1);
  int b = sprintf(str2, "%#.0f %015f %-10f", 5.364, 3.333, 0.1);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(a, b);
}
END_TEST

START_TEST(lld_and_null) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  long long int val = 11111111111111111;

  int a = s21_sprintf(str1, "%020lld", val);
  int b = sprintf(str2, "%020lld", val);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(a, b);
}
END_TEST

START_TEST(llu_and_null) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  long long unsigned int val = 11111111111111111;

  int a = s21_sprintf(str1, "%20llu   %5c", val, 'q');
  int b = sprintf(str2, "%20llu   %5c", val, 'q');
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(a, b);
}
END_TEST

START_TEST(string_null) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  int a = s21_sprintf(str1, "%15s", "qwqwqw");
  int b = sprintf(str2, "%15s", "qwqwqw");
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(a, b);
}
END_TEST

START_TEST(with_star) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  unsigned int val = 10;

  int a = s21_sprintf(str1, "%*.*s %*.*u %*.*d %*.*f", 10, 4, "qwqwqw", 10, 5,
                      val, 10, 5, -10, 10, 4, 1. / 3.);
  int b = sprintf(str2, "%*.*s %*.*u %*.*d %*.*f", 10, 4, "qwqwqw", 10, 5, val,
                  10, 5, -10, 10, 4, 1. / 3.);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(a, b);
}
END_TEST

START_TEST(llo) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  unsigned long long int q = 5858439935749375;
  int a = s21_sprintf(str1, "%*.*llx", 30, 25, q);
  int b = sprintf(str2, "%*.*llx", 30, 25, q);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(a, b);
}
END_TEST

START_TEST(x_test) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  unsigned long long int q = 5858439935749375;
  int a = s21_sprintf(str1, "%*.*llx %015x %0#7x", 10, 30, q, 12345, 12345);
  int b = sprintf(str2, "%*.*llx %015x %0#7x", 10, 30, q, 12345, 12345);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(a, b);
}
END_TEST

START_TEST(o_test) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  unsigned long long int q = 5858439935749375;
  int a = s21_sprintf(str1, "%*.*llo", 25, 30, q);
  int b = sprintf(str2, "%*.*llo", 25, 30, q);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(a, b);
}
END_TEST

START_TEST(test_default129) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  char *format = "%p";
  s21_sprintf(str1, format, format);
  sprintf(str2, format, format);

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_default130) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  char *format = "%15p";
  s21_sprintf(str1, format, format);
  sprintf(str2, format, format);

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_default131) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  char *format = "%.5p";
  s21_sprintf(str1, format, format);
  sprintf(str2, format, format);

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_default132) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];

  char *format = "%p";
  char *ptr = "(nil)";
  s21_sprintf(str1, format, ptr);
  sprintf(str2, format, ptr);

  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *s21_sprintf_suite(void) {
  Suite *s;
  TCase *tc;

  s = suite_create("s21_sprintf");

  tc = tcase_create("case_sprintf");

  tcase_add_test(tc, sprintf_simple_int);
  tcase_add_test(tc, sprintf_precise_int);
  tcase_add_test(tc, sprintf_width_int);
  tcase_add_test(tc, sprintf_minus_width_int);
  tcase_add_test(tc, sprintf_plus_width_int);
  tcase_add_test(tc, sprintf_padding_int);
  tcase_add_test(tc, sprintf_star_precision_int);
  tcase_add_test(tc, sprintf_many_flags_many_ints);
  tcase_add_test(tc, sprintf_flags_long_int);
  tcase_add_test(tc, sprintf_flags_short_int);
  tcase_add_test(tc, sprintf_flags_another_long_int);
  tcase_add_test(tc, sprintf_zero_precision_zero_int);
  tcase_add_test(tc, sprintf_space_flag_int);
  tcase_add_test(tc, sprintf_unsigned_val);
  tcase_add_test(tc, sprintf_unsigned_val_width);
  tcase_add_test(tc, sprintf_unsigned_val_flags);
  tcase_add_test(tc, sprintf_unsigned_val_precision);
  tcase_add_test(tc, sprintf_unsigned_val_many_flags);
  tcase_add_test(tc, sprintf_unsigned_val_short);
  tcase_add_test(tc, sprintf_unsigned_val_long);
  tcase_add_test(tc, sprintf_unsigned_val_many);

  tcase_add_test(tc, sprintf_octal_width);
  tcase_add_test(tc, sprintf_octal_flags);
  tcase_add_test(tc, sprintf_octal_precision);
  tcase_add_test(tc, sprintf_octal_many_flags);
  tcase_add_test(tc, sprintf_octal_short);
  tcase_add_test(tc, sprintf_octal_long);
  tcase_add_test(tc, sprintf_octal_many);
  tcase_add_test(tc, sprintf_octal);
  tcase_add_test(tc, sprintf_octal_zero);
  tcase_add_test(tc, sprintf_octal_hash);
  tcase_add_test(tc, sprintf_unsigned_zero);
  tcase_add_test(tc, sprintf_hex_width);
  tcase_add_test(tc, sprintf_hex_flags);
  tcase_add_test(tc, sprintf_hex_precision);
  tcase_add_test(tc, sprintf_hex_many);
  tcase_add_test(tc, sprintf_hex_many_flags);
  tcase_add_test(tc, sprintf_hex_zero);
  tcase_add_test(tc, sprintf_hex_huge);
  tcase_add_test(tc, sprintf_hex_short);
  tcase_add_test(tc, sprintf_hex_long);
  tcase_add_test(tc, sprintf_hex_one_longer_width);
  tcase_add_test(tc, sprintf_hex_two_longer_width);
  tcase_add_test(tc, sprintf_one_char);
  tcase_add_test(tc, sprintf_one_precision);
  tcase_add_test(tc, sprintf_one_flags);
  tcase_add_test(tc, sprintf_one_width);
  tcase_add_test(tc, sprintf_one_many);
  tcase_add_test(tc, sprintf_one_many_flags);
  tcase_add_test(tc, sprintf_string);
  tcase_add_test(tc, sprintf_string_precision);
  tcase_add_test(tc, sprintf_string_width);
  tcase_add_test(tc, sprintf_string_flags);
  tcase_add_test(tc, sprintf_string_long);
  tcase_add_test(tc, sprintf_string_many);
  tcase_add_test(tc, sprintf_ptr);
  tcase_add_test(tc, sprintf_ptr_width);
  tcase_add_test(tc, sprintf_ptr_precision);
  tcase_add_test(tc, sprintf_n_specifier);
  tcase_add_test(tc, sprintf_string_width_huge);
  tcase_add_test(tc, sprintf_float_precision);
  tcase_add_test(tc, sprintf_float_width);
  tcase_add_test(tc, sprintf_float_precision_zero);
  tcase_add_test(tc, sprintf_float_precision_empty);
  tcase_add_test(tc, sprintf_float_precision_huge);
  tcase_add_test(tc, sprintf_float_huge);
  tcase_add_test(tc, sprintf_float_flags);
  tcase_add_test(tc, sprintf_float_many);
  tcase_add_test(tc, sprintf_e_precision);
  tcase_add_test(tc, sprintf_e_precision_zero);
  tcase_add_test(tc, sprintf_e_precision_empty);
  tcase_add_test(tc, sprintf_e_precision_huge);
  tcase_add_test(tc, sprintf_e_precision_huge_negative);
  tcase_add_test(tc, sprintf_e_huge);
  tcase_add_test(tc, sprintf_e_many);
  tcase_add_test(tc, sprintf_e_width);
  tcase_add_test(tc, sprintf_e_flags);
  tcase_add_test(tc, sprintf_E_int);
  tcase_add_test(tc, sprintf_all_empty);
  tcase_add_test(tc, sprintf_test_one_char);
  tcase_add_test(tc, sprintf_test_many_char);
  tcase_add_test(tc, wide_char);
  tcase_add_test(tc, sprintf_test_one_string);
  tcase_add_test(tc, sprintf_test_many_string);
  tcase_add_test(tc, sprintf_test_one_dec);
  tcase_add_test(tc, sprintf_test_many_dec);
  tcase_add_test(tc, sprintf_test_one_int);
  tcase_add_test(tc, sprintf_test_many_int);
  tcase_add_test(tc, sprintf_test_one_float);
  tcase_add_test(tc, sprintf_test_many_float);
  tcase_add_test(tc, sprintf_test_one_unsigned_dec);
  tcase_add_test(tc, sprintf_test_many_unsigned_dec);
  tcase_add_test(tc, sprintf_test_one_char_with_alignment_left);
  tcase_add_test(tc, sprintf_test_one_char_with_alignment_right);
  tcase_add_test(tc, sprintf_test_many_char_with_alignment);
  tcase_add_test(tc, sprintf_test_one_hex_lower);
  tcase_add_test(tc, sprintf_test_one_hex_upper);
  tcase_add_test(tc, sprintf_test_many_hex_lower);
  tcase_add_test(tc, sprintf_test_many_hex_upper);
  tcase_add_test(tc, sprintf_test_one_hex_lower_with_alignment_left);
  tcase_add_test(tc, sprintf_test_one_hex_lower_with_alignment_right);
  tcase_add_test(tc, sprintf_test_one_hex_upper_with_alignment_left);
  tcase_add_test(tc, sprintf_test_one_hex_upper_with_alignment_right);
  tcase_add_test(tc, sprintf_test_many_hex_lower_with_alignment);
  tcase_add_test(tc, sprintf_test_many_hex_upper_with_alignment);
  tcase_add_test(tc, sprintf_test_one_hex_with_hashtag);
  tcase_add_test(tc, sprintf_test_one_hex_upper_with_hashtag);
  tcase_add_test(tc, sprintf_test_many_hex_lower_with_hashtag_and_alignm);
  tcase_add_test(tc, sprintf_test_many_hex_upper_with_hashtag_and_alignm);
  tcase_add_test(tc, sprintf_test_one_hex_lower_with_width_star);
  tcase_add_test(tc, sprintf_test_one_hex_upper_with_width_star);
  tcase_add_test(
      tc, sprintf_test_many_hex_lower_with_width_star_and_align_and_hashtag);
  tcase_add_test(tc, sprintf_test_many_hex_upper_with_width_star);
  tcase_add_test(tc, sprintf_test_one_hex_lower_with_precision);
  tcase_add_test(tc, sprintf_test_one_hex_upper_with_precision);
  tcase_add_test(tc, sprintf_test_sprintf1);
  tcase_add_test(tc, sprintf_test_sprintf2);
  tcase_add_test(tc, sprintf_test_sprintf3);
  tcase_add_test(tc, sprintf_test_sprintf4);
  tcase_add_test(tc, sprintf_test_sprintf6);
  tcase_add_test(tc, sprintf_test_sprintf7);
  tcase_add_test(tc, sprintf_test_sprintf8);
  tcase_add_test(tc, sprintf_test_sprintf9);
  tcase_add_test(tc, sprintf_test_sprintf10);
  tcase_add_test(tc, sprintf_test_sprintf11);
  tcase_add_test(tc, sprintf_test_sprintf12);
  tcase_add_test(tc, sprintf_test_sprintf14);
  tcase_add_test(tc, sprintf_test_sprintf15);
  tcase_add_test(tc, sprintf_test_sprintf16);
  tcase_add_test(tc, sprintf_test_sprintf17);
  tcase_add_test(tc, sprintf_test_sprintf18);
  tcase_add_test(tc, sprintf_test_sprintf19);
  tcase_add_test(tc, sprintf_test_sprintf20);
  tcase_add_test(tc, sprintf_test_sprintf24);
  tcase_add_test(tc, sprintf_test_sprintf25);
  tcase_add_test(tc, sprintf_test_sprintf28);
  tcase_add_test(tc, sprintf_test_sprintf29);
  tcase_add_test(tc, sprintf_test_sprintf30);
  tcase_add_test(tc, sprintf_test_sprintf31);
  tcase_add_test(tc, sprintf_test_sprintf32);
  tcase_add_test(tc, sprintf_test_sprintf33);
  tcase_add_test(tc, sprintf_test_sprintf35);
  tcase_add_test(tc, sprintf_test_sprintf36);
  tcase_add_test(tc, sprintf_test_sprintf37);
  tcase_add_test(tc, sprintf_test_sprintf38);
  tcase_add_test(tc, sprintf_test_sprintf39);
  tcase_add_test(tc, sprintf_test_sprintf40);
  tcase_add_test(tc, sprintf_test_sprintf41);
  tcase_add_test(tc, sprintf_test_sprintf42);
  tcase_add_test(tc, sprintf_test_sprintf43);
  tcase_add_test(tc, sprintf_test_sprintf44);
  tcase_add_test(tc, sprintf_g_trailing_zero);
  tcase_add_test(tc, sprintf_g_large);
  tcase_add_test(tc, sprintf_g_small);
  tcase_add_test(tc, sprintf_g_precision);
  tcase_add_test(tc, sprintf_g_precision_zero);
  tcase_add_test(tc, sprintf_g_precision_missing);
  tcase_add_test(tc, sprintf_g_one_zero);
  tcase_add_test(tc, sprintf_g_mantiss);
  tcase_add_test(tc, sprintf_g_mantiss_flags);
  tcase_add_test(tc, sprintf_g_short_no_mantiss);
  tcase_add_test(tc, sprintf_LG);
  tcase_add_test(tc, sprintf_g_many);
  tcase_add_test(tc, sprintf_g_zero);
  tcase_add_test(tc, sprintf_width_char);
  tcase_add_test(tc, float_with_hash_and_null);
  tcase_add_test(tc, lld_and_null);
  tcase_add_test(tc, llu_and_null);
  tcase_add_test(tc, string_null);
  tcase_add_test(tc, with_star);
  tcase_add_test(tc, llo);
  tcase_add_test(tc, x_test);
  tcase_add_test(tc, o_test);
  tcase_add_test(tc, test_default129);
  tcase_add_test(tc, test_default130);
  tcase_add_test(tc, test_default131);
  tcase_add_test(tc, test_default132);

  suite_add_tcase(s, tc);
  return s;
}

Suite *s21_strchr_suite(void) {
  Suite *s;
  TCase *tc;

  s = suite_create("s21_strchr");

  tc = tcase_create("case_strchr");

  tcase_add_test(tc, s21_strchr_1);
  tcase_add_test(tc, s21_strchr_2);
  tcase_add_test(tc, s21_strchr_3);
  tcase_add_test(tc, s21_strchr_4);
  tcase_add_test(tc, s21_strchr_5);

  suite_add_tcase(s, tc);
  return s;
}

Suite *s21_strlen_suite(void) {
  Suite *s;
  TCase *tc;

  s = suite_create("s21_strlen");

  tc = tcase_create("case_strlen");

  tcase_add_test(tc, s21_strlen_1);
  tcase_add_test(tc, s21_strlen_2);
  tcase_add_test(tc, s21_strlen_3);
  tcase_add_test(tc, s21_strlen_4);

  suite_add_tcase(s, tc);
  return s;
}

Suite *s21_memchr_suite(void) {
  Suite *s;
  TCase *tc;

  s = suite_create("s21_memchr");

  tc = tcase_create("case_memchr");

  tcase_add_test(tc, s21_memchr_1);
  tcase_add_test(tc, s21_memchr_2);
  tcase_add_test(tc, s21_memchr_3);
  tcase_add_test(tc, s21_memchr_4);
  tcase_add_test(tc, s21_memchr_5);
  tcase_add_test(tc, s21_memchr_6);
  tcase_add_test(tc, s21_memchr_7);

  suite_add_tcase(s, tc);
  return s;
}

Suite *s21_strncmp_suite(void) {
  Suite *s;
  TCase *tc;

  s = suite_create("s21_strncmp");

  tc = tcase_create("case_strncmp");

  tcase_add_test(tc, s21_strncmp_1);
  tcase_add_test(tc, s21_strncmp_2);
  tcase_add_test(tc, s21_strncmp_3);
  tcase_add_test(tc, s21_strncmp_4);
  tcase_add_test(tc, s21_strncmp_5);

  suite_add_tcase(s, tc);
  return s;
}

Suite *s21_memcmp_suite(void) {
  Suite *s;
  TCase *tc;

  s = suite_create("s21_memcmp");

  tc = tcase_create("case_memcmp");

  tcase_add_test(tc, s21_memcmp_1);
  tcase_add_test(tc, s21_memcmp_2);
  tcase_add_test(tc, s21_memcmp_3);
  tcase_add_test(tc, s21_memcmp_4);
  tcase_add_test(tc, s21_memcmp_5);
  tcase_add_test(tc, s21_memcmp_6);
  tcase_add_test(tc, s21_memcmp_7);
  tcase_add_test(tc, s21_memcmp_8);

  suite_add_tcase(s, tc);
  return s;
}

Suite *s21_memcpy_suite(void) {
  Suite *s;
  TCase *tc;

  s = suite_create("s21_memcpy");

  tc = tcase_create("case_memcpy");

  tcase_add_test(tc, s21_memcpy_1);
  tcase_add_test(tc, s21_memcpy_2);
  tcase_add_test(tc, s21_memcpy_3);
  tcase_add_test(tc, s21_memcpy_4);

  suite_add_tcase(s, tc);
  return s;
}

Suite *s21_strncat_suite(void) {
  Suite *s;
  TCase *tc;

  s = suite_create("s21_strncat");

  tc = tcase_create("case_strncat");

  tcase_add_test(tc, s21_strncat_1);
  tcase_add_test(tc, s21_strncat_2);
  tcase_add_test(tc, s21_strncat_3);
  tcase_add_test(tc, s21_strncat_4);
  tcase_add_test(tc, s21_strncat_5);
  tcase_add_test(tc, s21_strncat_6);
  tcase_add_test(tc, s21_strncat_7);

  suite_add_tcase(s, tc);
  return s;
}

Suite *s21_strncpy_suite(void) {
  Suite *s;
  TCase *tc;

  s = suite_create("s21_strncpy");

  tc = tcase_create("case_strncpy");

  tcase_add_test(tc, s21_strncpy_1);
  tcase_add_test(tc, s21_strncpy_2);
  tcase_add_test(tc, s21_strncpy_3);
  tcase_add_test(tc, s21_strncpy_4);
  tcase_add_test(tc, s21_strncpy_5);

  suite_add_tcase(s, tc);
  return s;
}

Suite *s21_memset_suite(void) {
  Suite *s;
  TCase *tc;

  s = suite_create("s21_memset");

  tc = tcase_create("case_memset");

  tcase_add_test(tc, s21_memset_1);
  tcase_add_test(tc, s21_memset_2);
  tcase_add_test(tc, s21_memset_3);
  tcase_add_test(tc, s21_memset_4);
  tcase_add_test(tc, s21_memset_5);
  tcase_add_test(tc, s21_memset_6);

  suite_add_tcase(s, tc);
  return s;
}

Suite *s21_strpbrk_suite(void) {
  Suite *s;
  TCase *tc;

  s = suite_create("s21_strpbrk");

  tc = tcase_create("case_strpbrk");

  tcase_add_test(tc, s21_strpbrk_1);
  tcase_add_test(tc, s21_strpbrk_2);
  tcase_add_test(tc, s21_strpbrk_3);
  tcase_add_test(tc, s21_strpbrk_4);
  tcase_add_test(tc, s21_strpbrk_5);

  suite_add_tcase(s, tc);
  return s;
}

Suite *s21_strstr_suite(void) {
  Suite *s;
  TCase *tc;

  s = suite_create("s21_strstr");

  tc = tcase_create("case_strstr");

  tcase_add_test(tc, s21_strstr_1);
  tcase_add_test(tc, s21_strstr_2);
  tcase_add_test(tc, s21_strstr_3);
  tcase_add_test(tc, s21_strstr_4);
  tcase_add_test(tc, s21_strstr_5);

  suite_add_tcase(s, tc);
  return s;
}

Suite *s21_strrchr_suite(void) {
  Suite *s;
  TCase *tc;

  s = suite_create("s21_strrchr");

  tc = tcase_create("case_strrchr");

  tcase_add_test(tc, s21_strrchr_1);
  tcase_add_test(tc, s21_strrchr_2);
  tcase_add_test(tc, s21_strrchr_3);
  tcase_add_test(tc, s21_strrchr_4);
  tcase_add_test(tc, s21_strrchr_5);

  suite_add_tcase(s, tc);
  return s;
}

Suite *s21_strcspn_suite(void) {
  Suite *s;
  TCase *tc;

  s = suite_create("s21_strcspn");

  tc = tcase_create("case_strcspn");

  tcase_add_test(tc, s21_strcspn_2);
  tcase_add_test(tc, s21_strcspn_3);
  tcase_add_test(tc, s21_strcspn_4);
  tcase_add_test(tc, s21_strcspn_5);
  tcase_add_test(tc, s21_strcspn_6);

  suite_add_tcase(s, tc);
  return s;
}

Suite *s21_strerror_suite(void) {
  Suite *s;
  TCase *tc;

  s = suite_create("s21_strerror");

  tc = tcase_create("case_strerror");

  tcase_add_test(tc, s21_strerror_1);
  tcase_add_test(tc, s21_strerror_2);
  tcase_add_test(tc, s21_strerror_3);
  tcase_add_test(tc, s21_strerror_4);
  tcase_add_test(tc, s21_strerror_5);
  tcase_add_test(tc, s21_strerror_6);

  suite_add_tcase(s, tc);
  return s;
}

Suite *s21_to_lower_suite(void) {
  Suite *s;
  TCase *tc;

  s = suite_create("s21_to_lower");

  tc = tcase_create("case_to_lower");

  tcase_add_test(tc, s21_to_lower_1);
  tcase_add_test(tc, s21_to_lower_2);
  tcase_add_test(tc, s21_to_lower_3);
  tcase_add_test(tc, s21_to_lower_4);

  suite_add_tcase(s, tc);
  return s;
}

Suite *s21_insert_suite(void) {
  Suite *s;
  TCase *tc;

  s = suite_create("s21_insert");

  tc = tcase_create("case_insert");

  tcase_add_test(tc, s21_insert_1);
  tcase_add_test(tc, s21_insert_2);
  tcase_add_test(tc, s21_insert_3);

  suite_add_tcase(s, tc);
  return s;
}

Suite *s21_trim_suite(void) {
  Suite *s;
  TCase *tc;

  s = suite_create("s21_trim");

  tc = tcase_create("case_trim");

  tcase_add_test(tc, s21_trim_2);
  tcase_add_test(tc, s21_trim_3);

  suite_add_tcase(s, tc);
  return s;
}

Suite *s21_to_upper_suite(void) {
  Suite *s;
  TCase *tc;

  s = suite_create("s21_to_upper");

  tc = tcase_create("case_to_upper");

  tcase_add_test(tc, s21_to_upper_1);
  tcase_add_test(tc, s21_to_upper_2);
  tcase_add_test(tc, s21_to_upper_3);
  tcase_add_test(tc, s21_to_upper_4);

  suite_add_tcase(s, tc);
  return s;
}

Suite *s21_strtok_suite(void) {
  Suite *s;
  TCase *tc;

  s = suite_create("s21_strtok");

  tc = tcase_create("case_strtok");

  tcase_add_test(tc, s21_strtok_1);
  tcase_add_test(tc, s21_strtok_2);
  tcase_add_test(tc, s21_strtok_3);
  tcase_add_test(tc, s21_strtok_4);
  tcase_add_test(tc, s21_strtok_5);
  tcase_add_test(tc, s21_strtok_6);
  tcase_add_test(tc, s21_strtok_7);
  tcase_add_test(tc, s21_strtok_8);
  // tcase_add_test(tc, s21_strtok_9); <-- incorrect.

  suite_add_tcase(s, tc);
  return s;
}

void case_test(Suite *s, int *fail) {
  SRunner *runner = srunner_create(s);
  srunner_set_fork_status(runner, CK_NOFORK);
  srunner_run_all(runner, CK_NORMAL);
  *fail = srunner_ntests_failed(runner);
  srunner_free(runner);
}

int main() {
  int fail = 0;
  case_test(s21_strlen_suite(), &fail);
  case_test(s21_memchr_suite(), &fail);
  case_test(s21_memcmp_suite(), &fail);
  case_test(s21_memcpy_suite(), &fail);
  case_test(s21_memset_suite(), &fail);
  case_test(s21_strncat_suite(), &fail);
  case_test(s21_strchr_suite(), &fail);
  case_test(s21_strncmp_suite(), &fail);
  case_test(s21_strncpy_suite(), &fail);
  case_test(s21_strcspn_suite(), &fail);
  case_test(s21_strerror_suite(), &fail);
  case_test(s21_strpbrk_suite(), &fail);
  case_test(s21_strrchr_suite(), &fail);
  case_test(s21_strstr_suite(), &fail);
  case_test(s21_strtok_suite(), &fail);
  case_test(s21_sprintf_suite(), &fail);
  case_test(s21_to_lower_suite(), &fail);
  case_test(s21_to_upper_suite(), &fail);
  case_test(s21_trim_suite(), &fail);
  case_test(s21_insert_suite(), &fail);
}
