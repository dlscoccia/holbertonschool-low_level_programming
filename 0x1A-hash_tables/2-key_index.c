#include "hash_tables.h"
/**
 * key_index - finds the index for a given key
 * @size: of the array
 * @key: key value
 * Return: index of key
 **/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int index = hash_djb2(key) % size;

return (index);
}
