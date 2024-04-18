#include "hash_tables.h"
/**
 * hash_table_get - retrives a value associated with a key
 * @ht: hash table to be checked
 * @key: key which value would be retrieved
 * Return: value associated with the key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}
	index = key_index((const unsigned char *)key, ht->size);
	for (node = ht->array[index]; node != NULL; node = node->next)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);
		}
	}

	return (NULL);
}
