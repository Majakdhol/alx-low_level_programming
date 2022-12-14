#include <stdio.h>
#include "main.h"

/**
 * print_number - Prints a number
 * @n: The number to print
 *
 * Return: Always 0
 */

void print_number(int n)
{
	int num = n;

	if (n < 0)
	{
		putchar('-');
	}
	if (num > 9)
	{
		print_number(num / 10);
	}
	putchar(num % 10 + '0');
}
