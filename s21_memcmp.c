#include "s21_string.h"

int s21_memcmp(const void *str1, const void *str2, s21_size_t n) {
  /*Compares the first n bytes of str1 and str2.*/
  int return_val = 0;
  if (str1 && str2) {
    char *buf_1 = (char *)str1;
    char *buf_2 = (char *)str2;
    s21_size_t i = 0;
    for (; i + 1 < n && buf_1[i] == buf_2[i]; i++)
      ;
    return_val = buf_1[i] - buf_2[i];
  }
  return return_val;
}
