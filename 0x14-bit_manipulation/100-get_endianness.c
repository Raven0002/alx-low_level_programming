#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: result
 */

int get_endianness(void)
{
	int i = 1;

	return (*((char *) &i) + '0');
}
