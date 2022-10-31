#include "main.h"

/**
 * flip_bits - returns the number of bites you would need to flip
 * @n: number 1
 * @m: number 2
 *
 * Return: Always success
 */
unsigned int flip_bits(unsigned long int n, usigned long int m)
{
	unsigned int nbits;

	for (nbits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			nbits++;
	}
	return (nbits);
}
