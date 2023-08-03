#include "main.h"
#include <string.h>
/**
 * rev_string - reverses strings
 *
 * Return: Always void (Success)
 */
void rev_string(char *s)
{
	char rev;
	int i;
	int len;

	len = strlen(s);
	for (i >= 0; i < len; i--)
	{
		rev = s[i];
		rev++;
	}
}
