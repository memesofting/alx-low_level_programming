#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to be printed
 */

void puts_half(char *str)
{
	int i, len, len2;

	len = strlen(str) - 1;
	if (len % 2 > 0)
	{
		len2 = (len - 1) / 2;
	}
	else
	{
		len2 = len / 2;
	}
	for (i = len2 + 1; i <= len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
