#include <stdlib.h>

/**
 * create_array - create an array and initialises it with a specific char
 * @size: no of elements in array
 * @c: characters in array
 *
 * Return: NULL if size is 0
 * else: pointer to array or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *array;

	array = &c;
	if (size == 0)
	{
		return (NULL);
	}
	if (sizeof(c) != sizeof(char))
	{
		return (NULL);
	}
	array = malloc(sizeof(char) * size);
	return (array);
}
