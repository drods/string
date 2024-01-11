#include "s21_string.h"

int find_unmatch(const char *src, const char *trim_chars, int i) {
  int position = -1;
  for (int j = 0; trim_chars[j]; j++) {
    if (src[i] == trim_chars[j]) {
      position = -1;
      break;
    } else
      position = i;
  }
  return position;
}

void *s21_trim(const char *src, const char *trim_chars) {
  char *fin = S21_NULL;
  if (src != S21_NULL && trim_chars != S21_NULL) {
    int size = s21_strlen(src);
    int start = -1, end = -1;
    for (int i = 0; i < size; i++) {
      start = find_unmatch(src, trim_chars, i);
      if (start != -1) break;
    }
    for (int i = size - 1; i >= 0; i--) {
      end = find_unmatch(src, trim_chars, i);
      if (end != -1) break;
    }
    if (start > end)
      fin = "";
    else if (start == -1 && end == -1) {
      fin = (char *)calloc(size + 1, sizeof(char));
      if (fin != S21_NULL) {
        for (int i = 0; i < size; i++) fin[i] = src[i];
      }
    } else {
      fin = (char *)calloc(end - start + 2, sizeof(char));
      if (fin != S21_NULL) {
        for (int i = 0; start <= end; start++, i++) fin[i] = src[start];
      }
    }
  }
  return fin;
}
