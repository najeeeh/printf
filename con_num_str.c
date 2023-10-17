#include "main.h"

/**
 * con_num_str - Convert base 10 number to string
 *
 * @pj: Pointer to the address of loopcounter of buf
 * @n: The number from calling va_arg(ptr, int)
 * @pbuf: Pointer to the address of current index of buf
*/
void con_num_str(int *pj, int n, char *pbuf)/*(&j,va_arg(ptr, int),(buf + j))*/
{
	char b[300];
	int i;

	if (n > INT_MAX) /*Check if n is greater than max value of int or not*/
		exit(-1);
	sprintf(b, "%d", n); /*Convert from number to string*/
	for (i = 0; b[i] != '\0'; i++)
		pbuf[i] = b[i];
	*pj = *pj + i - 1; /*adjust index*/
}
