headers = """
#include <check.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../s21_string.h"
#define BUFF_SIZE 512
"""

call_head = """Suite *s21_sprintf_suite(void) {
  Suite *s = suite_create("s21_sprintf");
  TCase *tc = tcase_create("case_sprintf");"""

call_tail="""  suite_add_tcase(s, tc);
  return s;
}"""

tail ="""void case_test(Suite *s, int *fail) {
  SRunner *runner = srunner_create(s);
  srunner_set_fork_status(runner, CK_NOFORK);
  srunner_run_all(runner, CK_NORMAL);
  *fail = srunner_ntests_failed(runner);
  srunner_free(runner);
}

int main() {
  int fail = 0;
  case_test(s21_sprintf_suite(), &fail);
  return fail;
}"""

def make_cases():
    cases = list()
    case = str()
    number_test = 0
    # String.
    type_ = "char *"
    specifier = "s"
    open_bracket = "{"
    close_bracket = "}"
    formats = ['*.', '-0.', '0.0', '-*.5', '0.5', '-*.0', '0.*', '-*.*', '10.10', '5.0', '10.0', '.*', '10.5', '5.5', '-10.*', '-5.0', '-*.', '-*.10', '*.*', '.', '*.10', '-10.5', '5.*', '10.*', '0.', '-10.0', '.10', '*.0', '10.', '-0.10', '-5.*', '-.0', '-.5', '-0.*', '-0.5', '.0', '-.*', '-0.0', '-5.5', '-10.', '-10.10', '-.10', '-.', '5.10', '.5', '5.', '*.5', '-5.', '-5.10', '0.10', '', '10', '0', '*', '-', '-*', '-5', '-10', '5', '-0']
    values = ['""', '"\\n"', '"H"', '"Hello school 21!"']
    for value_ in values:
        for format_ in formats:
            if format_.find("*.*") != -1:
                case = "START_TEST(test_{0}) {1} char str1[BUFF_SIZE];\nchar str2[BUFF_SIZE];\nchar *format = \"Values: %{2}{3}\";\n{4} val = {5};\nck_assert_int_eq(s21_sprintf(str1, format, 3, 4, val), sprintf(str2, format, 3, 4, val));\nck_assert_str_eq(str1, str2);\n{6}\nEND_TEST\n".format(number_test, open_bracket, format_, specifier, type_, value_, close_bracket)
            elif format_.find(".*") != -1:
                case = "START_TEST(test_{0}) {1} char str1[BUFF_SIZE];\nchar str2[BUFF_SIZE];\nchar *format = \"Values: %{2}{3}\";\n{4} val = {5};\nck_assert_int_eq(s21_sprintf(str1, format, 6, val), sprintf(str2, format, 6, val));\nck_assert_str_eq(str1, str2);\n{6}\nEND_TEST\n".format(number_test, open_bracket, format_, specifier, type_, value_, close_bracket)
            elif format_.find("*") != -1:
                case = "START_TEST(test_{0}) {1} char str1[BUFF_SIZE];\nchar str2[BUFF_SIZE];\nchar *format = \"Values: %{2}{3}\";\n{4} val = {5};\nck_assert_int_eq(s21_sprintf(str1, format, 6, val), sprintf(str2, format, 6, val));\nck_assert_str_eq(str1, str2);\n{6}\nEND_TEST\n".format(number_test, open_bracket, format_, specifier, type_, value_, close_bracket)
            else:
                case = "START_TEST(test_{0}) {1} char str1[BUFF_SIZE];\nchar str2[BUFF_SIZE];\nchar *format = \"Values: %{2}{3}\";\n{4} val = {5};\nck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));\nck_assert_str_eq(str1, str2);\n{6}\nEND_TEST\n".format(number_test, open_bracket, format_, specifier, type_, value_, close_bracket)
            cases.append(case)
            number_test += 1
    return cases

def make_calls():
    calls = list()
    number_test = 0
    formats = ['*.', '-0.', '0.0', '-*.5', '0.5', '-*.0', '0.*', '-*.*', '10.10', '5.0', '10.0', '.*', '10.5', '5.5', '-10.*', '-5.0', '-*.', '-*.10', '*.*', '.', '*.10', '-10.5', '5.*', '10.*', '0.', '-10.0', '.10', '*.0', '10.', '-0.10', '-5.*', '-.0', '-.5', '-0.*', '-0.5', '.0', '-.*', '-0.0', '-5.5', '-10.', '-10.10', '-.10', '-.', '5.10', '.5', '5.', '*.5', '-5.', '-5.10', '0.10', '', '10', '0', '*', '-', '-*', '-5', '-10', '5', '-0']
    values = ["", "\\n", "H", "Hello school 21!"]
    for value_ in values:
        for format_ in formats:
            call =  "tcase_add_test(tc, test_{0});\n".format(number_test)
            calls.append(call)
            number_test += 1
    return calls
            

def main():
    cases = make_cases()
    call_cases=make_calls()
    file = open("test_s.c", "w")
    file.write(headers)
    for case in cases:
        file.write(case)
        file.write("\n")
    file.write(call_head)
    for call_case in call_cases:
        file.write(call_case)
    file.write(call_tail)
    file.write(tail)
    file.close()

main()