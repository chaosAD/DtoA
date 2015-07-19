#include <stdio.h>
#include "unity.h"
#include "dtoa.h"

void setUp(void) {}

void tearDown(void) {}

void test_strtod_given_extremely_small_fraction_value() {
  double d;
	d = _strtod("12.3456789012e-210 abc", NULL);
  printf("%.12e\n", d);
}
