#include "main.h"
#include <string.h>
/**
 * rev_string - reverses strings
 * @s: string to be reversed
 *
 * Return: Always void (Success)
 */
void rev_string(char *s)
{
	char *rev;
	int i, j;
	int len;

	j = 0;
	rev = strdup(s);
	len = strlen(s) - 1;
	for (i = len; i >= 0; i--)
	{
		s[i] = rev[j];
		j++;
	}
	s = rev;
}
