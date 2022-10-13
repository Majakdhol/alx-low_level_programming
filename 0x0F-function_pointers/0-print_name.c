#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name of program
 * @name: name to print
 * @f: pointer to the printing function
 *
 * Return: Always success
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
