#include "s21_string.h"

char *s21_strtok(char *str, const char *delim) {
  static char *token = S21_NULL;

  if (str != S21_NULL) token = str;

  while (token != S21_NULL && *token && s21_strchr(delim, *token))
    token++;  // Skip leading delimiters

  char *start = token;
  if (token != S21_NULL) {
    if (*token == '\0') start = S21_NULL;  // Reached the end of the string

    while (*token && !s21_strchr(delim, *token))  // Find the end of the token
      token++;

    if (*token != '\0')  // Terminate the token and move to the next position
      *token++ = '\0';
  }
  return start;
}
