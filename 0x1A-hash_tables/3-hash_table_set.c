#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: pointer to the hash table structure
 * @key: string to be looked for
 * @value: value of the data
 * Return: 1 on success or 0 on error
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = NULL;
	hash_node_t *tmp = NULL;
	int idx;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);

	tmp = ht->array[idx];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}

	new = malloc(sizeof(hash_node_t *));
	if (!new)
		return (0);

	new->value = strdup(value);
	new->key = strdup(key);
	new->next = NULL;

	if (ht->array[idx] != NULL)
		new->next = ht->array[idx];

	ht->array[idx] = new;
	return (1);
}
