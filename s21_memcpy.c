#include "s21_string.h"

void *s21_memcpy(void *dest, const void *src, s21_size_t n) {
  /*Copies n characters from src to dest.*/
  if (dest && src) {
    char *to_buf = (char *)dest;
    char *from_buf = (char *)src;
    for (s21_size_t i = 0; i < n; i++) {
      *(to_buf + i) = *(from_buf + i);
    }
  }
  return dest;
}
