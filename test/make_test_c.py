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
    number_test = 0
    values = ["'A'", "'a'", 0, 5, 128, -10]
    formats = ["c", "0c", "1c", "10c", "10.c", "10.0c", "10.5c", "5.10c", "5.5c"]
    for value_ in values:
        for format_ in formats:
            case = "START_TEST(test_{0}) (*( char str1[BUFF_SIZE];\nchar str2[BUFF_SIZE];\nchar *format = \"Values: %{1}\";\nchar val = {2};\nck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));\nck_assert_str_eq(str1, str2);\n)*)\nEND_TEST\n".format(number_test, format_, value_)
            cases.append(case)
            number_test += 1
    return cases

def make_calls():
    calls = list()
    number_test = 0
    values = ["'A'", "'a'", 0, 5, 128, -10]
    formats = ["c", "0c", "1c", "10c", "10.c", "10.0c", "10.5c", "5.10c", "5.5c"]
    for value in values:
        for format in formats:
            call =  "tcase_add_test(tc, test_{0});\n".format(number_test)
            calls.append(call)
            number_test += 1
    return calls
            

def main():
    cases = make_cases()
    call_cases=make_calls()
    file = open("test_c.c", "w")
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