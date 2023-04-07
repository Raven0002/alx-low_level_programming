#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: the string to be searched
 * @accept: the character to be searched for
 *
 * Return: s if found and NULL if not
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int j, a;

	for (j = 0; s[j] != '\0'; j++)
	{
		for (a = 0; accept[a] != '\0'; a++)
		{
			if (s[j] == accept[a])
			{
				s = &s[j];
				return (s);
			}
		}
	}
	return (0);
}
