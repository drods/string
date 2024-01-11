#include "s21_string.h"

char *s21_strncpy(char *dest, const char *src, s21_size_t n) {
  /*Copies up to n characters from the string pointed to,
  by src to dest.*/
  if (dest && src) {
    s21_size_t i = 0;
    for (; i < n && src[i]; i++) {
      dest[i] = src[i];
    }
    dest[i] = '\0';
  }
  return dest;
}
