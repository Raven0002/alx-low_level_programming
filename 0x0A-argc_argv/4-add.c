#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that adds positive numbers
 * @argc: integer representing the number of command-line arguments
 *
 * @argv: array of strings representing the command-line arguments
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int i, j, sum = 0;
	char *flag;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; argv[i]; i++)
	{
		j = strtol(argv[i], &flag, 10);
		if (*flag)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += j;
		}
	}
	printf("%d\n", sum);

	return (0);
}
