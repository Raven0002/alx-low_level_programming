#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of string
 * @s: string whose length is to be calculated
 *
 * Return: integer value representing length of s
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (1 + _strlen_recursion(s));
}
