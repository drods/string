#include "s21_string.h"

void *s21_memchr(const void *ptr, int ch, s21_size_t n) {
  char *source = (char *)ptr;
  void *found_byte = NULL;
  for (s21_size_t i = 0; i < n && !found_byte; i++) {
    if (source[i] == ch) {
      found_byte = source + i;
    }
  }
  return found_byte;
}
