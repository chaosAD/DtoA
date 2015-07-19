#ifndef __DTOA_H__
#define __DTOA_H__

char *_dtoa(double dd, int mode, int ndigits, int *decpt, int *sign, char **rve);
double _strtod(const char *s00, char **se);

#endif  // __DTOA_H__