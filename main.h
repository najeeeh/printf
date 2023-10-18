#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

/**
 * struct specifiers - select specifier from format.
 * @spec: a pointer to the specifier string.
 * @spec_func: pointer to the right function for the specifier.
 *Description: specifiers sum
 */
typedef struct specifiers
{
	char *spec;
	int (*spec_func)(va_list);
} specifiers_tab;

int _putchar(char c);
int out_put(char c);
int count(char *s);

int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);

void con_num_str(int *pj, int n, char *pbuf);
int _printf(const char *format, ...);
#endif
