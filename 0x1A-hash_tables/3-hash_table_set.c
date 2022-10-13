#include "hash_tables.h"
/**
 * hash_table_set - a function that adds an element to the hash table.
 *
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key and can not be an empty string
 * @value:  is the value associated with the key
 *
 * Return - 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index = 0;
hash_node_t *node = NULL, *add_node = NULL, *tmp = NULL;

if (!key || !ht || !ht->array)
return (false);

if (ht == NULL || key == NULL | value == NULL)
return (0)

index = key_index((unsigned char *)key, ht->size);
node = ht->array[index];

if(!node)
{
node = malloc(sizeof(hash_node_t))
if (!node)
return(false);
node->key = strdup(key), node->value = strdup(value);
node->next = NULL;
ht->array[index] = node;
return (true);
}

for (tmp = node; tmp; tmp = tmp->next)
if (strcmp(tmp->key, key) == 0)
{
free(tmp->value), tmp->value = strdup(value);
return (true);
}
add_node = malloc(sizeof(hash_node_t));
if (!add_node)
return (false);
add_node->key = strdup(key), add_node->value = strdup(value);
add_node->next = node;
ht->array[index] = add_node;

return (true);
}