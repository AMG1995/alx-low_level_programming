#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The unsigned long integer.
 * @index: The index of the bit to retrieve (0-based).
 *
 * Return: The value of the bit at the specified index (1 or 0),
 *         or -1 if an error occurred (if index is out of range).
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1); /* Index out of range */

	if ((n & mask) == 0)
		return (0); /* Bit at index is 0 */
	else
		return (1); /* Bit at index is 1 */
}
