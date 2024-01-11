#include "s21_string.h"

char *s21_strpbrk(const char *str1, const char *str2) {
  /*Finds the first character in the string str1
  that matches any character specified in str2.*/
  char *return_val = S21_NULL;
  if (str1 && str2) {
    int reserved_values[256] = {0};
    for (; *str2; str2++) {
      reserved_values[(int)*str2] = 1;
    }
    for (; *str1 && !return_val; str1++) {
      if (reserved_values[(int)*str1]) {
        return_val = (char *)str1;
      }
    }
  }
  return return_val;
}