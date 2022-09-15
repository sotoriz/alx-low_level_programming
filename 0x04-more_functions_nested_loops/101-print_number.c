#include <stdio.h>
#include "main.h"

/**
 * priny number - Prints a number
 * @n: The number to print
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		putchar('-');
		num = -num;
	}
	if (n > 0)
	{
		print_number(num / 10);
	}
	putchar(num % 10 + '0');
}
