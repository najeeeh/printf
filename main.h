#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>

void printCharToBuffer(char *buf, int *j, int *x, char c);
void printStringToBuffer(char *buf, int *j, int *x, const char *str);
void handlePercent(char *buf, int *j, int *x);
int _printf(const char *format, ...);

#endif
