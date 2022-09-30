#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always success
 */
int main(int argc, char *argv[])
{
	int position, total, change, aux;
	int cions[] = {25, 10, 5, 2, 1};

	position = total = change = aux = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	total = atoi(argv[1]);

	if (total <= 0)
	{
		printf("0\n");
		return (0);
	}

	while (cions[position] != '\0')
	{
		if (total >= cions[position])
		{
			aux = (total / cions[position]);
			change += aux;
			total -= cions[position] * aux;
		}
		position++;
	}
	printf("%d\n", change);
	return (0);
}
