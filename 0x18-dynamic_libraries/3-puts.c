#include "main.h"
/**
 * _puts - prints string followed by a new line
 * @str: string to be printed to stdout
 *
 * Return: void (Success)
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
