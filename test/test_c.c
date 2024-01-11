
#include <check.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../s21_string.h"
#define BUFF_SIZE 512
START_TEST(test_0) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %c";
  char val = 'A';
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_1) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0c";
  char val = 'A';
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_2) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %1c";
  char val = 'A';
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_3) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10c";
  char val = 'A';
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_4) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.c";
  char val = 'A';
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_5) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.0c";
  char val = 'A';
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_6) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.5c";
  char val = 'A';
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_7) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.10c";
  char val = 'A';
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_8) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.5c";
  char val = 'A';
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_9) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %c";
  char val = 'a';
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_10) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0c";
  char val = 'a';
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_11) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %1c";
  char val = 'a';
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_12) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10c";
  char val = 'a';
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_13) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.c";
  char val = 'a';
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_14) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.0c";
  char val = 'a';
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_15) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.5c";
  char val = 'a';
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_16) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.10c";
  char val = 'a';
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_17) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.5c";
  char val = 'a';
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_18) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %c";
  char val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_19) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0c";
  char val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_20) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %1c";
  char val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_21) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10c";
  char val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_22) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.c";
  char val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_23) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.0c";
  char val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_24) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.5c";
  char val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_25) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.10c";
  char val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_26) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.5c";
  char val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_27) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %c";
  char val = 5;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_28) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0c";
  char val = 5;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_29) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %1c";
  char val = 5;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_30) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10c";
  char val = 5;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_31) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.c";
  char val = 5;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_32) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.0c";
  char val = 5;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_33) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.5c";
  char val = 5;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_34) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.10c";
  char val = 5;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_35) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.5c";
  char val = 5;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_36) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %c";
  char val = 128;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_37) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0c";
  char val = 128;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_38) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %1c";
  char val = 128;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_39) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10c";
  char val = 128;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_40) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.c";
  char val = 128;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_41) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.0c";
  char val = 128;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_42) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.5c";
  char val = 128;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_43) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.10c";
  char val = 128;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_44) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.5c";
  char val = 128;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_45) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %c";
  char val = -10;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_46) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0c";
  char val = -10;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_47) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %1c";
  char val = -10;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_48) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10c";
  char val = -10;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_49) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.c";
  char val = -10;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_50) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.0c";
  char val = -10;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_51) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.5c";
  char val = -10;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_52) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.10c";
  char val = -10;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_53) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.5c";
  char val = -10;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *s21_sprintf_suite_c(void) {
  Suite *s = suite_create("s21_sprintf");
  TCase *tc = tcase_create("case_sprintf");
  tcase_add_test(tc, test_0);
  tcase_add_test(tc, test_1);
  tcase_add_test(tc, test_2);
  tcase_add_test(tc, test_3);
  tcase_add_test(tc, test_4);
  tcase_add_test(tc, test_5);
  tcase_add_test(tc, test_6);
  tcase_add_test(tc, test_7);
  tcase_add_test(tc, test_8);
  tcase_add_test(tc, test_9);
  tcase_add_test(tc, test_10);
  tcase_add_test(tc, test_11);
  tcase_add_test(tc, test_12);
  tcase_add_test(tc, test_13);
  tcase_add_test(tc, test_14);
  tcase_add_test(tc, test_15);
  tcase_add_test(tc, test_16);
  tcase_add_test(tc, test_17);
  tcase_add_test(tc, test_18);
  tcase_add_test(tc, test_19);
  tcase_add_test(tc, test_20);
  tcase_add_test(tc, test_21);
  tcase_add_test(tc, test_22);
  tcase_add_test(tc, test_23);
  tcase_add_test(tc, test_24);
  tcase_add_test(tc, test_25);
  tcase_add_test(tc, test_26);
  tcase_add_test(tc, test_27);
  tcase_add_test(tc, test_28);
  tcase_add_test(tc, test_29);
  tcase_add_test(tc, test_30);
  tcase_add_test(tc, test_31);
  tcase_add_test(tc, test_32);
  tcase_add_test(tc, test_33);
  tcase_add_test(tc, test_34);
  tcase_add_test(tc, test_35);
  tcase_add_test(tc, test_36);
  tcase_add_test(tc, test_37);
  tcase_add_test(tc, test_38);
  tcase_add_test(tc, test_39);
  tcase_add_test(tc, test_40);
  tcase_add_test(tc, test_41);
  tcase_add_test(tc, test_42);
  tcase_add_test(tc, test_43);
  tcase_add_test(tc, test_44);
  tcase_add_test(tc, test_45);
  tcase_add_test(tc, test_46);
  tcase_add_test(tc, test_47);
  tcase_add_test(tc, test_48);
  tcase_add_test(tc, test_49);
  tcase_add_test(tc, test_50);
  tcase_add_test(tc, test_51);
  tcase_add_test(tc, test_52);
  tcase_add_test(tc, test_53);
  suite_add_tcase(s, tc);
  return s;
}
