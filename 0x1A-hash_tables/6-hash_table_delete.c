#include "hash_tables.h"
/**
 * hash_table_delete - a function that deletes a hash table
 *
 * @ht: the hash table
 *
 */
void hash_table_delete(hash_table_t *ht)
{
unsigned long int index = 0;
hash_node_t *node ,*lst;

if (!ht)
return;

for (index = 0; index < ht->size; index++)
{
node = ht->array[index];
while (node != NULL)
{
lst = node;
node = node->next;
free(lst->key);
free(lst->value);
free(lst);
}
}

free(ht->array);
free(ht);
}
