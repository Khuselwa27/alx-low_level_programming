#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * 
 * @n: Pointer to an unsigned long int representing the number to be modified.
 * @index: Index of the bit to be set to 1.
 *
 * Return: 1 if the operation was successful, -1 if it failed.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n = (*n | m);

	return (1);
}
