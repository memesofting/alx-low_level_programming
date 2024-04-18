#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to be deleted
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *temp;

	if (ht != NULL)
	{
		for (i = 0; i < ht->size; i++)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				temp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = temp;
			}
		}
		free(ht->array);
		free(ht);
	}
}
