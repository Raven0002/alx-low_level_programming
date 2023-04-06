#include "main.h"

/**
 * wildcmp - function compares two strings with wildcard matches
 * @s1: pointer to the first string
 *
 * @s2: pointer to second string with wildcard characters
 *
 * Return: 1 strings match with wildcard matches, 0 if not
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else if (*s2 == '*')
	{
		return (_str_match(s1, (s2 + 1), (s2 + 1)));
	}
	else
	{
		return (0);
	}
}

/**
 * _str_match - function checks if a substring after wildcard matches s1
 * @s1: pointer to one string
 *
 * @s2: pointer to one string
 *
 * @after_wldcd: pointer to placeholder for position right after wildcard
 *
 * Return: 1 if substring after wildcard matches s1, 0 if not
 */

int _str_match(char *s1, char *s2, char *after_wldcd)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s1 == '\0' && *s2 == '*')
	{
		return (_str_match(s1, s2 + 1, s2 + 1));
	}
	if (*s1 == '\0' && *s2 != '\0')
	{
		return (0);
	}
	if (*s2 == '*')
	{
		return (_str_match(s1, s2 + 1, s2 + 1));
	}
	if (*s1 == *s2)
	{
		return (_str_match(s1 + 1, s2 + 1, after_wldcd));
	}
	else
	{
		return (_str_match(s1 + 1, after_wldcd, after_wldcd));
	}
}
