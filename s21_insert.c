#include "s21_string.h"

void *s21_insert(const char *src, const char *str, size_t start_index) {
  char *new_str = S21_NULL;
  if (str != S21_NULL && src != S21_NULL) {
    s21_size_t size = s21_strlen(str) + s21_strlen(src);
    s21_size_t fin_index = start_index + s21_strlen(str);
    new_str = (char *)calloc(size + 1, sizeof(char));
    if (new_str != S21_NULL && start_index < s21_strlen(src)) {
      for (s21_size_t i = 0; i < start_index; i++) new_str[i] = src[i];
      for (s21_size_t i = start_index, j = 0; i < fin_index; i++, j++)
        new_str[i] = str[j];
      for (s21_size_t i = fin_index, j = start_index; i < size; i++, j++)
        new_str[i] = src[j];
    } else
      new_str = S21_NULL;
  }
  return new_str;
}
