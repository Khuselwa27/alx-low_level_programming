#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 *
 * @n: Unsigned long int representing the input number.
 * @index: Index of the bit to retrieve.
 *
 * Return: Value of the bit at the specified index, or -1 if the index is out of range.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && index < 64)
		return (0);

	for (i = 0; i <= 63; n >>= 1, i++)
	{
		if (index == i)
		{
			return (n & 1);
		}
	}

	return (-1);
}
