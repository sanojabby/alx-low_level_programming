#ifndef _VARIADIC_FUNCTION_H_
#define _VARIADIC_FUNCTION_H_


#include <stdio.h>
#include <stdarg.h>

void print_all(const char * const format, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
int sum_them_all(const unsigned int n, ...);
int _putchar(char c);

#endif
