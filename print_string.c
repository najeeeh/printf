#include "main.h"
/**
 * Function to print a string to the buffer
*/
void print_string_to_buf(char *buf, int *j, const char *str)
{
	while (*str)
	{
		buf[(*j)++] = *str++;
	}
}
