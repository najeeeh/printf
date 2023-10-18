#include "main.h"

/**
 * print_gfunc - select the right function to print format
 *
 * @args: va_list arguments
 * @format: the format that contains the specifier.
 *
 * Return: the number of bytes printed
 */

int print_gfunc(va_list args, char format)
{
	specifiers_tab sp[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_int},
		{"i", print_int},
		{NULL, NULL}
	};
	int i, x = 0;

	i = 0;
	while (sp[i].spec)
	{
		if (format == sp[i].spec[0])
		{
			return (sp[i].spec_func(args));
		}
		i++;
	}
	x = _putchar(format);

	return (x);
}
