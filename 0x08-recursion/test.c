#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - returns the lenght of a string
 * @s: string which lenght will be printed
 *
 * Return: Always 0
 */

int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (s[i] == '\0')
		return (i);
	else
		i++;
	_strlen_recursion(s + i);
}

int main(void)
{
    int n;

    n = _strlen_recursion("Corbin Coleman");
    printf("%d\n", n);
    return (0);
}
