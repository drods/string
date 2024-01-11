#include "s21_string.h"

char *s21_strrchr(const char *str, int c) {
  char *res = S21_NULL;
  if (str) {
    const char *p = str + s21_strlen(str);
    while (p >= str) {
      if (*p == c) {
        res = (char *)p;
        break;
      }
      p--;
    }
  }
  return res;
}
