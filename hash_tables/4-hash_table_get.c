#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: parametr ht
 * @key: parametr key
 * Description: The function retrieves a value associated with a key
 * Return: the value associated with the element, or NULL
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int idx;

	if (key == NULL || ht == NULL)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);

	temp = ht->array[idx];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}

	return (NULL);
}
