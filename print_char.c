#include "main.h"
/**
 * print_char - Print a single character to a character buffer
 * @param buf: Pointer to buf
 * @param j: Pointer
 * @param c: The character to be added
 */
void print_char(char *buf, int *j, char c)
{
	buf[(*j)++] = c;
}
