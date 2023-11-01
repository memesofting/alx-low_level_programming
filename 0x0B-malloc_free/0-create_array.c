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
	unsigned int i;
	char *array;

	i = 0;
	array = &c;
	while (i <= size)
	{
		array = malloc(sizeof(char) * i);
		if (size == 0)
		{
			return (NULL);
		}
		else if (size > 0)
		{
			return (array);
		}
		else
		{
			return (NULL);
		}
	}
	return (0);
}
