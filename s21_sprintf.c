#include <ctype.h>
#include <math.h>
#include <stdarg.h>

#include "s21_string.h"

int s21_sprintf(char *destination_string, char *format_string, ...) {
  int written_symbols = 0;  // Return value.

  va_list parameters;  // Values for work with arguments.
  va_start(parameters, format_string);

  int format_index = 0;
  int correct_flag = 21;
  // Iterate through string.
  for (; correct_flag && format_string[format_index]; format_index++) {
    if (format_string[format_index] == '%') {
      format_index++;
      s21_sprintf_format specifier = {0};
      specifier.specifier = determine_specifier(format_string + format_index);
      correct_flag = check_format(format_string + format_index, &specifier);
      if (specifier.specifier && correct_flag) {
        paste_format_to_string(&specifier, destination_string, parameters,
                               &written_symbols);
        // Skip format.
        for (; !s21_strchr(ALLOWED_SPECIFIERS, format_string[format_index]);
             format_index++)
          ;
      } else {
        correct_flag = 0;
      }
    } else {
      // Add symbol to destination string.
      destination_string[written_symbols] = format_string[format_index];
      written_symbols++;
    }
  }
  // Terminate destination string.
  destination_string[written_symbols] = '\0';

  va_end(parameters);

  return correct_flag ? written_symbols : -21;
}

//_________________________Analyze of cpecifier and
// flags_________________________
int determine_specifier(char *format_string) {
  int correct_flag = 21;  // In case if there is no specifier.
  int specifier = 0;
  for (int i = 0; !specifier && correct_flag && format_string[i]; i++) {
    if (s21_strchr(ALLOWED_SPECIFIERS,
                   format_string[i])) {  // We found specifier.
      if (format_string[i] == '%' && i != 0) {
        correct_flag = 0;
      }
      specifier = format_string[i];
    } else if (!isdigit(format_string[i]) &&
               !s21_strchr(FLAGS_PRECISION_STAR, format_string[i]) &&
               !s21_strchr(LENGTH_OPTIONS, format_string[i])) {
      // Theat is incorrect specifier.
      correct_flag = 0;
    }
  }
  return correct_flag ? specifier : 0;
}

int check_format(char *format_string, s21_sprintf_format *specifier) {
  int check_flag = 21;
  for (int i = 0; check_flag && format_string[i] != specifier->specifier; i++) {
    check_flag = get_format_parameters(specifier, format_string[i]);
    if (check_flag && isdigit(format_string[i])) {
      int number = 0;
      if (specifier->width || specifier->precision) {
        for (; isdigit(format_string[i]); i++) {  // Write number to structure.
          number = number * 10 + (format_string[i] - '0');
        }
        i--;  // Point to last written char.
      }
      if (specifier->width && !(specifier->precision)) {
        specifier->width = number;
      } else {
        specifier->precision = number;
      }
    }
  }
  return check_flag;
}

int get_format_parameters(s21_sprintf_format *specifier, int order) {
  int return_flag = 0;
  if (order == '-') {
    return_flag = check_flag_minus(specifier);
    specifier->flag_minus = order;
  } else if (order == '+') {
    return_flag = check_flag_plus(specifier);
    specifier->flag_plus = check_flag_plus_space_specifier(specifier);
  } else if (order == '#') {
    return_flag = check_flag_sharp(specifier);
    specifier->flag_sharp = check_flag_sharp_specifier(specifier);
  } else if (order == ' ') {
    return_flag = check_flag_space(specifier);
    specifier->flag_space = check_flag_plus_space_specifier(specifier);
  } else if (order == '0' && check_flag_zero(specifier)) {
    return_flag = order;
    specifier->flag_zero = check_flag_zero_specifier(specifier);
  } else if (order == '*' || isdigit(order)) {
    if (check_width(specifier)) {
      if (order == '*') {
        specifier->star_width = 1;
      }
      specifier->width = 1;
      return_flag = 21;
    } else {
      if (check_precision(specifier)) {
        if (order == '*') {
          specifier->star_precision = 1;
        }
        specifier->precision = 1;
        specifier->dot = 2;
        return_flag = 21;
      }
    }
  } else if (order == '.') {
    return_flag = check_dot(specifier);
    specifier->dot = 1;
  } else if (s21_strchr(LENGTH_OPTIONS, order)) {
    return_flag = 21;  // <-- Need check that more tha one
    specifier->length = order;
  }
  return return_flag;
}

void paste_format_to_string(s21_sprintf_format *specifier,
                            char *destination_string, va_list parameters,
                            int *written_symbols) {
  // Write stars if they exist.
  if (specifier->star_width) {
    specifier->width = va_arg(parameters, unsigned int);
  }
  if (specifier->star_precision) {
    specifier->precision = va_arg(parameters, unsigned int);
  }
  // Make formatting.
  if (specifier->specifier == 'c') {
    int symbol = va_arg(parameters, int);
    format_c(specifier, destination_string, symbol, written_symbols);
  } else if (specifier->specifier == 'd' || specifier->specifier == 'i') {
    long int number = 0;
    if (specifier->length == 'l') {
      number = va_arg(parameters, long int);
    } else if ((specifier->length == 'h')) {
      short int symbol = (short int)va_arg(parameters, int);
      number = (long int)symbol;
    } else {
      int symbol = va_arg(parameters, int);
      number = (long int)symbol;
    }
    format_di(specifier, destination_string, number, written_symbols);
  } else if (specifier->specifier == 'u') {
    unsigned long int number = 0;
    if (specifier->length == 'l') {
      number = va_arg(parameters, unsigned long int);
    } else if (specifier->length == 'h') {
      short unsigned int symbol =
          (short unsigned int)va_arg(parameters, unsigned int);
      number = (unsigned long int)symbol;
    } else {
      unsigned int symbol = va_arg(parameters, unsigned int);
      number = (unsigned long int)symbol;
    }
    format_u(specifier, destination_string, number, written_symbols);
  } else if (specifier->specifier == 'f') {
    long double number = 0;
    if (specifier->length == 'L') {
      number = va_arg(parameters, long double);
    } else {
      double symbol = va_arg(parameters, double);
      number = (long double)symbol;
    }
    format_f(specifier, destination_string, number, written_symbols);
  } else if (specifier->specifier == 's') {
    char *string = va_arg(parameters, char *);
    char *copy = copy_string(string);
    if (copy) {
      format_s(specifier, destination_string, copy, written_symbols);
      free(copy);
    }
  } else if (specifier->specifier == '%') {
    destination_string[*written_symbols] = '%';
    (*written_symbols)++;
  } else if (specifier->specifier == 'x' || specifier->specifier == 'X') {
    unsigned long int number = 0;
    if (specifier->length == 'l') {
      number = va_arg(parameters, unsigned long int);
    } else {
      unsigned int symbol = va_arg(parameters, unsigned int);
      number = (unsigned long int)symbol;
    }
    format_xX(specifier, destination_string, number, written_symbols);
  } else if (specifier->specifier == 'p') {
    unsigned long int number = 0;
    number = va_arg(parameters, unsigned long int);
    specifier->flag_sharp = 21;
    format_xX(specifier, destination_string, number, written_symbols);
  } else if (specifier->specifier == 'o') {
    unsigned long int number = 0;
    if (specifier->length == 'l') {
      number = va_arg(parameters, unsigned long int);
    } else {
      unsigned int symbol = va_arg(parameters, unsigned int);
      number = (unsigned long int)symbol;
    }
    format_o(specifier, destination_string, number, written_symbols);
  }
}

int check_flag_minus(s21_sprintf_format *specifier) {
  return (specifier->flag_minus + specifier->width + specifier->star_width +
          specifier->dot + specifier->precision + specifier->star_precision +
          specifier->length) == 0;
}

int check_flag_plus(s21_sprintf_format *specifier) {
  return (specifier->flag_plus + specifier->width + specifier->star_width +
          specifier->dot + specifier->precision + specifier->star_precision +
          specifier->length) == 0;
}

int check_flag_sharp(s21_sprintf_format *specifier) {
  return (specifier->flag_sharp && specifier->width + specifier->star_width +
                                       specifier->dot + specifier->precision +
                                       specifier->star_precision +
                                       specifier->length) == 0;
}

int check_flag_space(s21_sprintf_format *specifier) {
  return (specifier->flag_space && specifier->width + specifier->star_width +
                                       specifier->dot + specifier->precision +
                                       specifier->star_precision +
                                       specifier->length) == 0;
}

int check_flag_zero(s21_sprintf_format *specifier) {
  return (specifier->flag_zero + specifier->width + specifier->star_width +
          specifier->dot + specifier->precision + specifier->star_precision +
          specifier->length) == 0;
}

int check_width(s21_sprintf_format *specifier) {
  return (specifier->width + specifier->star_width + specifier->dot +
          specifier->precision + specifier->star_precision +
          specifier->length) == 0;
}

int check_precision(s21_sprintf_format *specifier) {
  return (specifier->precision + specifier->star_precision +
          specifier->length) == 0;
}

int check_dot(s21_sprintf_format *specifier) {
  return (specifier->dot + specifier->precision + specifier->star_precision +
          specifier->length) == 0;
}

int check_flag_plus_space_specifier(s21_sprintf_format *specifier) {
  char available[] = "dif";
  return s21_strchr(available, specifier->specifier) ? specifier->specifier : 0;
}

int check_flag_zero_specifier(s21_sprintf_format *specifier) {
  char available[] = "difuxXop";
  return s21_strchr(available, specifier->specifier) ? specifier->specifier : 0;
}

int check_flag_sharp_specifier(s21_sprintf_format *specifier) {
  char available[] = "xXof";
  return s21_strchr(available, specifier->specifier) ? specifier->specifier : 0;
}
//_______________________________________________________________________________________

//_______________________________________Formating_______________________________________
char *get_string_format(s21_sprintf_format *specifier, char *paste_string,
                        char *extra_string) {
  // Allocate memory.
  int extra = s21_strlen(extra_string);
  int len_1 = s21_strlen(paste_string) + extra;
  int len_2 = specifier->precision + extra;
  int len_3 = specifier->width;
  int length = max_3(len_1, len_2, len_3);
  char *format_string = calloc(sizeof(char), length + 1);
  if (format_string) {
    s21_size_t start_string =
        get_position_for_string(specifier, paste_string, length, extra);
    s21_size_t start_precision =
        get_position_for_precision(specifier, paste_string, length, extra);
    s21_size_t start_extra = get_position_for_extra(
        specifier, paste_string, start_precision, start_string, length, extra);
    int symbol = (specifier->flag_zero && !(specifier->flag_minus)) ? '0' : ' ';
    fill_string_with_symbol(format_string, symbol, length);
    fill_string_with_symbol(format_string + start_precision, '0',
                            specifier->precision);
    write_string_to_string(format_string + start_string, paste_string);
    write_string_to_string(format_string + start_extra, extra_string);
  }
  return format_string;
}

s21_size_t get_position_for_precision(s21_sprintf_format *specifier,
                                      char *paste_string, s21_size_t length,
                                      s21_size_t extra) {
  s21_size_t start_precision = 0;
  if (specifier->precision <= s21_strlen(paste_string)) {  // Do not add zeroes.
    specifier->precision = 0;
  }
  if (specifier->precision &&
      (s21_size_t)specifier->precision > s21_strlen(paste_string)) {
    start_precision =
        specifier->flag_minus ? extra : length - specifier->precision;
  }
  return start_precision;
}

s21_size_t get_position_for_string(s21_sprintf_format *specifier,
                                   char *paste_string, s21_size_t length,
                                   s21_size_t extra) {
  s21_size_t start_string = 0;
  if (specifier->precision <= s21_strlen(paste_string)) {  // Do not add zeroes.
    specifier->precision = 0;
  }
  if (specifier->precision &&
      (s21_size_t)specifier->precision > s21_strlen(paste_string)) {
    start_string =
        (specifier->flag_minus ? specifier->precision + extra : length) -
        s21_strlen(paste_string);
  } else {
    start_string = specifier->flag_minus ? (s21_size_t)extra
                                         : length - s21_strlen(paste_string);
  }
  return start_string;
}

s21_size_t get_position_for_extra(s21_sprintf_format *specifier,
                                  char *paste_string,
                                  s21_size_t start_precision,
                                  s21_size_t start_string, s21_size_t length,
                                  s21_size_t extra) {
  s21_size_t start_extra = 0;
  if (specifier->precision <= s21_strlen(paste_string)) {  // Do not add zeroes.
    specifier->precision = 0;
  }
  if (specifier->precision &&
      (s21_size_t)specifier->precision > s21_strlen(paste_string)) {
    start_extra = start_precision - extra;
  } else {
    start_extra = (specifier->flag_minus || !specifier->flag_zero)
                      ? start_string - extra
                      : length - (specifier->width > s21_strlen(paste_string)
                                      ? specifier->width
                                      : s21_strlen(paste_string) + extra);
  }
  return start_extra;
}

void format_c(s21_sprintf_format *specifier, char *destination_string,
              int symbol, int *written_symbols) {
  char string[] = " ";
  char extra_string[] = "";
  string[0] = symbol;
  remove_excess_format(specifier);
  char *paste_string = get_string_format(specifier, string, extra_string);
  if (paste_string) {
    /// КОСТЫЛЬ !!! ЭТО ВСЁ КОСТЫЛЬ!!!
    int tmp = s21_strlen(paste_string);
    if (symbol == 0) {
      int index = specifier->flag_minus ? 0 : tmp - (tmp ? 1 : 0);
      paste_string[index] = '\0';
      if (!specifier->width) {
        tmp += 1;
      }
    }
    /// КОНЕЦ КОСТЫЛЯ !!!
    s21_strcpy(destination_string + *written_symbols, paste_string);
    *written_symbols += tmp;
    free(paste_string);
  }
}

void format_di(s21_sprintf_format *specifier, char *destination_string,
               long int symbol, int *written_symbols) {
  char *string_number = my_itoa(symbol * (symbol < 0 ? -1 : 1));
  if (string_number) {
    remove_excess_format(specifier);
    char *extra = symbol < 0 ? "-"
                             : (specifier->flag_plus      ? "+"
                                : (specifier->flag_space) ? " "
                                                          : "");
    // ТУТ ЕСТЬ КОСТЫЛЬ !!!
    char *paste_string = get_string_format(
        specifier,
        /*ВОТ ОН*/ specifier->dot && !specifier->precision && symbol == 0
            ? ""
            : /*КОНЕЦ*/ string_number,
        extra);
    if (paste_string) {
      s21_strcpy(destination_string + *written_symbols, paste_string);
      *written_symbols += s21_strlen(paste_string);
      free(paste_string);
    }
    free(string_number);
  }
}

void format_s(s21_sprintf_format *specifier, char *destination_string,
              char *string, int *written_symbols) {
  if (specifier->dot) {
    int index = specifier->precision
                    ? ((s21_size_t)specifier->precision < s21_strlen(string)
                           ? (s21_size_t)specifier->precision
                           : s21_strlen(string))
                    : 0;
    string[index] = '\0';
  }
  remove_excess_format(specifier);
  char *paste_string = get_string_format(specifier, string, "");
  if (paste_string) {
    s21_strcpy(destination_string + *written_symbols, paste_string);
    *written_symbols += s21_strlen(paste_string);
    free(paste_string);
  }
}

void format_xX(s21_sprintf_format *specifier, char *destination_string,
               unsigned long int symbol, int *written_symbols) {
  char *hex_num =
      change_number_system(symbol, 16, isupper(specifier->specifier));
  if (hex_num) {
    char *extra = specifier->flag_sharp && symbol
                      ? (isupper(specifier->specifier) ? "0X" : "0x")
                      : "";
    remove_excess_format(specifier);
    char *paste_string = get_string_format(
        specifier,
        /*ВОТ ОН*/ specifier->dot && !specifier->precision && symbol == 0
            ? ""
            : /*КОНЕЦ*/ hex_num,
        extra);
    s21_strcpy(destination_string + *written_symbols, paste_string);
    *written_symbols += s21_strlen(paste_string);
    free(paste_string);
    free(hex_num);
  }
}

void format_o(s21_sprintf_format *specifier, char *destination_string,
              unsigned long int symbol, int *written_symbols) {
  char *hex_num =
      change_number_system(symbol, 8, isupper(specifier->specifier));
  if (hex_num) {
    char *extra =
        specifier->flag_sharp &&
                (((s21_strlen(hex_num) >= specifier->precision) && symbol) ||
                 (specifier->dot && !specifier->precision && !symbol))
            ? "0"
            : "";
    char *format = (specifier->dot && !specifier->precision && !symbol)
                       ? ""
                       : /*КОНЕЦ*/ hex_num;
    remove_excess_format(specifier);
    char *paste_string = get_string_format(specifier, format, extra);
    s21_strcpy(destination_string + *written_symbols, paste_string);
    *written_symbols += s21_strlen(paste_string);
    free(paste_string);
    free(hex_num);
  }
}

void format_f(s21_sprintf_format *specifier, char *destination_string,
              long double symbol, int *written_symbols) {
  if (specifier->dot == 0) {
    specifier->precision = 6;
  }
  int dot = specifier->precision || (specifier->dot && specifier->flag_sharp);
  char *string_number =
      my_ftoa(symbol * (symbol < 0 ? -1 : 1), specifier->precision, dot);
  if (string_number) {
    char *extra = S21_NULL;
    extra = symbol < 0 ? "-"
                       : (specifier->flag_plus      ? "+"
                          : (specifier->flag_space) ? " "
                                                    : "");
    remove_excess_format(specifier);
    char *paste_string = get_string_format(specifier, string_number, extra);
    if (paste_string) {
      s21_strcpy(destination_string + *written_symbols, paste_string);
      *written_symbols += s21_strlen(paste_string);
      free(paste_string);
    }
    free(string_number);
  }
}

void format_u(s21_sprintf_format *specifier, char *destination_string,
              unsigned long int symbol, int *written_symbols) {
  char *string_number = my_utoa(symbol);
  if (string_number) {
    char *extra = "";
    remove_excess_format(specifier);
    // ТУТ ЕСТЬ КОСТЫЛЬ !!!
    char *paste_string = get_string_format(
        specifier,
        /*ВОТ ОН*/ specifier->dot && !specifier->precision && symbol == 0
            ? ""
            : /*КОНЕЦ*/ string_number,
        extra);
    if (paste_string) {
      s21_strcpy(destination_string + *written_symbols, paste_string);
      *written_symbols += s21_strlen(paste_string);
      free(paste_string);
    }
    free(string_number);
  }
}

void remove_excess_format(s21_sprintf_format *specifier) {
  if (s21_strchr("cfsgGeE", specifier->specifier)) {
    specifier->precision = 0;
  }
  if (s21_strchr("cs", specifier->specifier)) {
    specifier->flag_zero = 0;
  }
  if (specifier->flag_minus || specifier->dot) {
    /* КОСТЫЛЬ для f */ if (specifier->specifier == 'f') {
      specifier->flag_zero = specifier->flag_zero && !specifier->precision;
    } /* Конец */
    else {
      specifier->flag_zero = 0;
    }
  }
}
//_______________________________________________________________________________________

//_________________________My_implementation_of_basic_functions_________________________
char *my_itoa(long int number) {
  s21_size_t length = find_number_length(number);
  char *number_string = calloc(sizeof(char), length + 1);
  if (number_string) {
    char *reverse_number = calloc(sizeof(char), length + 1);
    if (reverse_number) {
      int index = 0;
      if (number == 0) {
        number_string[index] = '0';
        number_string[index + 1] = '\0';
      } else {
        if (number < 0) {
          number_string[index] = '-';
          number *= -1;
          index++;
        }
        make_reversed_number(reverse_number, number);
        reverse_string(number_string + index, reverse_number);
      }
      free(reverse_number);
    } else {
      free(number_string);
      number_string = S21_NULL;
    }
  }
  return number_string;
}

char *my_utoa(unsigned long int number) {
  s21_size_t length = find_u_number_length(number);
  char *number_string = calloc(sizeof(char), length + 1);
  if (number_string) {
    char *reverse_number = calloc(sizeof(char), length + 1);
    if (reverse_number) {
      int index = 0;
      if (number == 0) {
        number_string[index] = '0';
        number_string[index + 1] = '\0';
      } else {
        make_reversed_u_number(reverse_number, number);
        reverse_string(number_string + index, reverse_number);
      }
      free(reverse_number);
    } else {
      free(number_string);
      number_string = S21_NULL;
    }
  }
  return number_string;
}

s21_size_t find_number_length(long int number) {
  s21_size_t length = number <= 0 ? 1 : 0;
  number *= number < 0 ? -1 : 1;
  for (; number > 0; number /= 10, length++)
    ;
  return length;
}

s21_size_t find_u_number_length(unsigned long int number) {
  s21_size_t length = number == 0 ? 1 : 0;
  for (; number > 0; number /= 10, length++)
    ;
  return length;
}

void reverse_string(char *normal, char *reversed) {
  // It's thought, that strings of the same length.
  int length = s21_strlen(
      reversed);  // <--- s21_strlen should be changed with our function.
  for (int i = 0; i < length; i++) {
    normal[i] = reversed[length - i - 1];
  }
  normal[length] = '\0';
}

void make_reversed_number(char *reverse_number, long int number) {
  int i = 0;
  for (; number > 0; i++, number /= 10) {
    reverse_number[i] = (number % 10) + '0';
  }
  reverse_number[i] = '\0';
}

void make_reversed_u_number(char *reverse_number, unsigned long int number) {
  int i = 0;
  for (; number > 0; i++, number /= 10) {
    reverse_number[i] = (number % 10) + '0';
  }
  reverse_number[i] = '\0';
}

int max_3(int number_1, int number_2, int number_3) {
  int max_number = 0;
  if (number_1 > max_number) {
    max_number = number_1;
  }
  if (number_2 > max_number) {
    max_number = number_2;
  }
  if (number_3 > max_number) {
    max_number = number_3;
  }
  return max_number;
}

char *change_number_system(unsigned long int number, int system, int up) {
  char *string_number = S21_NULL;
  if (system > 0 && system < 17) {
    unsigned long int length = number == 0 ? 1 : 0;
    for (unsigned long int tmp = number; tmp / system; tmp /= system, length++)
      ;
    char *reversed_number = calloc(sizeof(char), length + 2);
    if (reversed_number) {
      char hex_symbols_up[] = {'0', '1', '2', '3', '4', '5', '6', '7',
                               '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
      char hex_symbols_low[] = {'0', '1', '2', '3', '4', '5', '6', '7',
                                '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
      char *hex_symbols = up ? hex_symbols_up : hex_symbols_low;
      string_number = calloc(sizeof(char), length + 2);
      if (string_number) {
        if (number == 0) {
          reversed_number[0] = '0';
        }
        for (int i = 0; number; i++) {
          unsigned long int index = number % system;
          reversed_number[i] = hex_symbols[index];
          number /= system;
        }
        reverse_string(string_number, reversed_number);
      }
      free(reversed_number);
    }
  }
  return string_number;
}

void write_string_to_string(char *to_string, char *from_string) {
  for (int i = 0; from_string[i]; i++) {
    to_string[i] = from_string[i];
  }
}

void fill_string_with_symbol(char *string, int symbol, int count) {
  for (int i = 0; i < count; i++) {
    string[i] = symbol;
  }
}

char *my_ftoa(long double number, unsigned int precision, int dot) {
  long double tmp = number < 0 ? -1 * number : number;
  int round_flag = round(tmp - floor(tmp)) >= 1.0;
  char *number_string = S21_NULL;
  char *part_1 = !precision && round_flag ? my_itoa((long int)round(number))
                                          : my_itoa((long int)number);
  if (part_1) {
    number *= (number < 0) ? -1 : 1;
    number += 1 - floor(number);
    if (precision > 20) {
      number *= pow(10, 20);  // Limit.
    } else {
      number *= pow(10, precision);
    }
    char *part_2 = my_itoa((long int)round(number));
    if (part_2) {
      number_string =
          calloc(sizeof(char),
                 s21_strlen(part_1) + s21_strlen(part_2) + 2);  // + '.' + '\0'
      s21_strcpy(number_string, part_1);
      if (dot) {
        number_string[s21_strlen(part_1)] = '.';
      }
      if (precision) {
        s21_strcpy(number_string + s21_strlen(part_1) + 1, part_2 + 1);
      }
      free(part_2);
    }
    free(part_1);
  }
  return number_string;
}

char *copy_string(char *string) {
  char *copy = calloc(sizeof(char), s21_strlen(string) + 1);
  if (copy) {
    s21_strcpy(copy, string);
  }
  return copy;
}
