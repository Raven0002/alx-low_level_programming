#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function prints its name followed by a new line
 * @argc: integer representing the number of command-line arguments
 *
 * @argv: array of strings representing the command-line arguments
 *
 * Return: 0 on success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
