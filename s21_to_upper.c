#include "s21_string.h"

void *s21_to_upper(const char *str) {
  char *result = S21_NULL;
  if (str) {
    result = calloc(sizeof(char), s21_strlen(str) + 1);
    if (result) {
      int i = 0;
      for (; str[i]; i++) {
        if (str[i] > 96 && str[i] < 123) {
          result[i] = str[i] - 32;
        } else {
          result[i] = str[i];
        }
      }
    }
  }
  return result;
}