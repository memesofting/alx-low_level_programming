#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * print_name - prints a name
 * @name: string to be printed
 * @f: function pointer to string
 *
 */

void print_name(char *name, void (*f)(char *))
{
	(f)(name);
}
