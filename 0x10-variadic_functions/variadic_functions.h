#ifndef FILE_VARIADIC_FUNCTIONS
#define FILE_VARIADIC_FUNCTIONS
#include <stdarg.h>
#include <stdio.h>
/**
 * struct frmt - Struct format
 * @f: type format
 * @p: print function
 */
typedef struct frmt
{
char *f;
void (*p)(va_list s);
} my_frmt;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
