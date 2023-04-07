#include "main.h"

/**
 * _strchr - search for char in string
 * @s: string to be searched
 * @c: the character to be located
 *
 * Return: c if the character is found and NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int j;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] == c)
		{
			return (&s[j]);
		}
	}
	if (s[j] == c)
	{
		return (&s[j]);
	}
	return (0);
}
