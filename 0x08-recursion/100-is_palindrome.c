#include "main.h"
#include "2-strlen_recursion.c"

/**
 * is_palindrome - checks if a string is a palindrome using recursion
 * @s: the string to check
 *
 * Return: 1 if palindorme, 0 if not
 */

int is_palindrome(char *s)
{
	return (_str_cmp_recursion(s, (s + _strlen_recursion(s) - 1)));
}

/**
 * _str_cmp_recursion - compare 1st and 2nd half of string
 * @first: first half of the string
 *
 * @last: last half of the string
 *
 * Return: 1 if palindrome, 0 if not
 */

int _str_cmp_recursion(char *first, char *last)
{
	if (first >= last)
	{
		return (1);
	}
	if (*first == *last)
	{
		return (_str_cmp_recursion(first + 1, last - 1));
	}

	return (0);
}
