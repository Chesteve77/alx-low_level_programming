#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes the whole hash table.
 * @ht: pointer to the hash table structure
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *cur = NULL;
	unsigned long int idx = 0;

	if (ht == NULL)
		return;
	idx = 0;
	while (idx < ht->size)
	{
		if (ht->array[idx] != NULL)
		{
			while (ht->array[idx])
			{
				cur = ht->array[idx];
				free(cur->key);
				free(cur->value);
				ht->array[idx] = ht->array[idx]->next;
				free(cur);
			}
		}
		idx++;
	}
	free(ht->array);
	free(ht);
}
