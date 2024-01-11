#ifndef S21_STRING_H
#define S21_STRING_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

typedef unsigned long s21_size_t;
#define S21_NULL (void *)0

// Basic functions.
void *s21_memchr(const void *str, int c, s21_size_t n);
int s21_memcmp(const void *str1, const void *str2, s21_size_t n);
void *s21_memcpy(void *dest, const void *src, s21_size_t n);
void *s21_memset(void *str, int c, s21_size_t n);
char *s21_strncat(char *dest, const char *src, s21_size_t n);
char *s21_strchr(const char *str, int c);
int s21_strncmp(const char *str1, const char *str2, s21_size_t n);
char *s21_strncpy(char *dest, const char *src, s21_size_t n);
s21_size_t s21_strcspn(const char *str1, const char *str2);
char *s21_strerror(int errnum);
s21_size_t s21_strlen(const char *str);
char *s21_strpbrk(const char *str1, const char *str2);
char *s21_strrchr(const char *str, int c);
char *s21_strstr(const char *haystack, const char *needle);
char *s21_strtok(char *str, const char *delim);

int sscanf(const char *str, const char *format, ...);

// C# functions.
void *s21_to_upper(const char *str);
void *s21_to_lower(const char *str);
void *s21_insert(const char *src, const char *str, s21_size_t start_index);
void *s21_trim(const char *src, const char *trim_chars);

// Additional functions.
char *s21_itoa(int num, char *str, int base);
char *s21_strcpy(char *dest, const char *src);

// sprintf implementation.
#define ALLOWED_SPECIFIERS "cdieEfgGosuxXpn%%"
#define FLAGS_PRECISION_STAR "-+#0 .*"
#define LENGTH_OPTIONS "hlL"

typedef struct formating {
  int specifier;
  s21_size_t flag_minus;
  s21_size_t flag_plus;
  s21_size_t flag_sharp;
  s21_size_t flag_space;
  s21_size_t flag_zero;
  s21_size_t width;
  s21_size_t star_width;
  s21_size_t dot;
  s21_size_t precision;
  s21_size_t star_precision;
  s21_size_t length;
} s21_sprintf_format;

int s21_sprintf(char *destination_string, char *format_string, ...);

// Analyze of cpecifier and flags.
int determine_specifier(char *format_string);
int get_format_parameters(s21_sprintf_format *specifier, int order);
int check_format(char *format_string, s21_sprintf_format *specifier);
void paste_format_to_string(s21_sprintf_format *specifier,
                            char *destination_string, va_list parameters,
                            int *written_symbols);

int check_flag_minus(s21_sprintf_format *specifier);
int check_flag_plus(s21_sprintf_format *specifier);
int check_flag_sharp(s21_sprintf_format *specifier);
int check_flag_space(s21_sprintf_format *specifier);
int check_flag_zero(s21_sprintf_format *specifier);
int check_width(s21_sprintf_format *specifier);
int check_precision(s21_sprintf_format *specifier);
int check_dot(s21_sprintf_format *specifier);

int check_flag_plus_space_specifier(s21_sprintf_format *specifier);
int check_flag_zero_specifier(s21_sprintf_format *specifier);
int check_flag_sharp_specifier(s21_sprintf_format *specifier);

// My_implementation_of_basic_functions.
char *my_itoa(long int number);
size_t find_number_length(long int number);

void reverse_string(char *normal, char *reversed);
void make_reversed_number(char *reverse_number, long int number);

// Utoa = itoa for unsigned for sprintf.
char *my_utoa(unsigned long int number);
size_t find_u_number_length(unsigned long int number);
void make_reversed_u_number(char *reverse_number, unsigned long int number);

// Ftoa implementation for sprintf.
char *my_ftoa(long double number, unsigned int precision, int dot);

int max_3(int number_1, int number_2, int number_3);

// Get 2..16-decimal numbers as string.
char *change_number_system(unsigned long int number, int system, int up);

// For work with strings.
void write_string_to_string(char *to_string, char *from_string);
void fill_string_with_symbol(char *string, int symbol, int count);
char *copy_string(char *string);

// Formating for sprintf.
char *get_string_format(s21_sprintf_format *specifier, char *paste_string,
                        char *extra_string);

size_t get_position_for_extra(s21_sprintf_format *specifier, char *paste_string,
                              s21_size_t start_precision,
                              s21_size_t start_string, s21_size_t length,
                              s21_size_t extra);
size_t get_position_for_string(s21_sprintf_format *specifier,
                               char *paste_string, s21_size_t length,
                               s21_size_t extra);
size_t get_position_for_precision(s21_sprintf_format *specifier,
                                  char *paste_string, s21_size_t length,
                                  s21_size_t extra);

void format_c(s21_sprintf_format *specifier, char *destination_string,
              int symbol, int *written_symbols);
void format_di(s21_sprintf_format *specifier, char *destination_string,
               long int symbol, int *written_symbols);
void format_s(s21_sprintf_format *specifier, char *destination_string,
              char *string, int *written_symbols);
void format_xX(s21_sprintf_format *specifier, char *destination_string,
               unsigned long int symbol, int *written_symbols);
void format_o(s21_sprintf_format *specifier, char *destination_string,
              unsigned long int symbol, int *written_symbols);
void format_f(s21_sprintf_format *specifier, char *destination_string,
              long double symbol, int *written_symbols);
void format_u(s21_sprintf_format *specifier, char *destination_string,
              unsigned long int symbol, int *written_symbols);
void remove_excess_format(s21_sprintf_format *specifier);

#endif