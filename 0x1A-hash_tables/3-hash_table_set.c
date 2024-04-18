#include "hash_tables.h"

/**
 * hash_table_set - adds an element to a hash table
 * @ht: hash table to be updated
 * @key: key
 * @value: value
 * Return: 1 on success and 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index, size;
    hash_node_t **hash;

    size = strlen(ht);
    index = key_index(key, size)
    ht = hash_table_create(size)
}
