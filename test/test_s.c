
#include <check.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../s21_string.h"
#define BUFF_SIZE 512
START_TEST(test_0) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*.s";
  char *val = "";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_1) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0.s";
  char *val = "";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_2) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0.0s";
  char *val = "";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_3) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*.5s";
  char *val = "";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_4) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0.5s";
  char *val = "";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_5) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*.0s";
  char *val = "";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_6) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0.*s";
  char *val = "";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_7) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*.*s";
  char *val = "";
  ck_assert_int_eq(s21_sprintf(str1, format, 3, 4, val),
                   sprintf(str2, format, 3, 4, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_8) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.10s";
  char *val = "";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_9) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.0s";
  char *val = "";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_10) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.0s";
  char *val = "";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_11) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %.*s";
  char *val = "";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_12) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.5s";
  char *val = "";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_13) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.5s";
  char *val = "";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_14) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10.*s";
  char *val = "";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_15) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5.0s";
  char *val = "";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_16) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*.s";
  char *val = "";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_17) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*.10s";
  char *val = "";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_18) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*.*s";
  char *val = "";
  ck_assert_int_eq(s21_sprintf(str1, format, 3, 4, val),
                   sprintf(str2, format, 3, 4, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_19) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %.s";
  char *val = "";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_20) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*.10s";
  char *val = "";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_21) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10.5s";
  char *val = "";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_22) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.*s";
  char *val = "";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_23) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.*s";
  char *val = "";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_24) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0.s";
  char *val = "";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_25) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10.0s";
  char *val = "";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_26) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %.10s";
  char *val = "";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_27) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*.0s";
  char *val = "";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_28) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.s";
  char *val = "";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_29) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0.10s";
  char *val = "";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_30) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5.*s";
  char *val = "";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_31) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-.0s";
  char *val = "";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_32) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-.5s";
  char *val = "";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_33) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0.*s";
  char *val = "";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_34) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0.5s";
  char *val = "";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_35) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %.0s";
  char *val = "";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_36) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-.*s";
  char *val = "";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_37) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0.0s";
  char *val = "";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_38) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5.5s";
  char *val = "";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_39) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10.s";
  char *val = "";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_40) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10.10s";
  char *val = "";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_41) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-.10s";
  char *val = "";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_42) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-.s";
  char *val = "";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_43) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.10s";
  char *val = "";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_44) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %.5s";
  char *val = "";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_45) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.s";
  char *val = "";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_46) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*.5s";
  char *val = "";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_47) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5.s";
  char *val = "";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_48) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5.10s";
  char *val = "";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_49) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0.10s";
  char *val = "";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_50) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %s";
  char *val = "";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_51) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10s";
  char *val = "";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_52) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0s";
  char *val = "";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_53) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*s";
  char *val = "";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_54) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-s";
  char *val = "";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_55) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*s";
  char *val = "";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_56) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5s";
  char *val = "";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_57) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10s";
  char *val = "";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_58) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5s";
  char *val = "";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_59) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0s";
  char *val = "";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_60) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*.s";
  char *val = "\n";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_61) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0.s";
  char *val = "\n";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_62) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0.0s";
  char *val = "\n";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_63) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*.5s";
  char *val = "\n";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_64) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0.5s";
  char *val = "\n";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_65) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*.0s";
  char *val = "\n";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_66) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0.*s";
  char *val = "\n";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_67) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*.*s";
  char *val = "\n";
  ck_assert_int_eq(s21_sprintf(str1, format, 3, 4, val),
                   sprintf(str2, format, 3, 4, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_68) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.10s";
  char *val = "\n";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_69) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.0s";
  char *val = "\n";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_70) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.0s";
  char *val = "\n";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_71) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %.*s";
  char *val = "\n";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_72) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.5s";
  char *val = "\n";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_73) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.5s";
  char *val = "\n";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_74) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10.*s";
  char *val = "\n";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_75) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5.0s";
  char *val = "\n";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_76) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*.s";
  char *val = "\n";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_77) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*.10s";
  char *val = "\n";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_78) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*.*s";
  char *val = "\n";
  ck_assert_int_eq(s21_sprintf(str1, format, 3, 4, val),
                   sprintf(str2, format, 3, 4, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_79) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %.s";
  char *val = "\n";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_80) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*.10s";
  char *val = "\n";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_81) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10.5s";
  char *val = "\n";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_82) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.*s";
  char *val = "\n";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_83) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.*s";
  char *val = "\n";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_84) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0.s";
  char *val = "\n";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_85) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10.0s";
  char *val = "\n";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_86) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %.10s";
  char *val = "\n";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_87) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*.0s";
  char *val = "\n";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_88) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.s";
  char *val = "\n";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_89) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0.10s";
  char *val = "\n";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_90) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5.*s";
  char *val = "\n";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_91) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-.0s";
  char *val = "\n";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_92) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-.5s";
  char *val = "\n";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_93) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0.*s";
  char *val = "\n";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_94) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0.5s";
  char *val = "\n";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_95) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %.0s";
  char *val = "\n";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_96) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-.*s";
  char *val = "\n";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_97) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0.0s";
  char *val = "\n";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_98) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5.5s";
  char *val = "\n";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_99) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10.s";
  char *val = "\n";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_100) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10.10s";
  char *val = "\n";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_101) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-.10s";
  char *val = "\n";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_102) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-.s";
  char *val = "\n";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_103) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.10s";
  char *val = "\n";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_104) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %.5s";
  char *val = "\n";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_105) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.s";
  char *val = "\n";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_106) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*.5s";
  char *val = "\n";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_107) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5.s";
  char *val = "\n";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_108) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5.10s";
  char *val = "\n";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_109) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0.10s";
  char *val = "\n";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_110) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %s";
  char *val = "\n";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_111) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10s";
  char *val = "\n";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_112) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0s";
  char *val = "\n";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_113) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*s";
  char *val = "\n";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_114) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-s";
  char *val = "\n";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_115) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*s";
  char *val = "\n";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_116) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5s";
  char *val = "\n";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_117) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10s";
  char *val = "\n";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_118) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5s";
  char *val = "\n";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_119) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0s";
  char *val = "\n";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_120) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*.s";
  char *val = "H";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_121) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0.s";
  char *val = "H";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_122) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0.0s";
  char *val = "H";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_123) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*.5s";
  char *val = "H";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_124) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0.5s";
  char *val = "H";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_125) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*.0s";
  char *val = "H";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_126) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0.*s";
  char *val = "H";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_127) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*.*s";
  char *val = "H";
  ck_assert_int_eq(s21_sprintf(str1, format, 3, 4, val),
                   sprintf(str2, format, 3, 4, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_128) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.10s";
  char *val = "H";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_129) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.0s";
  char *val = "H";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_130) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.0s";
  char *val = "H";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_131) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %.*s";
  char *val = "H";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_132) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.5s";
  char *val = "H";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_133) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.5s";
  char *val = "H";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_134) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10.*s";
  char *val = "H";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_135) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5.0s";
  char *val = "H";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_136) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*.s";
  char *val = "H";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_137) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*.10s";
  char *val = "H";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_138) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*.*s";
  char *val = "H";
  ck_assert_int_eq(s21_sprintf(str1, format, 3, 4, val),
                   sprintf(str2, format, 3, 4, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_139) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %.s";
  char *val = "H";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_140) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*.10s";
  char *val = "H";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_141) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10.5s";
  char *val = "H";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_142) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.*s";
  char *val = "H";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_143) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.*s";
  char *val = "H";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_144) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0.s";
  char *val = "H";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_145) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10.0s";
  char *val = "H";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_146) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %.10s";
  char *val = "H";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_147) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*.0s";
  char *val = "H";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_148) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.s";
  char *val = "H";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_149) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0.10s";
  char *val = "H";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_150) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5.*s";
  char *val = "H";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_151) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-.0s";
  char *val = "H";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_152) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-.5s";
  char *val = "H";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_153) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0.*s";
  char *val = "H";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_154) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0.5s";
  char *val = "H";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_155) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %.0s";
  char *val = "H";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_156) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-.*s";
  char *val = "H";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_157) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0.0s";
  char *val = "H";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_158) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5.5s";
  char *val = "H";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_159) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10.s";
  char *val = "H";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_160) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10.10s";
  char *val = "H";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_161) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-.10s";
  char *val = "H";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_162) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-.s";
  char *val = "H";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_163) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.10s";
  char *val = "H";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_164) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %.5s";
  char *val = "H";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_165) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.s";
  char *val = "H";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_166) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*.5s";
  char *val = "H";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_167) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5.s";
  char *val = "H";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_168) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5.10s";
  char *val = "H";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_169) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0.10s";
  char *val = "H";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_170) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %s";
  char *val = "H";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_171) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10s";
  char *val = "H";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_172) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0s";
  char *val = "H";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_173) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*s";
  char *val = "H";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_174) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-s";
  char *val = "H";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_175) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*s";
  char *val = "H";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_176) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5s";
  char *val = "H";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_177) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10s";
  char *val = "H";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_178) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5s";
  char *val = "H";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_179) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0s";
  char *val = "H";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_180) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*.s";
  char *val = "Hello school 21!";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_181) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0.s";
  char *val = "Hello school 21!";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_182) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0.0s";
  char *val = "Hello school 21!";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_183) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*.5s";
  char *val = "Hello school 21!";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_184) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0.5s";
  char *val = "Hello school 21!";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_185) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*.0s";
  char *val = "Hello school 21!";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_186) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0.*s";
  char *val = "Hello school 21!";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_187) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*.*s";
  char *val = "Hello school 21!";
  ck_assert_int_eq(s21_sprintf(str1, format, 3, 4, val),
                   sprintf(str2, format, 3, 4, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_188) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.10s";
  char *val = "Hello school 21!";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_189) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.0s";
  char *val = "Hello school 21!";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_190) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.0s";
  char *val = "Hello school 21!";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_191) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %.*s";
  char *val = "Hello school 21!";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_192) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.5s";
  char *val = "Hello school 21!";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_193) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.5s";
  char *val = "Hello school 21!";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_194) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10.*s";
  char *val = "Hello school 21!";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_195) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5.0s";
  char *val = "Hello school 21!";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_196) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*.s";
  char *val = "Hello school 21!";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_197) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*.10s";
  char *val = "Hello school 21!";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_198) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*.*s";
  char *val = "Hello school 21!";
  ck_assert_int_eq(s21_sprintf(str1, format, 3, 4, val),
                   sprintf(str2, format, 3, 4, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_199) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %.s";
  char *val = "Hello school 21!";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_200) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*.10s";
  char *val = "Hello school 21!";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_201) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10.5s";
  char *val = "Hello school 21!";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_202) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.*s";
  char *val = "Hello school 21!";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_203) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.*s";
  char *val = "Hello school 21!";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_204) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0.s";
  char *val = "Hello school 21!";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_205) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10.0s";
  char *val = "Hello school 21!";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_206) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %.10s";
  char *val = "Hello school 21!";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_207) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*.0s";
  char *val = "Hello school 21!";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_208) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.s";
  char *val = "Hello school 21!";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_209) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0.10s";
  char *val = "Hello school 21!";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_210) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5.*s";
  char *val = "Hello school 21!";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_211) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-.0s";
  char *val = "Hello school 21!";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_212) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-.5s";
  char *val = "Hello school 21!";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_213) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0.*s";
  char *val = "Hello school 21!";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_214) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0.5s";
  char *val = "Hello school 21!";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_215) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %.0s";
  char *val = "Hello school 21!";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_216) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-.*s";
  char *val = "Hello school 21!";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_217) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0.0s";
  char *val = "Hello school 21!";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_218) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5.5s";
  char *val = "Hello school 21!";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_219) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10.s";
  char *val = "Hello school 21!";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_220) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10.10s";
  char *val = "Hello school 21!";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_221) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-.10s";
  char *val = "Hello school 21!";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_222) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-.s";
  char *val = "Hello school 21!";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_223) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.10s";
  char *val = "Hello school 21!";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_224) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %.5s";
  char *val = "Hello school 21!";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_225) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.s";
  char *val = "Hello school 21!";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_226) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*.5s";
  char *val = "Hello school 21!";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_227) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5.s";
  char *val = "Hello school 21!";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_228) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5.10s";
  char *val = "Hello school 21!";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_229) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0.10s";
  char *val = "Hello school 21!";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_230) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %s";
  char *val = "Hello school 21!";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_231) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10s";
  char *val = "Hello school 21!";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_232) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0s";
  char *val = "Hello school 21!";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_233) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*s";
  char *val = "Hello school 21!";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_234) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-s";
  char *val = "Hello school 21!";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_235) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*s";
  char *val = "Hello school 21!";
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_236) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5s";
  char *val = "Hello school 21!";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_237) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10s";
  char *val = "Hello school 21!";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_238) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5s";
  char *val = "Hello school 21!";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_239) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0s";
  char *val = "Hello school 21!";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *s21_sprintf_suite_s(void) {
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
  tcase_add_test(tc, test_54);
  tcase_add_test(tc, test_55);
  tcase_add_test(tc, test_56);
  tcase_add_test(tc, test_57);
  tcase_add_test(tc, test_58);
  tcase_add_test(tc, test_59);
  tcase_add_test(tc, test_60);
  tcase_add_test(tc, test_61);
  tcase_add_test(tc, test_62);
  tcase_add_test(tc, test_63);
  tcase_add_test(tc, test_64);
  tcase_add_test(tc, test_65);
  tcase_add_test(tc, test_66);
  tcase_add_test(tc, test_67);
  tcase_add_test(tc, test_68);
  tcase_add_test(tc, test_69);
  tcase_add_test(tc, test_70);
  tcase_add_test(tc, test_71);
  tcase_add_test(tc, test_72);
  tcase_add_test(tc, test_73);
  tcase_add_test(tc, test_74);
  tcase_add_test(tc, test_75);
  tcase_add_test(tc, test_76);
  tcase_add_test(tc, test_77);
  tcase_add_test(tc, test_78);
  tcase_add_test(tc, test_79);
  tcase_add_test(tc, test_80);
  tcase_add_test(tc, test_81);
  tcase_add_test(tc, test_82);
  tcase_add_test(tc, test_83);
  tcase_add_test(tc, test_84);
  tcase_add_test(tc, test_85);
  tcase_add_test(tc, test_86);
  tcase_add_test(tc, test_87);
  tcase_add_test(tc, test_88);
  tcase_add_test(tc, test_89);
  tcase_add_test(tc, test_90);
  tcase_add_test(tc, test_91);
  tcase_add_test(tc, test_92);
  tcase_add_test(tc, test_93);
  tcase_add_test(tc, test_94);
  tcase_add_test(tc, test_95);
  tcase_add_test(tc, test_96);
  tcase_add_test(tc, test_97);
  tcase_add_test(tc, test_98);
  tcase_add_test(tc, test_99);
  tcase_add_test(tc, test_100);
  tcase_add_test(tc, test_101);
  tcase_add_test(tc, test_102);
  tcase_add_test(tc, test_103);
  tcase_add_test(tc, test_104);
  tcase_add_test(tc, test_105);
  tcase_add_test(tc, test_106);
  tcase_add_test(tc, test_107);
  tcase_add_test(tc, test_108);
  tcase_add_test(tc, test_109);
  tcase_add_test(tc, test_110);
  tcase_add_test(tc, test_111);
  tcase_add_test(tc, test_112);
  tcase_add_test(tc, test_113);
  tcase_add_test(tc, test_114);
  tcase_add_test(tc, test_115);
  tcase_add_test(tc, test_116);
  tcase_add_test(tc, test_117);
  tcase_add_test(tc, test_118);
  tcase_add_test(tc, test_119);
  tcase_add_test(tc, test_120);
  tcase_add_test(tc, test_121);
  tcase_add_test(tc, test_122);
  tcase_add_test(tc, test_123);
  tcase_add_test(tc, test_124);
  tcase_add_test(tc, test_125);
  tcase_add_test(tc, test_126);
  tcase_add_test(tc, test_127);
  tcase_add_test(tc, test_128);
  tcase_add_test(tc, test_129);
  tcase_add_test(tc, test_130);
  tcase_add_test(tc, test_131);
  tcase_add_test(tc, test_132);
  tcase_add_test(tc, test_133);
  tcase_add_test(tc, test_134);
  tcase_add_test(tc, test_135);
  tcase_add_test(tc, test_136);
  tcase_add_test(tc, test_137);
  tcase_add_test(tc, test_138);
  tcase_add_test(tc, test_139);
  tcase_add_test(tc, test_140);
  tcase_add_test(tc, test_141);
  tcase_add_test(tc, test_142);
  tcase_add_test(tc, test_143);
  tcase_add_test(tc, test_144);
  tcase_add_test(tc, test_145);
  tcase_add_test(tc, test_146);
  tcase_add_test(tc, test_147);
  tcase_add_test(tc, test_148);
  tcase_add_test(tc, test_149);
  tcase_add_test(tc, test_150);
  tcase_add_test(tc, test_151);
  tcase_add_test(tc, test_152);
  tcase_add_test(tc, test_153);
  tcase_add_test(tc, test_154);
  tcase_add_test(tc, test_155);
  tcase_add_test(tc, test_156);
  tcase_add_test(tc, test_157);
  tcase_add_test(tc, test_158);
  tcase_add_test(tc, test_159);
  tcase_add_test(tc, test_160);
  tcase_add_test(tc, test_161);
  tcase_add_test(tc, test_162);
  tcase_add_test(tc, test_163);
  tcase_add_test(tc, test_164);
  tcase_add_test(tc, test_165);
  tcase_add_test(tc, test_166);
  tcase_add_test(tc, test_167);
  tcase_add_test(tc, test_168);
  tcase_add_test(tc, test_169);
  tcase_add_test(tc, test_170);
  tcase_add_test(tc, test_171);
  tcase_add_test(tc, test_172);
  tcase_add_test(tc, test_173);
  tcase_add_test(tc, test_174);
  tcase_add_test(tc, test_175);
  tcase_add_test(tc, test_176);
  tcase_add_test(tc, test_177);
  tcase_add_test(tc, test_178);
  tcase_add_test(tc, test_179);
  tcase_add_test(tc, test_180);
  tcase_add_test(tc, test_181);
  tcase_add_test(tc, test_182);
  tcase_add_test(tc, test_183);
  tcase_add_test(tc, test_184);
  tcase_add_test(tc, test_185);
  tcase_add_test(tc, test_186);
  tcase_add_test(tc, test_187);
  tcase_add_test(tc, test_188);
  tcase_add_test(tc, test_189);
  tcase_add_test(tc, test_190);
  tcase_add_test(tc, test_191);
  tcase_add_test(tc, test_192);
  tcase_add_test(tc, test_193);
  tcase_add_test(tc, test_194);
  tcase_add_test(tc, test_195);
  tcase_add_test(tc, test_196);
  tcase_add_test(tc, test_197);
  tcase_add_test(tc, test_198);
  tcase_add_test(tc, test_199);
  tcase_add_test(tc, test_200);
  tcase_add_test(tc, test_201);
  tcase_add_test(tc, test_202);
  tcase_add_test(tc, test_203);
  tcase_add_test(tc, test_204);
  tcase_add_test(tc, test_205);
  tcase_add_test(tc, test_206);
  tcase_add_test(tc, test_207);
  tcase_add_test(tc, test_208);
  tcase_add_test(tc, test_209);
  tcase_add_test(tc, test_210);
  tcase_add_test(tc, test_211);
  tcase_add_test(tc, test_212);
  tcase_add_test(tc, test_213);
  tcase_add_test(tc, test_214);
  tcase_add_test(tc, test_215);
  tcase_add_test(tc, test_216);
  tcase_add_test(tc, test_217);
  tcase_add_test(tc, test_218);
  tcase_add_test(tc, test_219);
  tcase_add_test(tc, test_220);
  tcase_add_test(tc, test_221);
  tcase_add_test(tc, test_222);
  tcase_add_test(tc, test_223);
  tcase_add_test(tc, test_224);
  tcase_add_test(tc, test_225);
  tcase_add_test(tc, test_226);
  tcase_add_test(tc, test_227);
  tcase_add_test(tc, test_228);
  tcase_add_test(tc, test_229);
  tcase_add_test(tc, test_230);
  tcase_add_test(tc, test_231);
  tcase_add_test(tc, test_232);
  tcase_add_test(tc, test_233);
  tcase_add_test(tc, test_234);
  tcase_add_test(tc, test_235);
  tcase_add_test(tc, test_236);
  tcase_add_test(tc, test_237);
  tcase_add_test(tc, test_238);
  tcase_add_test(tc, test_239);
  suite_add_tcase(s, tc);
  return s;
}
