#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _strdup - returns pointer to a newly allocated memory
 * @str: string to duplicate
 *
 * Return: pointer to string
 */

char *_strdup(char *str)
{
	char *new;
	int len;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		len = strlen(str) + 1;
		new = malloc(sizeof(*str) * len);
		if (new == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < len; i++)
		{
			new[i] = str[i];
		}
		return (new);
	}
}
