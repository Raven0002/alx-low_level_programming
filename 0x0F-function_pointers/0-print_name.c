#include "function_pointers_h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - a function that prints a name
 * @name : the name to be printed
 *
 * @f : function
 *
 * Return : result
 */

void print_name(char *name, void (*f)(char *));
{
	if (name && f)
	{
		f(name);
	}
}
