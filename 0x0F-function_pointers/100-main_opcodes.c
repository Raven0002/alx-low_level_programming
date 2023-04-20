#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to print opcodes
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: result
 */

int main(int argc, char *argv[])
{
	int a, i = 0;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	a = atoi(argv[1]);

	if (a < 0)
	{
		printf("Error\n");
		exit(2);
	}
	arr = (char *)main;

	while (i < a)
	{
		if (i == a - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx ", arr[i]);
		i++;
	}
	return (0);
}
