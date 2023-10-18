#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
void print_char(char *buf, int *j, char c);
void print_string(char *buf, int *j, const char *str);
void con_num_str(int *pj, int n, char *pbuf);
int _printf(const char *format, ...);
#endif
