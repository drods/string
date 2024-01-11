#include "s21_string.h"

void *s21_memset(void *str, int c, s21_size_t n) {
  /*Copies the character c (an unsigned char)
  to the first n characters of the string
  pointed to, by the argument str.*/
  if (str) {
    char *dest = (char *)str;
    for (s21_size_t i = 0; i < n; i++) {
      *(dest + i) = c;
    }
  }
  return str;
}
