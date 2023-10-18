#include "main.h"

/**
 * _printf - works as printf function
 *
 * @format: The format string
 * Return: The number of characters printed
*/
int _printf(const char *format, ...)
{
	va_list args;
	int i, x = 0;

	va_start(args, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%' && out_put(format[i + 1]))
		{
			x += print_gfunc(args, format[i + 1]);
			i++;
		}
		else
		{
			x += _putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (x);
}
