#include <stdio.h>
#include <stdlib.h>
#include "function_pointers_h"

/**
 * print_name - a function that prints a name
 * @name : the name to be printed
 * @f : function to use
 *
 * Return : result
 */

void print_name(char *name, void (*f)(char *));
{
	if (name && f)
		f(name);
}
