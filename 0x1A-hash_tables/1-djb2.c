#include "hash_tables.h"

/**
 * hash_djb2 - a hash funcion that implementing the djb2 algorithm.
 * 
 * @str: the hash string
 * 
 * Return: the djb2 algorithm
 */

unsigned long int hash_djb2(const unsigned char *str)
{
    unsigned long int hash;
    int i;

    hash = 5381;

    while ((i = *str++))
    {
        hash = ((hash << 5) + hash) + i;
        /* hash * 33 + i */
    }

    return (hash);

}