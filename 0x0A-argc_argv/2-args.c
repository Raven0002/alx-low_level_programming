#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that prints all arguments it receives
 * @argc: integer representing the number of command-line arguments
 *
 * @argv: array of strings representing the command-line arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	{
		printf("%s\n", argv[j]);
	}
	return (0);
}
