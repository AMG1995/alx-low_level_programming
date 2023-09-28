#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: A pointer to the unsigned long integer.
 * @index: The index of the bit to set (0-based).
 *
 * Return: 1 if it worked, or -1 if an error occurred (if index is out of range).
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1); /* Index out of range */

	*n |= mask; /* Set the bit at index to 1 */

	return (1); /* Success */
}
