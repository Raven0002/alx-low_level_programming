#include <stdio.h>
#include <stdlib.h>

/**
 * main - function prints minimal numbr of coins of change
 * @argc: integer representing the number of command-line arguments
 *
 * @argv: array of strings representing the command-line arguments
 *
 * Return: result
 */

int main(int argc, char *argv[])
{
	int i;
	int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (argv[1][0] == 45)
	{
		printf("0\n");
		return (0);
	}

	i = atoi(argv[1]);
	coins += i / 25;

	i = i % 25;
	coins += i / 10;

	i = i % 10;
	coins += i / 5;

	i = i % 5;
	coins += i / 2;

	i = i % 2;
	coins += i / 1;

	printf("%d\n", coins);
	return (0);
}
