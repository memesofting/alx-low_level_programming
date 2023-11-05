#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to new space
 */
char *str_concat(char *s1, char *s2)
{
	char *new;
	int l1;
	int l2;
	int i;

	if (s1 == NULL)
	{
		return (s2);
	}
	if (s2 == NULL)
	{
		return (s1);
	}
	if (s1 == 	NULL && s2 == NULL)
	{
		return (NULL);
	}
	else
	{
		l1 = strlen(s1);
		l2 = strlen(s2) + 1;
		new = malloc(sizeof(*s1) * l1 + sizeof(*s2) * l2);
		if (new == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < l1; i++)
		{
			new[i] = s1[i];
		}
		for (i = 0; i < l2; i++)
		{
			new[l1 + i] = s2[i];
		}
		return (new);
	}
}
