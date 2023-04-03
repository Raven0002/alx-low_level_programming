#include "main.h"

/**
 *  _strspn - replace return with find
 *  @s: the string to search
 *
 *  @accept: the set of character to compare against
 *
 *  Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, j, bytes = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[a] == accept[j])
			{
				bytes++;
				break;
			}
			if (accept[j + 1] == '\0' && s[a] != accept[j])
			{
				return (bytes);
			}
		}
	}
	return (bytes);
}
