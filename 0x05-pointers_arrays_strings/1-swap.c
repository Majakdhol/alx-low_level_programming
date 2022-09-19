#include "main.h"

/**
 * swap_int - given two integersswap the values they are holding
 * @a: param 1
 * @b: param 2
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
