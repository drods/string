#include "main.h"

void case_test(Suite *s, int *fail) {
  SRunner *runner = srunner_create(s);
  srunner_set_fork_status(runner, CK_NOFORK);
  srunner_run_all(runner, CK_NORMAL);
  *fail = srunner_ntests_failed(runner);
  srunner_free(runner);
}

int main() {
  int result[7] = {0};
  int fail = 0;

  case_test(s21_sprintf_suite_x(), result);

  case_test(s21_sprintf_suite_u(), &(result[1]));

  case_test(s21_sprintf_suite_f(), &(result[2]));

  case_test(s21_sprintf_suite_o(), &(result[3]));

  case_test(s21_sprintf_suite_s(), &(result[4]));

  case_test(s21_sprintf_suite_di(), &(result[5]));

  case_test(s21_sprintf_suite_c(), &(result[6]));

  for (int i = 0; i < 6; i++) {
    if (result[i] != 0) {
      fail = 1;
    }
  }

  return fail;
}
