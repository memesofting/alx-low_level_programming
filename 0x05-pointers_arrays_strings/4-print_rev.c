#include "main.h"
#include <string.h>
/**
 * print_rev - prints strings in reverse
 * @s: string to be printed
 *
 * Return: void (Success)
 */
void print_rev(char *s)
{
	int len;
	char rev;
	int i;

	len = strlen(s);
	for (i = 0; i < len; i++)
	{
		rev = s[len - i - 1];
		_putchar(rev);
		rev++;
	}
	_putchar('\n');

}
