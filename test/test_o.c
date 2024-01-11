
#include <check.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../s21_string.h"
#define BUFF_SIZE 512
START_TEST(test_0) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*.5o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_1) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*.0o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_2) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*.*o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 3, 4, val),
                   sprintf(str2, format, 3, 4, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_3) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*.*o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 3, 4, val),
                   sprintf(str2, format, 3, 4, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_4) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.0o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_5) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.5o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_6) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#0.o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_7) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %010.10o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_8) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#5.5o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_9) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*.10o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_10) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.*o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_11) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %.10o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_12) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#*.o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_13) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10.10o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_14) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#*.5o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_15) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#.0o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_16) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %010.*o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_17) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-.o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_18) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#0.10o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_19) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %010.0o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_20) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_21) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %010.5o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_22) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-.10o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_23) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0*.o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_24) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#.o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_25) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_26) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10.*o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_27) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*.o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_28) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*.10o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_29) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10.5o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_30) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0.o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_31) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10.0o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_32) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#*.0o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_33) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %00.*o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_34) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %010.o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_35) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %00.5o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_36) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10.o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_37) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %00.0o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_38) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#10.5o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_39) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %05.10o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_40) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#10.0o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_41) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#5.o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_42) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#10.*o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_43) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %05.o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_44) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0.o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_45) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#.10o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_46) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %.*o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_47) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#*.*o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 3, 4, val),
                   sprintf(str2, format, 3, 4, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_48) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %.o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_49) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %.0o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_50) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %.5o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_51) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#5.*o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_52) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*.0o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_53) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0.10o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_54) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*.5o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_55) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-.0o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_56) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-.5o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_57) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-.*o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_58) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0.10o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_59) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.10o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_60) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#5.0o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_61) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#10.10o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_62) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#.5o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_63) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %00.10o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_64) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0*.10o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_65) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %05.*o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_66) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %05.5o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_67) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %05.0o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_68) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#*.10o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_69) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#.*o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_70) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#0.*o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_71) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0.0o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_72) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0.5o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_73) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0.*o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_74) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#0.0o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_75) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#0.5o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_76) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.0o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_77) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.5o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_78) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0*.*o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 3, 4, val),
                   sprintf(str2, format, 3, 4, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_79) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0*.5o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_80) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0*.0o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_81) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.*o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_82) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#10.o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_83) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5.*o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_84) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %00.o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_85) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0.*o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_86) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0.5o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_87) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*.o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_88) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0.0o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_89) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5.5o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_90) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5.0o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_91) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#5.10o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_92) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.10o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_93) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5.o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_94) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5.10o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_95) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_96) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_97) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %00o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_98) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#10o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_99) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %010o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_100) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_101) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#*o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_102) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_103) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_104) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_105) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_106) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_107) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_108) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_109) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_110) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0*o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_111) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#0o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_112) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %05o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_113) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#5o";
  unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_114) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*.5o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_115) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*.0o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_116) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*.*o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 3, 4, val),
                   sprintf(str2, format, 3, 4, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_117) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*.*o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 3, 4, val),
                   sprintf(str2, format, 3, 4, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_118) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.0o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_119) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.5o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_120) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#0.o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_121) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %010.10o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_122) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#5.5o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_123) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*.10o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_124) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.*o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_125) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %.10o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_126) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#*.o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_127) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10.10o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_128) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#*.5o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_129) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#.0o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_130) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %010.*o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_131) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-.o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_132) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#0.10o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_133) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %010.0o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_134) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_135) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %010.5o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_136) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-.10o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_137) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0*.o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_138) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#.o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_139) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_140) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10.*o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_141) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*.o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_142) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*.10o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_143) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10.5o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_144) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0.o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_145) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10.0o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_146) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#*.0o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_147) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %00.*o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_148) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %010.o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_149) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %00.5o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_150) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10.o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_151) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %00.0o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_152) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#10.5o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_153) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %05.10o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_154) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#10.0o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_155) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#5.o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_156) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#10.*o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_157) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %05.o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_158) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0.o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_159) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#.10o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_160) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %.*o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_161) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#*.*o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 3, 4, val),
                   sprintf(str2, format, 3, 4, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_162) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %.o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_163) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %.0o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_164) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %.5o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_165) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#5.*o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_166) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*.0o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_167) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0.10o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_168) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*.5o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_169) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-.0o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_170) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-.5o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_171) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-.*o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_172) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0.10o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_173) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.10o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_174) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#5.0o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_175) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#10.10o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_176) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#.5o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_177) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %00.10o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_178) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0*.10o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_179) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %05.*o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_180) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %05.5o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_181) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %05.0o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_182) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#*.10o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_183) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#.*o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_184) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#0.*o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_185) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0.0o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_186) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0.5o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_187) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0.*o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_188) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#0.0o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_189) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#0.5o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_190) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.0o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_191) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.5o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_192) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0*.*o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 3, 4, val),
                   sprintf(str2, format, 3, 4, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_193) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0*.5o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_194) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0*.0o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_195) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.*o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_196) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#10.o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_197) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5.*o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_198) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %00.o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_199) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0.*o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_200) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0.5o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_201) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*.o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_202) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0.0o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_203) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5.5o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_204) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5.0o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_205) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#5.10o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_206) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.10o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_207) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5.o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_208) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5.10o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_209) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_210) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_211) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %00o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_212) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#10o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_213) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %010o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_214) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_215) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#*o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_216) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_217) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_218) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_219) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_220) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_221) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_222) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_223) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_224) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0*o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_225) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#0o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_226) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %05o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_227) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#5o";
  unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_228) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*.5o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_229) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*.0o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_230) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*.*o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 3, 4, val),
                   sprintf(str2, format, 3, 4, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_231) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*.*o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 3, 4, val),
                   sprintf(str2, format, 3, 4, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_232) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.0o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_233) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.5o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_234) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#0.o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_235) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %010.10o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_236) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#5.5o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_237) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*.10o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_238) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.*o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_239) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %.10o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_240) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#*.o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_241) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10.10o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_242) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#*.5o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_243) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#.0o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_244) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %010.*o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_245) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-.o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_246) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#0.10o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_247) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %010.0o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_248) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_249) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %010.5o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_250) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-.10o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_251) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0*.o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_252) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#.o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_253) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_254) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10.*o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_255) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*.o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_256) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*.10o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_257) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10.5o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_258) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0.o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_259) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10.0o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_260) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#*.0o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_261) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %00.*o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_262) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %010.o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_263) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %00.5o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_264) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10.o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_265) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %00.0o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_266) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#10.5o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_267) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %05.10o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_268) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#10.0o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_269) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#5.o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_270) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#10.*o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_271) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %05.o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_272) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0.o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_273) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#.10o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_274) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %.*o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_275) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#*.*o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 3, 4, val),
                   sprintf(str2, format, 3, 4, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_276) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %.o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_277) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %.0o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_278) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %.5o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_279) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#5.*o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_280) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*.0o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_281) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0.10o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_282) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*.5o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_283) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-.0o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_284) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-.5o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_285) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-.*o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_286) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0.10o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_287) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.10o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_288) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#5.0o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_289) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#10.10o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_290) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#.5o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_291) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %00.10o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_292) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0*.10o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_293) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %05.*o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_294) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %05.5o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_295) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %05.0o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_296) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#*.10o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_297) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#.*o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_298) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#0.*o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_299) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0.0o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_300) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0.5o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_301) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0.*o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_302) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#0.0o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_303) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#0.5o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_304) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.0o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_305) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.5o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_306) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0*.*o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 3, 4, val),
                   sprintf(str2, format, 3, 4, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_307) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0*.5o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_308) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0*.0o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_309) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.*o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_310) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#10.o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_311) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5.*o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_312) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %00.o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_313) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0.*o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_314) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0.5o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_315) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*.o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_316) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0.0o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_317) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5.5o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_318) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5.0o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_319) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#5.10o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_320) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.10o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_321) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5.o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_322) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5.10o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_323) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_324) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_325) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %00o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_326) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#10o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_327) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %010o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_328) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_329) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#*o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_330) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_331) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_332) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_333) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_334) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_335) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_336) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_337) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_338) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0*o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_339) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#0o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_340) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %05o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_341) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#5o";
  unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_342) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*.5ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_343) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*.0ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_344) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*.*ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 3, 4, val),
                   sprintf(str2, format, 3, 4, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_345) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*.*ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 3, 4, val),
                   sprintf(str2, format, 3, 4, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_346) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.0ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_347) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.5ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_348) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#0.ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_349) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %010.10ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_350) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#5.5ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_351) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*.10ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_352) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.*ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_353) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %.10ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_354) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#*.ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_355) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10.10ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_356) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#*.5ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_357) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#.0ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_358) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %010.*ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_359) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-.ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_360) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#0.10ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_361) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %010.0ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_362) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_363) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %010.5ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_364) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-.10ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_365) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0*.ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_366) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#.ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_367) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_368) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10.*ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_369) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*.ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_370) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*.10ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_371) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10.5ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_372) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0.ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_373) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10.0ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_374) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#*.0ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_375) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %00.*ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_376) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %010.ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_377) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %00.5ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_378) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10.ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_379) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %00.0ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_380) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#10.5ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_381) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %05.10ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_382) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#10.0ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_383) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#5.ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_384) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#10.*ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_385) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %05.ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_386) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0.ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_387) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#.10ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_388) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %.*ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_389) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#*.*ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 3, 4, val),
                   sprintf(str2, format, 3, 4, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_390) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %.ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_391) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %.0ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_392) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %.5ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_393) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#5.*ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_394) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*.0ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_395) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0.10ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_396) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*.5ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_397) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-.0ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_398) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-.5ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_399) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-.*ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_400) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0.10ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_401) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.10ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_402) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#5.0ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_403) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#10.10ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_404) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#.5ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_405) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %00.10ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_406) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0*.10ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_407) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %05.*ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_408) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %05.5ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_409) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %05.0ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_410) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#*.10ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_411) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#.*ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_412) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#0.*ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_413) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0.0ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_414) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0.5ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_415) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0.*ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_416) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#0.0ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_417) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#0.5ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_418) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.0ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_419) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.5ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_420) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0*.*ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 3, 4, val),
                   sprintf(str2, format, 3, 4, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_421) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0*.5ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_422) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0*.0ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_423) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.*ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_424) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#10.ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_425) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5.*ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_426) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %00.ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_427) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0.*ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_428) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0.5ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_429) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*.ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_430) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0.0ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_431) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5.5ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_432) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5.0ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_433) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#5.10ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_434) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.10ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_435) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5.ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_436) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5.10ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_437) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_438) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_439) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %00ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_440) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#10ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_441) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %010ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_442) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_443) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#*ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_444) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_445) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_446) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_447) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_448) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_449) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_450) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_451) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_452) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0*ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_453) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#0ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_454) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %05ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_455) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#5ho";
  short unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_456) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*.5ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_457) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*.0ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_458) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*.*ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 3, 4, val),
                   sprintf(str2, format, 3, 4, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_459) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*.*ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 3, 4, val),
                   sprintf(str2, format, 3, 4, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_460) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.0ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_461) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.5ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_462) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#0.ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_463) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %010.10ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_464) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#5.5ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_465) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*.10ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_466) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.*ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_467) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %.10ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_468) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#*.ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_469) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10.10ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_470) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#*.5ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_471) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#.0ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_472) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %010.*ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_473) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-.ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_474) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#0.10ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_475) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %010.0ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_476) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_477) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %010.5ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_478) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-.10ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_479) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0*.ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_480) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#.ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_481) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_482) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10.*ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_483) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*.ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_484) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*.10ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_485) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10.5ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_486) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0.ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_487) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10.0ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_488) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#*.0ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_489) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %00.*ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_490) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %010.ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_491) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %00.5ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_492) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10.ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_493) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %00.0ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_494) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#10.5ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_495) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %05.10ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_496) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#10.0ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_497) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#5.ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_498) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#10.*ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_499) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %05.ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_500) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0.ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_501) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#.10ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_502) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %.*ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_503) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#*.*ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 3, 4, val),
                   sprintf(str2, format, 3, 4, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_504) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %.ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_505) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %.0ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_506) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %.5ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_507) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#5.*ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_508) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*.0ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_509) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0.10ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_510) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*.5ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_511) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-.0ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_512) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-.5ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_513) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-.*ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_514) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0.10ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_515) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.10ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_516) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#5.0ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_517) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#10.10ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_518) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#.5ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_519) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %00.10ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_520) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0*.10ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_521) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %05.*ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_522) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %05.5ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_523) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %05.0ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_524) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#*.10ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_525) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#.*ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_526) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#0.*ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_527) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0.0ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_528) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0.5ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_529) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0.*ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_530) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#0.0ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_531) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#0.5ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_532) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.0ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_533) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.5ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_534) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0*.*ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 3, 4, val),
                   sprintf(str2, format, 3, 4, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_535) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0*.5ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_536) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0*.0ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_537) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.*ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_538) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#10.ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_539) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5.*ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_540) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %00.ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_541) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0.*ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_542) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0.5ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_543) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*.ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_544) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0.0ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_545) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5.5ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_546) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5.0ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_547) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#5.10ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_548) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.10ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_549) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5.ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_550) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5.10ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_551) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_552) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_553) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %00ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_554) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#10ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_555) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %010ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_556) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_557) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#*ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_558) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_559) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_560) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_561) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_562) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_563) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_564) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_565) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_566) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0*ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_567) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#0ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_568) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %05ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_569) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#5ho";
  short unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_570) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*.5ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_571) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*.0ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_572) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*.*ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, 3, 4, val),
                   sprintf(str2, format, 3, 4, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_573) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*.*ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, 3, 4, val),
                   sprintf(str2, format, 3, 4, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_574) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.0ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_575) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.5ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_576) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#0.ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_577) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %010.10ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_578) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#5.5ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_579) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*.10ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_580) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.*ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_581) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %.10ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_582) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#*.ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_583) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10.10ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_584) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#*.5ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_585) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#.0ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_586) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %010.*ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_587) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-.ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_588) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#0.10ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_589) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %010.0ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_590) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_591) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %010.5ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_592) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-.10ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_593) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0*.ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_594) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#.ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_595) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_596) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10.*ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_597) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*.ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_598) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*.10ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_599) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10.5ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_600) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0.ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_601) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10.0ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_602) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#*.0ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_603) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %00.*ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_604) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %010.ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_605) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %00.5ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_606) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10.ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_607) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %00.0ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_608) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#10.5ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_609) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %05.10ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_610) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#10.0ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_611) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#5.ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_612) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#10.*ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_613) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %05.ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_614) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0.ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_615) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#.10ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_616) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %.*ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_617) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#*.*ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, 3, 4, val),
                   sprintf(str2, format, 3, 4, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_618) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %.ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_619) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %.0ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_620) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %.5ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_621) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#5.*ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_622) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*.0ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_623) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0.10ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_624) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*.5ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_625) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-.0ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_626) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-.5ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_627) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-.*ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_628) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0.10ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_629) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.10ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_630) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#5.0ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_631) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#10.10ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_632) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#.5ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_633) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %00.10ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_634) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0*.10ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_635) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %05.*ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_636) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %05.5ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_637) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %05.0ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_638) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#*.10ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_639) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#.*ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_640) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#0.*ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_641) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0.0ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_642) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0.5ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_643) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0.*ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_644) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#0.0ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_645) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#0.5ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_646) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.0ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_647) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.5ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_648) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0*.*ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, 3, 4, val),
                   sprintf(str2, format, 3, 4, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_649) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0*.5ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_650) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0*.0ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_651) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.*ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_652) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#10.ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_653) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5.*ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_654) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %00.ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_655) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0.*ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_656) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0.5ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_657) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*.ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_658) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0.0ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_659) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5.5ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_660) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5.0ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_661) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#5.10ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_662) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.10ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_663) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5.ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_664) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5.10ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_665) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_666) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_667) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %00ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_668) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#10ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_669) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %010ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_670) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_671) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#*ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_672) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_673) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_674) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_675) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_676) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_677) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_678) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_679) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_680) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0*ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_681) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#0ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_682) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %05ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_683) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#5ho";
  short unsigned int val = 65535;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_684) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*.5lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_685) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*.0lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_686) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*.*lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 3, 4, val),
                   sprintf(str2, format, 3, 4, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_687) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*.*lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 3, 4, val),
                   sprintf(str2, format, 3, 4, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_688) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.0lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_689) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.5lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_690) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#0.lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_691) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %010.10lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_692) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#5.5lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_693) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*.10lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_694) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.*lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_695) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %.10lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_696) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#*.lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_697) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10.10lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_698) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#*.5lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_699) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#.0lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_700) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %010.*lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_701) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-.lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_702) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#0.10lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_703) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %010.0lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_704) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_705) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %010.5lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_706) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-.10lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_707) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0*.lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_708) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#.lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_709) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_710) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10.*lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_711) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*.lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_712) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*.10lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_713) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10.5lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_714) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0.lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_715) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10.0lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_716) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#*.0lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_717) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %00.*lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_718) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %010.lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_719) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %00.5lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_720) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10.lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_721) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %00.0lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_722) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#10.5lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_723) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %05.10lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_724) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#10.0lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_725) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#5.lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_726) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#10.*lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_727) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %05.lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_728) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0.lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_729) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#.10lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_730) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %.*lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_731) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#*.*lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 3, 4, val),
                   sprintf(str2, format, 3, 4, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_732) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %.lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_733) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %.0lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_734) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %.5lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_735) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#5.*lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_736) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*.0lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_737) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0.10lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_738) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*.5lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_739) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-.0lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_740) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-.5lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_741) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-.*lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_742) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0.10lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_743) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.10lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_744) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#5.0lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_745) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#10.10lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_746) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#.5lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_747) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %00.10lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_748) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0*.10lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_749) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %05.*lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_750) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %05.5lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_751) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %05.0lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_752) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#*.10lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_753) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#.*lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_754) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#0.*lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_755) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0.0lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_756) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0.5lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_757) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0.*lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_758) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#0.0lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_759) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#0.5lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_760) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.0lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_761) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.5lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_762) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0*.*lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 3, 4, val),
                   sprintf(str2, format, 3, 4, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_763) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0*.5lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_764) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0*.0lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_765) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.*lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_766) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#10.lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_767) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5.*lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_768) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %00.lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_769) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0.*lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_770) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0.5lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_771) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*.lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_772) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0.0lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_773) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5.5lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_774) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5.0lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_775) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#5.10lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_776) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.10lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_777) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5.lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_778) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5.10lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_779) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_780) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_781) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %00lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_782) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#10lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_783) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %010lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_784) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_785) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#*lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_786) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_787) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_788) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_789) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_790) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_791) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_792) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_793) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_794) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0*lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_795) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#0lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_796) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %05lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_797) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#5.lo";
  long unsigned int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_798) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*.5lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_799) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*.0lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_800) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*.*lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 3, 4, val),
                   sprintf(str2, format, 3, 4, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_801) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*.*lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 3, 4, val),
                   sprintf(str2, format, 3, 4, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_802) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.0lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_803) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.5lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_804) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#0.lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_805) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %010.10lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_806) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#5.5lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_807) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*.10lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_808) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.*lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_809) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %.10lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_810) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#*.lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_811) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10.10lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_812) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#*.5lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_813) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#.0lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_814) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %010.*lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_815) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-.lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_816) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#0.10lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_817) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %010.0lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_818) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_819) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %010.5lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_820) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-.10lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_821) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0*.lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_822) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#.lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_823) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_824) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10.*lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_825) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*.lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_826) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*.10lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_827) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10.5lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_828) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0.lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_829) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10.0lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_830) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#*.0lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_831) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %00.*lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_832) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %010.lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_833) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %00.5lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_834) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10.lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_835) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %00.0lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_836) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#10.5lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_837) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %05.10lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_838) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#10.0lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_839) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#5.lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_840) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#10.*lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_841) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %05.lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_842) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0.lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_843) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#.10lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_844) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %.*lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_845) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#*.*lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 3, 4, val),
                   sprintf(str2, format, 3, 4, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_846) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %.lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_847) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %.0lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_848) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %.5lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_849) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#5.*lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_850) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*.0lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_851) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0.10lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_852) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*.5lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_853) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-.0lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_854) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-.5lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_855) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-.*lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_856) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0.10lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_857) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.10lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_858) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#5.0lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_859) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#10.10lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_860) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#.5lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_861) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %00.10lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_862) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0*.10lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_863) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %05.*lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_864) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %05.5lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_865) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %05.0lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_866) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#*.10lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_867) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#.*lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_868) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#0.*lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_869) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0.0lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_870) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0.5lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_871) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0.*lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_872) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#0.0lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_873) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#0.5lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_874) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.0lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_875) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.5lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_876) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0*.*lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 3, 4, val),
                   sprintf(str2, format, 3, 4, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_877) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0*.5lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_878) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0*.0lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_879) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.*lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_880) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#10.lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_881) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5.*lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_882) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %00.lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_883) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0.*lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_884) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0.5lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_885) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*.lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_886) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0.0lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_887) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5.5lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_888) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5.0lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_889) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#5.10lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_890) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.10lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_891) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5.lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_892) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5.10lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_893) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_894) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_895) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %00lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_896) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#10lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_897) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %010lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_898) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_899) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#*lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_900) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_901) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_902) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_903) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_904) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_905) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_906) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_907) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_908) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0*lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_909) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#0lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_910) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %05lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_911) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#5lo";
  long unsigned int val = 21;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_912) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*.5lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_913) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*.0lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_914) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*.*lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 3, 4, val),
                   sprintf(str2, format, 3, 4, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_915) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*.*lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 3, 4, val),
                   sprintf(str2, format, 3, 4, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_916) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.0lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_917) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.5lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_918) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#0.lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_919) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %010.10lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_920) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#5.5lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_921) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*.10lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_922) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.*lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_923) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %.10lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_924) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#*.lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_925) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10.10lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_926) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#*.5lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_927) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#.0lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_928) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %010.*lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_929) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-.lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_930) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#0.10lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_931) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %010.0lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_932) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_933) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %010.5lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_934) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-.10lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_935) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0*.lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_936) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#.lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_937) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_938) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10.*lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_939) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*.lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_940) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*.10lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_941) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10.5lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_942) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0.lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_943) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10.0lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_944) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#*.0lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_945) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %00.*lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_946) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %010.lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_947) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %00.5lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_948) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10.lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_949) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %00.0lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_950) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#10.5lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_951) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %05.10lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_952) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#10.0lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_953) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#5.lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_954) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#10.*lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_955) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %05.lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_956) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0.lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_957) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#.10lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_958) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %.*lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_959) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#*.*lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 3, 4, val),
                   sprintf(str2, format, 3, 4, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_960) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %.lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_961) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %.0lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_962) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %.5lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_963) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#5.*lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_964) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*.0lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_965) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0.10lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_966) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*.5lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_967) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-.0lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_968) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-.5lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_969) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-.*lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_970) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0.10lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_971) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10.10lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_972) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#5.0lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_973) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#10.10lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_974) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#.5lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_975) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %00.10lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_976) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0*.10lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_977) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %05.*lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_978) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %05.5lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_979) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %05.0lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_980) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#*.10lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_981) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#.*lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_982) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#0.*lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_983) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0.0lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_984) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0.5lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_985) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0.*lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_986) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#0.0lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_987) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#0.5lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_988) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.0lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_989) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.5lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_990) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0*.*lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 3, 4, val),
                   sprintf(str2, format, 3, 4, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_991) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0*.5lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_992) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0*.0lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_993) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.*lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_994) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#10.lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_995) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5.*lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_996) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %00.lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_997) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0.*lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_998) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0.5lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_999) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*.lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_1000) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0.0lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_1001) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5.5lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_1002) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5.0lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_1003) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#5.10lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_1004) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5.10lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_1005) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5.lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_1006) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5.10lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_1007) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_1008) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %10lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_1009) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %00lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_1010) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#10lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_1011) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %010lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_1012) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_1013) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#*lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_1014) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %*lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_1015) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_1016) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_1017) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-*lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_1018) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-5lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_1019) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-10lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_1020) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %5lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_1021) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %-0lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_1022) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %0*lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, 6, val),
                   sprintf(str2, format, 6, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_1023) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#0lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_1024) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %05lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_1025) {
  char str1[BUFF_SIZE];
  char str2[BUFF_SIZE];
  char *format = "Values: %#5lo";
  long unsigned int val = 4294967295;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *s21_sprintf_suite_o(void) {
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
  tcase_add_test(tc, test_240);
  tcase_add_test(tc, test_241);
  tcase_add_test(tc, test_242);
  tcase_add_test(tc, test_243);
  tcase_add_test(tc, test_244);
  tcase_add_test(tc, test_245);
  tcase_add_test(tc, test_246);
  tcase_add_test(tc, test_247);
  tcase_add_test(tc, test_248);
  tcase_add_test(tc, test_249);
  tcase_add_test(tc, test_250);
  tcase_add_test(tc, test_251);
  tcase_add_test(tc, test_252);
  tcase_add_test(tc, test_253);
  tcase_add_test(tc, test_254);
  tcase_add_test(tc, test_255);
  tcase_add_test(tc, test_256);
  tcase_add_test(tc, test_257);
  tcase_add_test(tc, test_258);
  tcase_add_test(tc, test_259);
  tcase_add_test(tc, test_260);
  tcase_add_test(tc, test_261);
  tcase_add_test(tc, test_262);
  tcase_add_test(tc, test_263);
  tcase_add_test(tc, test_264);
  tcase_add_test(tc, test_265);
  tcase_add_test(tc, test_266);
  tcase_add_test(tc, test_267);
  tcase_add_test(tc, test_268);
  tcase_add_test(tc, test_269);
  tcase_add_test(tc, test_270);
  tcase_add_test(tc, test_271);
  tcase_add_test(tc, test_272);
  tcase_add_test(tc, test_273);
  tcase_add_test(tc, test_274);
  tcase_add_test(tc, test_275);
  tcase_add_test(tc, test_276);
  tcase_add_test(tc, test_277);
  tcase_add_test(tc, test_278);
  tcase_add_test(tc, test_279);
  tcase_add_test(tc, test_280);
  tcase_add_test(tc, test_281);
  tcase_add_test(tc, test_282);
  tcase_add_test(tc, test_283);
  tcase_add_test(tc, test_284);
  tcase_add_test(tc, test_285);
  tcase_add_test(tc, test_286);
  tcase_add_test(tc, test_287);
  tcase_add_test(tc, test_288);
  tcase_add_test(tc, test_289);
  tcase_add_test(tc, test_290);
  tcase_add_test(tc, test_291);
  tcase_add_test(tc, test_292);
  tcase_add_test(tc, test_293);
  tcase_add_test(tc, test_294);
  tcase_add_test(tc, test_295);
  tcase_add_test(tc, test_296);
  tcase_add_test(tc, test_297);
  tcase_add_test(tc, test_298);
  tcase_add_test(tc, test_299);
  tcase_add_test(tc, test_300);
  tcase_add_test(tc, test_301);
  tcase_add_test(tc, test_302);
  tcase_add_test(tc, test_303);
  tcase_add_test(tc, test_304);
  tcase_add_test(tc, test_305);
  tcase_add_test(tc, test_306);
  tcase_add_test(tc, test_307);
  tcase_add_test(tc, test_308);
  tcase_add_test(tc, test_309);
  tcase_add_test(tc, test_310);
  tcase_add_test(tc, test_311);
  tcase_add_test(tc, test_312);
  tcase_add_test(tc, test_313);
  tcase_add_test(tc, test_314);
  tcase_add_test(tc, test_315);
  tcase_add_test(tc, test_316);
  tcase_add_test(tc, test_317);
  tcase_add_test(tc, test_318);
  tcase_add_test(tc, test_319);
  tcase_add_test(tc, test_320);
  tcase_add_test(tc, test_321);
  tcase_add_test(tc, test_322);
  tcase_add_test(tc, test_323);
  tcase_add_test(tc, test_324);
  tcase_add_test(tc, test_325);
  tcase_add_test(tc, test_326);
  tcase_add_test(tc, test_327);
  tcase_add_test(tc, test_328);
  tcase_add_test(tc, test_329);
  tcase_add_test(tc, test_330);
  tcase_add_test(tc, test_331);
  tcase_add_test(tc, test_332);
  tcase_add_test(tc, test_333);
  tcase_add_test(tc, test_334);
  tcase_add_test(tc, test_335);
  tcase_add_test(tc, test_336);
  tcase_add_test(tc, test_337);
  tcase_add_test(tc, test_338);
  tcase_add_test(tc, test_339);
  tcase_add_test(tc, test_340);
  tcase_add_test(tc, test_341);
  tcase_add_test(tc, test_342);
  tcase_add_test(tc, test_343);
  tcase_add_test(tc, test_344);
  tcase_add_test(tc, test_345);
  tcase_add_test(tc, test_346);
  tcase_add_test(tc, test_347);
  tcase_add_test(tc, test_348);
  tcase_add_test(tc, test_349);
  tcase_add_test(tc, test_350);
  tcase_add_test(tc, test_351);
  tcase_add_test(tc, test_352);
  tcase_add_test(tc, test_353);
  tcase_add_test(tc, test_354);
  tcase_add_test(tc, test_355);
  tcase_add_test(tc, test_356);
  tcase_add_test(tc, test_357);
  tcase_add_test(tc, test_358);
  tcase_add_test(tc, test_359);
  tcase_add_test(tc, test_360);
  tcase_add_test(tc, test_361);
  tcase_add_test(tc, test_362);
  tcase_add_test(tc, test_363);
  tcase_add_test(tc, test_364);
  tcase_add_test(tc, test_365);
  tcase_add_test(tc, test_366);
  tcase_add_test(tc, test_367);
  tcase_add_test(tc, test_368);
  tcase_add_test(tc, test_369);
  tcase_add_test(tc, test_370);
  tcase_add_test(tc, test_371);
  tcase_add_test(tc, test_372);
  tcase_add_test(tc, test_373);
  tcase_add_test(tc, test_374);
  tcase_add_test(tc, test_375);
  tcase_add_test(tc, test_376);
  tcase_add_test(tc, test_377);
  tcase_add_test(tc, test_378);
  tcase_add_test(tc, test_379);
  tcase_add_test(tc, test_380);
  tcase_add_test(tc, test_381);
  tcase_add_test(tc, test_382);
  tcase_add_test(tc, test_383);
  tcase_add_test(tc, test_384);
  tcase_add_test(tc, test_385);
  tcase_add_test(tc, test_386);
  tcase_add_test(tc, test_387);
  tcase_add_test(tc, test_388);
  tcase_add_test(tc, test_389);
  tcase_add_test(tc, test_390);
  tcase_add_test(tc, test_391);
  tcase_add_test(tc, test_392);
  tcase_add_test(tc, test_393);
  tcase_add_test(tc, test_394);
  tcase_add_test(tc, test_395);
  tcase_add_test(tc, test_396);
  tcase_add_test(tc, test_397);
  tcase_add_test(tc, test_398);
  tcase_add_test(tc, test_399);
  tcase_add_test(tc, test_400);
  tcase_add_test(tc, test_401);
  tcase_add_test(tc, test_402);
  tcase_add_test(tc, test_403);
  tcase_add_test(tc, test_404);
  tcase_add_test(tc, test_405);
  tcase_add_test(tc, test_406);
  tcase_add_test(tc, test_407);
  tcase_add_test(tc, test_408);
  tcase_add_test(tc, test_409);
  tcase_add_test(tc, test_410);
  tcase_add_test(tc, test_411);
  tcase_add_test(tc, test_412);
  tcase_add_test(tc, test_413);
  tcase_add_test(tc, test_414);
  tcase_add_test(tc, test_415);
  tcase_add_test(tc, test_416);
  tcase_add_test(tc, test_417);
  tcase_add_test(tc, test_418);
  tcase_add_test(tc, test_419);
  tcase_add_test(tc, test_420);
  tcase_add_test(tc, test_421);
  tcase_add_test(tc, test_422);
  tcase_add_test(tc, test_423);
  tcase_add_test(tc, test_424);
  tcase_add_test(tc, test_425);
  tcase_add_test(tc, test_426);
  tcase_add_test(tc, test_427);
  tcase_add_test(tc, test_428);
  tcase_add_test(tc, test_429);
  tcase_add_test(tc, test_430);
  tcase_add_test(tc, test_431);
  tcase_add_test(tc, test_432);
  tcase_add_test(tc, test_433);
  tcase_add_test(tc, test_434);
  tcase_add_test(tc, test_435);
  tcase_add_test(tc, test_436);
  tcase_add_test(tc, test_437);
  tcase_add_test(tc, test_438);
  tcase_add_test(tc, test_439);
  tcase_add_test(tc, test_440);
  tcase_add_test(tc, test_441);
  tcase_add_test(tc, test_442);
  tcase_add_test(tc, test_443);
  tcase_add_test(tc, test_444);
  tcase_add_test(tc, test_445);
  tcase_add_test(tc, test_446);
  tcase_add_test(tc, test_447);
  tcase_add_test(tc, test_448);
  tcase_add_test(tc, test_449);
  tcase_add_test(tc, test_450);
  tcase_add_test(tc, test_451);
  tcase_add_test(tc, test_452);
  tcase_add_test(tc, test_453);
  tcase_add_test(tc, test_454);
  tcase_add_test(tc, test_455);
  tcase_add_test(tc, test_456);
  tcase_add_test(tc, test_457);
  tcase_add_test(tc, test_458);
  tcase_add_test(tc, test_459);
  tcase_add_test(tc, test_460);
  tcase_add_test(tc, test_461);
  tcase_add_test(tc, test_462);
  tcase_add_test(tc, test_463);
  tcase_add_test(tc, test_464);
  tcase_add_test(tc, test_465);
  tcase_add_test(tc, test_466);
  tcase_add_test(tc, test_467);
  tcase_add_test(tc, test_468);
  tcase_add_test(tc, test_469);
  tcase_add_test(tc, test_470);
  tcase_add_test(tc, test_471);
  tcase_add_test(tc, test_472);
  tcase_add_test(tc, test_473);
  tcase_add_test(tc, test_474);
  tcase_add_test(tc, test_475);
  tcase_add_test(tc, test_476);
  tcase_add_test(tc, test_477);
  tcase_add_test(tc, test_478);
  tcase_add_test(tc, test_479);
  tcase_add_test(tc, test_480);
  tcase_add_test(tc, test_481);
  tcase_add_test(tc, test_482);
  tcase_add_test(tc, test_483);
  tcase_add_test(tc, test_484);
  tcase_add_test(tc, test_485);
  tcase_add_test(tc, test_486);
  tcase_add_test(tc, test_487);
  tcase_add_test(tc, test_488);
  tcase_add_test(tc, test_489);
  tcase_add_test(tc, test_490);
  tcase_add_test(tc, test_491);
  tcase_add_test(tc, test_492);
  tcase_add_test(tc, test_493);
  tcase_add_test(tc, test_494);
  tcase_add_test(tc, test_495);
  tcase_add_test(tc, test_496);
  tcase_add_test(tc, test_497);
  tcase_add_test(tc, test_498);
  tcase_add_test(tc, test_499);
  tcase_add_test(tc, test_500);
  tcase_add_test(tc, test_501);
  tcase_add_test(tc, test_502);
  tcase_add_test(tc, test_503);
  tcase_add_test(tc, test_504);
  tcase_add_test(tc, test_505);
  tcase_add_test(tc, test_506);
  tcase_add_test(tc, test_507);
  tcase_add_test(tc, test_508);
  tcase_add_test(tc, test_509);
  tcase_add_test(tc, test_510);
  tcase_add_test(tc, test_511);
  tcase_add_test(tc, test_512);
  tcase_add_test(tc, test_513);
  tcase_add_test(tc, test_514);
  tcase_add_test(tc, test_515);
  tcase_add_test(tc, test_516);
  tcase_add_test(tc, test_517);
  tcase_add_test(tc, test_518);
  tcase_add_test(tc, test_519);
  tcase_add_test(tc, test_520);
  tcase_add_test(tc, test_521);
  tcase_add_test(tc, test_522);
  tcase_add_test(tc, test_523);
  tcase_add_test(tc, test_524);
  tcase_add_test(tc, test_525);
  tcase_add_test(tc, test_526);
  tcase_add_test(tc, test_527);
  tcase_add_test(tc, test_528);
  tcase_add_test(tc, test_529);
  tcase_add_test(tc, test_530);
  tcase_add_test(tc, test_531);
  tcase_add_test(tc, test_532);
  tcase_add_test(tc, test_533);
  tcase_add_test(tc, test_534);
  tcase_add_test(tc, test_535);
  tcase_add_test(tc, test_536);
  tcase_add_test(tc, test_537);
  tcase_add_test(tc, test_538);
  tcase_add_test(tc, test_539);
  tcase_add_test(tc, test_540);
  tcase_add_test(tc, test_541);
  tcase_add_test(tc, test_542);
  tcase_add_test(tc, test_543);
  tcase_add_test(tc, test_544);
  tcase_add_test(tc, test_545);
  tcase_add_test(tc, test_546);
  tcase_add_test(tc, test_547);
  tcase_add_test(tc, test_548);
  tcase_add_test(tc, test_549);
  tcase_add_test(tc, test_550);
  tcase_add_test(tc, test_551);
  tcase_add_test(tc, test_552);
  tcase_add_test(tc, test_553);
  tcase_add_test(tc, test_554);
  tcase_add_test(tc, test_555);
  tcase_add_test(tc, test_556);
  tcase_add_test(tc, test_557);
  tcase_add_test(tc, test_558);
  tcase_add_test(tc, test_559);
  tcase_add_test(tc, test_560);
  tcase_add_test(tc, test_561);
  tcase_add_test(tc, test_562);
  tcase_add_test(tc, test_563);
  tcase_add_test(tc, test_564);
  tcase_add_test(tc, test_565);
  tcase_add_test(tc, test_566);
  tcase_add_test(tc, test_567);
  tcase_add_test(tc, test_568);
  tcase_add_test(tc, test_569);
  tcase_add_test(tc, test_570);
  tcase_add_test(tc, test_571);
  tcase_add_test(tc, test_572);
  tcase_add_test(tc, test_573);
  tcase_add_test(tc, test_574);
  tcase_add_test(tc, test_575);
  tcase_add_test(tc, test_576);
  tcase_add_test(tc, test_577);
  tcase_add_test(tc, test_578);
  tcase_add_test(tc, test_579);
  tcase_add_test(tc, test_580);
  tcase_add_test(tc, test_581);
  tcase_add_test(tc, test_582);
  tcase_add_test(tc, test_583);
  tcase_add_test(tc, test_584);
  tcase_add_test(tc, test_585);
  tcase_add_test(tc, test_586);
  tcase_add_test(tc, test_587);
  tcase_add_test(tc, test_588);
  tcase_add_test(tc, test_589);
  tcase_add_test(tc, test_590);
  tcase_add_test(tc, test_591);
  tcase_add_test(tc, test_592);
  tcase_add_test(tc, test_593);
  tcase_add_test(tc, test_594);
  tcase_add_test(tc, test_595);
  tcase_add_test(tc, test_596);
  tcase_add_test(tc, test_597);
  tcase_add_test(tc, test_598);
  tcase_add_test(tc, test_599);
  tcase_add_test(tc, test_600);
  tcase_add_test(tc, test_601);
  tcase_add_test(tc, test_602);
  tcase_add_test(tc, test_603);
  tcase_add_test(tc, test_604);
  tcase_add_test(tc, test_605);
  tcase_add_test(tc, test_606);
  tcase_add_test(tc, test_607);
  tcase_add_test(tc, test_608);
  tcase_add_test(tc, test_609);
  tcase_add_test(tc, test_610);
  tcase_add_test(tc, test_611);
  tcase_add_test(tc, test_612);
  tcase_add_test(tc, test_613);
  tcase_add_test(tc, test_614);
  tcase_add_test(tc, test_615);
  tcase_add_test(tc, test_616);
  tcase_add_test(tc, test_617);
  tcase_add_test(tc, test_618);
  tcase_add_test(tc, test_619);
  tcase_add_test(tc, test_620);
  tcase_add_test(tc, test_621);
  tcase_add_test(tc, test_622);
  tcase_add_test(tc, test_623);
  tcase_add_test(tc, test_624);
  tcase_add_test(tc, test_625);
  tcase_add_test(tc, test_626);
  tcase_add_test(tc, test_627);
  tcase_add_test(tc, test_628);
  tcase_add_test(tc, test_629);
  tcase_add_test(tc, test_630);
  tcase_add_test(tc, test_631);
  tcase_add_test(tc, test_632);
  tcase_add_test(tc, test_633);
  tcase_add_test(tc, test_634);
  tcase_add_test(tc, test_635);
  tcase_add_test(tc, test_636);
  tcase_add_test(tc, test_637);
  tcase_add_test(tc, test_638);
  tcase_add_test(tc, test_639);
  tcase_add_test(tc, test_640);
  tcase_add_test(tc, test_641);
  tcase_add_test(tc, test_642);
  tcase_add_test(tc, test_643);
  tcase_add_test(tc, test_644);
  tcase_add_test(tc, test_645);
  tcase_add_test(tc, test_646);
  tcase_add_test(tc, test_647);
  tcase_add_test(tc, test_648);
  tcase_add_test(tc, test_649);
  tcase_add_test(tc, test_650);
  tcase_add_test(tc, test_651);
  tcase_add_test(tc, test_652);
  tcase_add_test(tc, test_653);
  tcase_add_test(tc, test_654);
  tcase_add_test(tc, test_655);
  tcase_add_test(tc, test_656);
  tcase_add_test(tc, test_657);
  tcase_add_test(tc, test_658);
  tcase_add_test(tc, test_659);
  tcase_add_test(tc, test_660);
  tcase_add_test(tc, test_661);
  tcase_add_test(tc, test_662);
  tcase_add_test(tc, test_663);
  tcase_add_test(tc, test_664);
  tcase_add_test(tc, test_665);
  tcase_add_test(tc, test_666);
  tcase_add_test(tc, test_667);
  tcase_add_test(tc, test_668);
  tcase_add_test(tc, test_669);
  tcase_add_test(tc, test_670);
  tcase_add_test(tc, test_671);
  tcase_add_test(tc, test_672);
  tcase_add_test(tc, test_673);
  tcase_add_test(tc, test_674);
  tcase_add_test(tc, test_675);
  tcase_add_test(tc, test_676);
  tcase_add_test(tc, test_677);
  tcase_add_test(tc, test_678);
  tcase_add_test(tc, test_679);
  tcase_add_test(tc, test_680);
  tcase_add_test(tc, test_681);
  tcase_add_test(tc, test_682);
  tcase_add_test(tc, test_683);
  tcase_add_test(tc, test_684);
  tcase_add_test(tc, test_685);
  tcase_add_test(tc, test_686);
  tcase_add_test(tc, test_687);
  tcase_add_test(tc, test_688);
  tcase_add_test(tc, test_689);
  tcase_add_test(tc, test_690);
  tcase_add_test(tc, test_691);
  tcase_add_test(tc, test_692);
  tcase_add_test(tc, test_693);
  tcase_add_test(tc, test_694);
  tcase_add_test(tc, test_695);
  tcase_add_test(tc, test_696);
  tcase_add_test(tc, test_697);
  tcase_add_test(tc, test_698);
  tcase_add_test(tc, test_699);
  tcase_add_test(tc, test_700);
  tcase_add_test(tc, test_701);
  tcase_add_test(tc, test_702);
  tcase_add_test(tc, test_703);
  tcase_add_test(tc, test_704);
  tcase_add_test(tc, test_705);
  tcase_add_test(tc, test_706);
  tcase_add_test(tc, test_707);
  tcase_add_test(tc, test_708);
  tcase_add_test(tc, test_709);
  tcase_add_test(tc, test_710);
  tcase_add_test(tc, test_711);
  tcase_add_test(tc, test_712);
  tcase_add_test(tc, test_713);
  tcase_add_test(tc, test_714);
  tcase_add_test(tc, test_715);
  tcase_add_test(tc, test_716);
  tcase_add_test(tc, test_717);
  tcase_add_test(tc, test_718);
  tcase_add_test(tc, test_719);
  tcase_add_test(tc, test_720);
  tcase_add_test(tc, test_721);
  tcase_add_test(tc, test_722);
  tcase_add_test(tc, test_723);
  tcase_add_test(tc, test_724);
  tcase_add_test(tc, test_725);
  tcase_add_test(tc, test_726);
  tcase_add_test(tc, test_727);
  tcase_add_test(tc, test_728);
  tcase_add_test(tc, test_729);
  tcase_add_test(tc, test_730);
  tcase_add_test(tc, test_731);
  tcase_add_test(tc, test_732);
  tcase_add_test(tc, test_733);
  tcase_add_test(tc, test_734);
  tcase_add_test(tc, test_735);
  tcase_add_test(tc, test_736);
  tcase_add_test(tc, test_737);
  tcase_add_test(tc, test_738);
  tcase_add_test(tc, test_739);
  tcase_add_test(tc, test_740);
  tcase_add_test(tc, test_741);
  tcase_add_test(tc, test_742);
  tcase_add_test(tc, test_743);
  tcase_add_test(tc, test_744);
  tcase_add_test(tc, test_745);
  tcase_add_test(tc, test_746);
  tcase_add_test(tc, test_747);
  tcase_add_test(tc, test_748);
  tcase_add_test(tc, test_749);
  tcase_add_test(tc, test_750);
  tcase_add_test(tc, test_751);
  tcase_add_test(tc, test_752);
  tcase_add_test(tc, test_753);
  tcase_add_test(tc, test_754);
  tcase_add_test(tc, test_755);
  tcase_add_test(tc, test_756);
  tcase_add_test(tc, test_757);
  tcase_add_test(tc, test_758);
  tcase_add_test(tc, test_759);
  tcase_add_test(tc, test_760);
  tcase_add_test(tc, test_761);
  tcase_add_test(tc, test_762);
  tcase_add_test(tc, test_763);
  tcase_add_test(tc, test_764);
  tcase_add_test(tc, test_765);
  tcase_add_test(tc, test_766);
  tcase_add_test(tc, test_767);
  tcase_add_test(tc, test_768);
  tcase_add_test(tc, test_769);
  tcase_add_test(tc, test_770);
  tcase_add_test(tc, test_771);
  tcase_add_test(tc, test_772);
  tcase_add_test(tc, test_773);
  tcase_add_test(tc, test_774);
  tcase_add_test(tc, test_775);
  tcase_add_test(tc, test_776);
  tcase_add_test(tc, test_777);
  tcase_add_test(tc, test_778);
  tcase_add_test(tc, test_779);
  tcase_add_test(tc, test_780);
  tcase_add_test(tc, test_781);
  tcase_add_test(tc, test_782);
  tcase_add_test(tc, test_783);
  tcase_add_test(tc, test_784);
  tcase_add_test(tc, test_785);
  tcase_add_test(tc, test_786);
  tcase_add_test(tc, test_787);
  tcase_add_test(tc, test_788);
  tcase_add_test(tc, test_789);
  tcase_add_test(tc, test_790);
  tcase_add_test(tc, test_791);
  tcase_add_test(tc, test_792);
  tcase_add_test(tc, test_793);
  tcase_add_test(tc, test_794);
  tcase_add_test(tc, test_795);
  tcase_add_test(tc, test_796);
  tcase_add_test(tc, test_797);
  tcase_add_test(tc, test_798);
  tcase_add_test(tc, test_799);
  tcase_add_test(tc, test_800);
  tcase_add_test(tc, test_801);
  tcase_add_test(tc, test_802);
  tcase_add_test(tc, test_803);
  tcase_add_test(tc, test_804);
  tcase_add_test(tc, test_805);
  tcase_add_test(tc, test_806);
  tcase_add_test(tc, test_807);
  tcase_add_test(tc, test_808);
  tcase_add_test(tc, test_809);
  tcase_add_test(tc, test_810);
  tcase_add_test(tc, test_811);
  tcase_add_test(tc, test_812);
  tcase_add_test(tc, test_813);
  tcase_add_test(tc, test_814);
  tcase_add_test(tc, test_815);
  tcase_add_test(tc, test_816);
  tcase_add_test(tc, test_817);
  tcase_add_test(tc, test_818);
  tcase_add_test(tc, test_819);
  tcase_add_test(tc, test_820);
  tcase_add_test(tc, test_821);
  tcase_add_test(tc, test_822);
  tcase_add_test(tc, test_823);
  tcase_add_test(tc, test_824);
  tcase_add_test(tc, test_825);
  tcase_add_test(tc, test_826);
  tcase_add_test(tc, test_827);
  tcase_add_test(tc, test_828);
  tcase_add_test(tc, test_829);
  tcase_add_test(tc, test_830);
  tcase_add_test(tc, test_831);
  tcase_add_test(tc, test_832);
  tcase_add_test(tc, test_833);
  tcase_add_test(tc, test_834);
  tcase_add_test(tc, test_835);
  tcase_add_test(tc, test_836);
  tcase_add_test(tc, test_837);
  tcase_add_test(tc, test_838);
  tcase_add_test(tc, test_839);
  tcase_add_test(tc, test_840);
  tcase_add_test(tc, test_841);
  tcase_add_test(tc, test_842);
  tcase_add_test(tc, test_843);
  tcase_add_test(tc, test_844);
  tcase_add_test(tc, test_845);
  tcase_add_test(tc, test_846);
  tcase_add_test(tc, test_847);
  tcase_add_test(tc, test_848);
  tcase_add_test(tc, test_849);
  tcase_add_test(tc, test_850);
  tcase_add_test(tc, test_851);
  tcase_add_test(tc, test_852);
  tcase_add_test(tc, test_853);
  tcase_add_test(tc, test_854);
  tcase_add_test(tc, test_855);
  tcase_add_test(tc, test_856);
  tcase_add_test(tc, test_857);
  tcase_add_test(tc, test_858);
  tcase_add_test(tc, test_859);
  tcase_add_test(tc, test_860);
  tcase_add_test(tc, test_861);
  tcase_add_test(tc, test_862);
  tcase_add_test(tc, test_863);
  tcase_add_test(tc, test_864);
  tcase_add_test(tc, test_865);
  tcase_add_test(tc, test_866);
  tcase_add_test(tc, test_867);
  tcase_add_test(tc, test_868);
  tcase_add_test(tc, test_869);
  tcase_add_test(tc, test_870);
  tcase_add_test(tc, test_871);
  tcase_add_test(tc, test_872);
  tcase_add_test(tc, test_873);
  tcase_add_test(tc, test_874);
  tcase_add_test(tc, test_875);
  tcase_add_test(tc, test_876);
  tcase_add_test(tc, test_877);
  tcase_add_test(tc, test_878);
  tcase_add_test(tc, test_879);
  tcase_add_test(tc, test_880);
  tcase_add_test(tc, test_881);
  tcase_add_test(tc, test_882);
  tcase_add_test(tc, test_883);
  tcase_add_test(tc, test_884);
  tcase_add_test(tc, test_885);
  tcase_add_test(tc, test_886);
  tcase_add_test(tc, test_887);
  tcase_add_test(tc, test_888);
  tcase_add_test(tc, test_889);
  tcase_add_test(tc, test_890);
  tcase_add_test(tc, test_891);
  tcase_add_test(tc, test_892);
  tcase_add_test(tc, test_893);
  tcase_add_test(tc, test_894);
  tcase_add_test(tc, test_895);
  tcase_add_test(tc, test_896);
  tcase_add_test(tc, test_897);
  tcase_add_test(tc, test_898);
  tcase_add_test(tc, test_899);
  tcase_add_test(tc, test_900);
  tcase_add_test(tc, test_901);
  tcase_add_test(tc, test_902);
  tcase_add_test(tc, test_903);
  tcase_add_test(tc, test_904);
  tcase_add_test(tc, test_905);
  tcase_add_test(tc, test_906);
  tcase_add_test(tc, test_907);
  tcase_add_test(tc, test_908);
  tcase_add_test(tc, test_909);
  tcase_add_test(tc, test_910);
  tcase_add_test(tc, test_911);
  tcase_add_test(tc, test_912);
  tcase_add_test(tc, test_913);
  tcase_add_test(tc, test_914);
  tcase_add_test(tc, test_915);
  tcase_add_test(tc, test_916);
  tcase_add_test(tc, test_917);
  tcase_add_test(tc, test_918);
  tcase_add_test(tc, test_919);
  tcase_add_test(tc, test_920);
  tcase_add_test(tc, test_921);
  tcase_add_test(tc, test_922);
  tcase_add_test(tc, test_923);
  tcase_add_test(tc, test_924);
  tcase_add_test(tc, test_925);
  tcase_add_test(tc, test_926);
  tcase_add_test(tc, test_927);
  tcase_add_test(tc, test_928);
  tcase_add_test(tc, test_929);
  tcase_add_test(tc, test_930);
  tcase_add_test(tc, test_931);
  tcase_add_test(tc, test_932);
  tcase_add_test(tc, test_933);
  tcase_add_test(tc, test_934);
  tcase_add_test(tc, test_935);
  tcase_add_test(tc, test_936);
  tcase_add_test(tc, test_937);
  tcase_add_test(tc, test_938);
  tcase_add_test(tc, test_939);
  tcase_add_test(tc, test_940);
  tcase_add_test(tc, test_941);
  tcase_add_test(tc, test_942);
  tcase_add_test(tc, test_943);
  tcase_add_test(tc, test_944);
  tcase_add_test(tc, test_945);
  tcase_add_test(tc, test_946);
  tcase_add_test(tc, test_947);
  tcase_add_test(tc, test_948);
  tcase_add_test(tc, test_949);
  tcase_add_test(tc, test_950);
  tcase_add_test(tc, test_951);
  tcase_add_test(tc, test_952);
  tcase_add_test(tc, test_953);
  tcase_add_test(tc, test_954);
  tcase_add_test(tc, test_955);
  tcase_add_test(tc, test_956);
  tcase_add_test(tc, test_957);
  tcase_add_test(tc, test_958);
  tcase_add_test(tc, test_959);
  tcase_add_test(tc, test_960);
  tcase_add_test(tc, test_961);
  tcase_add_test(tc, test_962);
  tcase_add_test(tc, test_963);
  tcase_add_test(tc, test_964);
  tcase_add_test(tc, test_965);
  tcase_add_test(tc, test_966);
  tcase_add_test(tc, test_967);
  tcase_add_test(tc, test_968);
  tcase_add_test(tc, test_969);
  tcase_add_test(tc, test_970);
  tcase_add_test(tc, test_971);
  tcase_add_test(tc, test_972);
  tcase_add_test(tc, test_973);
  tcase_add_test(tc, test_974);
  tcase_add_test(tc, test_975);
  tcase_add_test(tc, test_976);
  tcase_add_test(tc, test_977);
  tcase_add_test(tc, test_978);
  tcase_add_test(tc, test_979);
  tcase_add_test(tc, test_980);
  tcase_add_test(tc, test_981);
  tcase_add_test(tc, test_982);
  tcase_add_test(tc, test_983);
  tcase_add_test(tc, test_984);
  tcase_add_test(tc, test_985);
  tcase_add_test(tc, test_986);
  tcase_add_test(tc, test_987);
  tcase_add_test(tc, test_988);
  tcase_add_test(tc, test_989);
  tcase_add_test(tc, test_990);
  tcase_add_test(tc, test_991);
  tcase_add_test(tc, test_992);
  tcase_add_test(tc, test_993);
  tcase_add_test(tc, test_994);
  tcase_add_test(tc, test_995);
  tcase_add_test(tc, test_996);
  tcase_add_test(tc, test_997);
  tcase_add_test(tc, test_998);
  tcase_add_test(tc, test_999);
  tcase_add_test(tc, test_1000);
  tcase_add_test(tc, test_1001);
  tcase_add_test(tc, test_1002);
  tcase_add_test(tc, test_1003);
  tcase_add_test(tc, test_1004);
  tcase_add_test(tc, test_1005);
  tcase_add_test(tc, test_1006);
  tcase_add_test(tc, test_1007);
  tcase_add_test(tc, test_1008);
  tcase_add_test(tc, test_1009);
  tcase_add_test(tc, test_1010);
  tcase_add_test(tc, test_1011);
  tcase_add_test(tc, test_1012);
  tcase_add_test(tc, test_1013);
  tcase_add_test(tc, test_1014);
  tcase_add_test(tc, test_1015);
  tcase_add_test(tc, test_1016);
  tcase_add_test(tc, test_1017);
  tcase_add_test(tc, test_1018);
  tcase_add_test(tc, test_1019);
  tcase_add_test(tc, test_1020);
  tcase_add_test(tc, test_1021);
  tcase_add_test(tc, test_1022);
  tcase_add_test(tc, test_1023);
  tcase_add_test(tc, test_1024);
  tcase_add_test(tc, test_1025);
  suite_add_tcase(s, tc);
  return s;
}
