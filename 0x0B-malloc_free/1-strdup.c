#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - duplicates to new memory spae location
 * @str: char
 * Return: Always success
 */
char *_strdup(char *str)
{
	char *array;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	array = malloc(sizeof(char) * (i + 1));
	if (array == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
		array[r] = str[r];
	return (array);
}
