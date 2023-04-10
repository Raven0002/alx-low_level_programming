#include "main.h"
#include <stdio.h>

/**
 * main -function prints the number of arguments passed into it
 * @argc: integer representing the number of command-line arguments
 *
 * @argv: array of strings representing the command-line arguments
 *
 * Return: 0 if success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
