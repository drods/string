#include "s21_string.h"

s21_size_t s21_strlen(const char *str) {
  /*omputes the length of the string
  str up to but not including the
  terminating null character.*/
  s21_size_t len = 0;
  if (str) {
    for (; *str; str++, len++)
      ;
  }
  return len;
}