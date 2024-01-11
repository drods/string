#include "s21_string.h"

char *s21_strchr(const char *str, int c) {
  const char *c_position = S21_NULL;
  const char *p;
  for (p = str; *p != 0 && !c_position; p++) {
    if (*p == c) {
      c_position = p;
    }
  }
  if (c == 0) c_position = p;

  return (char *)c_position;
}
