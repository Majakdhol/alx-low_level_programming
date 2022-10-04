#include "main.h"

/**
 * argstostr - main entry
 * @ac: input
 * @av: poniter array
 *
 * Return: Always success
 */
char *argstostr(int ac, char **av)
{
	int i, n, r = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			i++;
	}
	l += ac;

	str = malloc(sizeof(char)* l * 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (n = 0; av[i][n]; n++)
	{
		str[r++] = '\n';
	}
	}
	return (str);

