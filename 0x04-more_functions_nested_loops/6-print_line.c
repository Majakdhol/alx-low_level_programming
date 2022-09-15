#include "main.h"

/**
 * print_line - printing line
 * @n: integer param
 */
void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	for (x = 0; x < n; x++)
		_putchar(95);
	_putchar('\n');
}
