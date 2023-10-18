#include "main.h"

/**
 * _printf - works as printf function
 *
 * @format: The format string
 * Return: The number of characters printed
*/
int _printf(const char *format, ...)
{
	va_list ptr;
	int i, j, k;
	char *p, *buf;

	if (format == NULL)
		return (-1);
	va_start(ptr, format);
	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
		return (-1);
	for (i = 0, j = 0; format[i] != '\0'; i++, j++)
{
	if (format[i] == '%')
	{
		i++;
		if (format[i] == 'c')
		{
			print_char(buf, &j, (char)va_arg(ptr, int));
		}
		else if (format[i] == 's')
		{
			print_string(buf, &j, va_arg(ptr, const char *));
		}
		else if (format[i] == '%')
			buf[j] = '%';
		else if (format[i] == 'd' || format[i] == 'i')
			con_num_str(&j, va_arg(ptr, int), (buf + j));
	}
	else
		buf[j] = format[i];
}
buf[j] = '\0';
va_end(ptr);
write(1, buf, strlen(buf));
free(buf);
return ((int)strlen(buf));
}
