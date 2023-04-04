#include "main.h"

/**
 * _strstr - a function that locates a substring
 * @haystack: the string to be searched through
 *
 * @needle: the string to be compared
 *
 * Return: substring if found or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int j, i, a;

	if (needle[0] == '\0')
	{
		return (haystack);
	}
	for (j = 0; haystack[j] != '\0'; j++)
	{
		if (haystack[j] == needle[0])
		{
			a = j;
			for (i = 0; needle[i] != '\0'; i++)
			{
				if (haystack[a] == needle[i])
				{
					a++;
				}
				else
					break;
			}
			if (needle[i] == '\0')
			{
				return (&haystack[j]);
			}
		}
	}
	return (0);
}
