#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character
 * @str: string to be printed
 */

void puts2(char *str)
{
	int i;
	int len;

	len = strlen(str) - 1;
	for (i = 0; i <= len; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
