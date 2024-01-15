#include <unistd.h>

/**
 * _putchar - writes character to stdout
 * @c: character to be printed
 *
 * Return: 0 on success
 */

int _putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
