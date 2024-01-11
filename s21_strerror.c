#include "s21_strerror.h"

char *s21_itoa(int num, char *str, int base) {
  int i = 0;
  int j = 0;
  int is_negative = 0;

  if (num == 0) str[i++] = '0';

  if (num < 0) {
    is_negative = 1;
    num = -num;
  }

  while (num != 0 && base != 0) {
    int digit = num % base;
    if (digit > 9)
      str[i++] = digit - 10 + 'a';
    else
      str[i++] = digit + '0';
    num /= base;
  }

  if (is_negative) {
    str[i++] = '-';
  }

  str[i] = '\0';

  int len = s21_strlen(str) - 1;

  while (j < len) {
    char temp = str[j];
    str[j] = str[len];
    str[len] = temp;
    j++;
    len--;
  }
  return str;
}

char *s21_strerror(int errnum) {
  /*Searches an internal array for the
  error number errnum and returns a
  pointer to an error message string.
  You need to declare macros containing
  arrays of error messages for mac and
  linux operating systems. Error
  descriptions are available in the
  original library. Checking the current
  OS is carried out using directives.*/

  static char result_error[MAX_STR_LEN];

  if (0 <= errnum && errnum < N) {
    static char *errors[] = error;
    s21_strncpy(result_error, errors[errnum], s21_strlen(errors[errnum]));
  } else {
    char str_errnum[12];
    s21_strcpy(result_error, UERROR);
    s21_itoa(errnum, str_errnum, 10);
    s21_strncat(result_error, str_errnum, s21_strlen(str_errnum));
  }
  return result_error;
}
