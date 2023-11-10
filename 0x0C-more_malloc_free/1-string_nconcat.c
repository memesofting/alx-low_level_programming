#include "main.h"
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: string_nconcat on Success
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *combined;
	int i;
	unsigned int len2;

	len2 = strlen(s2);
	combined = malloc(sizeof *s1 + n);
	if (combined == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len2; i++)
	{
		if (n >= len2)
	{
}
