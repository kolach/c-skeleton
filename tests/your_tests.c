#include "minunit.h"
#include <your_library.h>

void before_all()  {}
void after_all()   {}
void before_each() {}
void after_each()  {}

char* test_your_code() {
  mu_assert( 3 == your_code(1,2), "Your code does not work!" );
  return NULL;
}

char *all_tests() {
  mu_suite_start(before_each, after_each);
  before_all();
  mu_run_test(test_your_code);
  after_all();
  return NULL;
}

RUN_TESTS(all_tests);

