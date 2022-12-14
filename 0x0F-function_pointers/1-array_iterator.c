#include "function_pointers.h"
#include <stdlib.h>


/**
 * array_iterator - executes a function given
 * @array: array to iterate over
 * @size: size of the of the array
 * @action: pointer to function used
 *
 * Return: Always success
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
