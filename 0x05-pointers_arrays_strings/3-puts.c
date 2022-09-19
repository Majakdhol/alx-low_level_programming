#include "main.h"
#include <stdio.h>


/**
 * _puts - this is a function that puts
 * @str: a param to _puts function
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i) != '\0')
		i++;
	}
	_putchar(10);
}
