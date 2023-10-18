#include "main.h"

/**
 * print_char - prints a character.
 *
 * @args: char
 * Return: 1 if success -1 else.
 */
int print_char(va_list args)
{
	char c = (char)va_arg(args, int);

	return (_putchar(c));
}
