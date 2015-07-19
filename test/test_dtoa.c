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

void test_dtoa_given_fractional_value() {
  char *value;
  int sign, decpt;
  value = _dtoa(-12.3456789012e+2, 10, 15, &decpt, &sign, NULL);
  // Note sign=1 means negative number
  printf("%s, decpt=%d, sign=%d\n", value, decpt, sign);
}
