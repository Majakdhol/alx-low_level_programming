#include "main.h"
#include <stdio.h>

/**
 * main - prints the program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always success
 */
int main(int argc, char *argv[])
{
	(void) argv; /* ignore argv */
	printf("%d\n", argc - 1);
	return (0);
}
