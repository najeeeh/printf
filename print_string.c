#include "main.h"

/**
 * print_string - print a string to stdout
 *
 * @args: string to print.
 * Return: return number of bytes were printed.
 */
int print_string(va_list args)
{
	char *s;
	int i, x = 0;

	s = va_arg(args, char *);
	if (s == NULL)
		s = "(null)";

	for (i = 0; s[i] != '\0'; i++)
	{
		x += _putchar(s[i]);
	}
	return (x);
}
