#include "hash_tables.h"
/**
 * hash_table_print - a a function that prints a hash table.
 * @ht: the hash table
 *
 * Return: print the key/value in the order that they appear in 
 * the array of hash table 
 * Order(array,list)
 * If ht is NULL, DONT PRINT ANYTHING
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned long int index;
hash_node_t *node = NULL;
int i;

if (!ht)
return;

printf("{");

for (index = 0; index < ht->size; index++)
{
node = ht->array[index];

while (node != NULL)
{
if (i == 1)
{
printf(", ");
printf("'%s': '%s'", node->key, node->value);

node = node->next;
i = 1;
}
}
}

printf("}\n");
}
