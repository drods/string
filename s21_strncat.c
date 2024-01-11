#include "s21_string.h"

char *s21_strncat(char *dest, const char *src, s21_size_t n) {
  /*Appends the string pointed to, by src
  to the end of the string pointed to, by
  dest up to n characters long.*/
  char *dest_end = dest;
  if (dest && src) {
    while (*dest_end) {
      ++dest_end;
    }
    s21_size_t i = 0;
    for (; i < n && src[i]; ++i) {
      dest_end[i] = src[i];
    }
    dest_end[i] = '\0';
  }
  return dest;
}