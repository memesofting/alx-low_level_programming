#include "main.h"
#include <string.h>
/**
 * _strstr - locates substring
 * @haystack: string to search from
 * @needle:string to search
 *
 * Return: *needle (Success)
 * else: NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int hl;
	int nl;
	int i;

	hl = strlen(haystack) - 1;
	nl = strlen(needle) - 1;
	for (i = 0; i <= hl; i++)
	{
		while (nl <= hl)
		{
			if (haystack[i] == needle[i])
			{
				return (needle);
			}
			else
			{
				i++;
			}
		}
	}
	return (needle);
}
