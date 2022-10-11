#include "hash_tables.h"

/**
 * hash_table_create - function to create the hash table
 *
 * @size: the size of the array of hash tables
 *
 * Return: a pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
unsigned long int i = 0;
hash_table_t *hashTable = NULL;

if (!size)
return (NULL);
hashTable = malloc(sizeof(struct hash_table_s));
if (hashTable == NULL)
return (NULL);
hashTable->array = malloc(sizeof(struct hash_node_s *) * size);
if (hashTable->array == NULL)
return (NULL);
hashTable->size = size;
for (i = 0; i < size; i++)
hashTable->array[i] = NULL;

return (hashTable);
}
