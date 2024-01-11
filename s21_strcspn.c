#include "s21_string.h"

s21_size_t s21_strcspn(const char *str1, const char *str2) {
  /*Calculates the length of the initial segment
  of str1 which consists entirely of characters
  not in str2.*/
  s21_size_t dif_len = 0;
  if (str1 && str2) {
    int reserved_values[256] = {0};
    for (; *str2; str2++) {
      reserved_values[(int)*str2] = 1;
    }
    for (; *str1 && !reserved_values[(int)*str1]; str1++, dif_len++)
      ;
  }
  return dif_len;
}
