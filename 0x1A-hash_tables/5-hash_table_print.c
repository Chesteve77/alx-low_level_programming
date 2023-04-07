#include "hash_tables.h"
/**
 * hash_table_print - function that prints the whole hash table, pythonic way.
 * @ht: pointer to the hash table structure
 * Return: pointer to the value string
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned int idx = 0, flag = 0;

	if (ht == NULL)
		return;
	printf("{");
	while (idx < ht->size)
	{
		if (ht->array[idx])
		{
			for (node = ht->array[idx]; node; node = node->next)
			{
				if (flag == 1)
					printf(", ");
				printf("'%s': '%s'", node->key, node->value);
				flag = 1;
			}
		}
		idx++;
	}
	printf("}\n");
}
