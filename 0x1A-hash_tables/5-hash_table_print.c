#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to be printed
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	int comma;

	comma = 0;
	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		for (node = ht->array[i]; node != NULL; node = node->next)
		{
			if (comma)
			{
				printf(", ");
			}
			printf("'%s':'%s'", node->key, node->value);
		}
	}
	printf("}\n");
}
