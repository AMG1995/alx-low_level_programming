#include "main.h"

/**
 * flip_bits - Returns the number of bits to flip to get from n to m.
 * @n: The first unsigned long integer.
 * @m: The second unsigned long integer.
 *
 * Return: The number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result != 0)
	{
		/* Increment count for each set bit (1) in xor_result */
		count += xor_result & 1;
		/* Right-shift xor_result to check the next bit */
		xor_result >>= 1;
	}

	return (count);
}
