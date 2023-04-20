#include "variadic_functions.h"

/**
 * print_strings - function that prints strings followed by a new line
 * @separator: string to be printed
 *
 * @n: number of strings
 *
 * Return: string
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int i = 0;


	va_start(a, n);
	while (i < n)
	{
		char *str = va_arg(a, char *);

		printf("%s", (!str) ? ("(nil)") : str);

		if (i < n - 1 && separator)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(a);

}
