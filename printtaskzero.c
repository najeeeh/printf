#include "main.h"

/**
 * printCharToBuffer - Appends a character to the buffer.
 * @buf: Pointer to the buffer.
 * @j: Pointer to the buffer index.
 * @x: Pointer to the character count.
 * @c: The character to append.
 *
 * This function appends the character 'c' to the buffer, increments the buffer
 * index, and updates the character count.
 */
void printCharToBuffer(char *buf, int *j, int *x, char c)
{
	buf[(*j)++] = c;
	(*x)++;
}

/**
 * printStringToBuffer - Appends a string to the buffer.
 * @buf: Pointer to the buffer.
 * @j: Pointer to the buffer index.
 * @x: Pointer to the character count.
 * @str: The string to append.
 *
 * This function appends the string 'str' to the buffer character by character,
 * increments the buffer index, and updates the character count.
 */
void printStringToBuffer(char *buf, int *j, int *x, const char *str)
{
	int k = 0;

	while (str[k] != '\0')
	{
		buf[(*j)++] = str[k++];
		(*x)++;
	}
}

/**
 * handlePercent - Appends the '%' character to the buffer.
 * @buf: Pointer to the buffer.
 * @j: Pointer to the buffer index.
 * @x: Pointer to the character count.
 *
 * This function appends the '%' character to the buffer, increments the buffer
 * index, and updates the character count.
 */
void handlePercent(char *buf, int *j, int *x)
{
	buf[(*j)++] = '%';
	(*x)++;
}
