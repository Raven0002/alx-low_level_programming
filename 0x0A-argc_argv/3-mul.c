#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - function that multiplies two numbers
 * @argc: integer representing the number of command-line arguments
 *
 * @argv: array of strings representing the command-line arguments
 *
 * Return: 1 on success
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
	}
	return (1);
}
