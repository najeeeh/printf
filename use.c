#include "main.h"

/**
 * _putchar - print output to stdout
 *
 * @c: char
 * Return: 1 if success -1 if failed
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * out_put - check if char c is the right specifier
 * @c: specifier.
 *
 * Return: if success 1 else 0.
 */
int out_put(char c)
{
	char specs[] = {
		'c', 's', '%', 'd', 'i', 'u', 'o', 'x', 'X', 'r', 'R', 'b', 'S', 'p'
	};
	int i = 0;

	while (specs[i])
	{
		if (c == specs[i])
			return (1);
		i++;
	}
	return (0);
}

/**
 * count - count the length of string
 *
 * @s: string.
 * Return: the length of string
 */
int count(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
