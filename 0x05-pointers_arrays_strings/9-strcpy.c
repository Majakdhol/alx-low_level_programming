#include "main.h"

/**
 * _strcpy - copy paste string
 * @src: source
 *
 * Return: Always 0
 */

char *strcpy(char *dest, char *src)
{
	int inc = 0;

	while (*(src + inc) != '\0')
	{
		*(dest + inc) = *(src +inc);
		inc++;
	}
	*(dest + inc) = '\0';
	return (dest);
}
