#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string to print
 * @n: number of integers
 * 
 * Return: result
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int i = 0;



	va_start(a, n);
	while (i < n)
	{
		printf("%d", va_arg(a, int));

		if (i != n - 1 && separator)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(a);

}
