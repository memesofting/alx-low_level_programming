#include "main.h"
#include <ctype.h>
#include <string.h>
/**
 * string_toupper - changes lowecase letters to upper case
 * @ : string to change
 *
 * Return: pointer (Success)
 */
char *string_toupper(char *)
{
	char *c;
	char *p;
	int len;
	char cap;
	int i;

	len = strlen(c);

	for (i = 0; i < len; i++)
	{
		p = c[i];
		cap = toupper(p);
		return (cap);
	}
	return (c);
}
