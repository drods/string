#include <string.h>

#include "s21_string.h"

char *s21_strstr(const char *haystack, const char *needle) {
  const char *res = S21_NULL;
  int needle_len = s21_strlen(needle);

  if (!needle_len)
    res = haystack;
  else {
    while (*haystack) {
      if (strncmp(haystack, needle, needle_len) == 0) {
        res = haystack;
        break;
      }
      haystack++;
    }
  }
  return (char *)res;
}