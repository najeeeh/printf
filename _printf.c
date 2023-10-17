#include "main.h"

/**
 * _printf - Custom printf function.
 * @format: A format string that specifies the format of the output.
 *
 * This function allowws for formatted output similar to printf. It supports
 * format specifiers %c for characters and %s for strings.
 *
 * Return: The number oof characters printed, or -1 on error.
 */
int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	char *buf = (char *)malloc(1024);

	if (buf == NULL)
	{
		va_end(args);
		return (-1);
	}
	int x = 0;
	int j = 0;

	while (*format)
	{
		if (*format != '%')
		{
			printCharToBuffer(buf, &j, &x, *format);
		}
		else
		{
			format++;
			if (*format == '\0')
			{
				break;
			}
			switch (*format)
			{
				case 'c':
					{
						char c = va_arg(args, int);

						printCharToBuffer(buf, &j, &x, c);
						break;
					}
				case 's':
					{
						char *str = va_arg(args, char *);

						printStringToBuffer(buf, &j, &x, str);
						break;
					}
				case '%':
					{
						handlePercent(buf, &j, &x);
						break;
						default:
						break;
					}
			}
			format++;
		}
		buf[j] = '\0';
		va_end(args);
		fputs(buf, stdout);
		free(buf);
		return (x);
	}
