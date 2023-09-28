#include main.h

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	int bit_position;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	/* Find the leftmost '1' bit in n */
	bit_position = sizeof(unsigned long int) * 8 - 1;
	while ((n & (1UL << bit_position)) == 0)
		bit_position--;

	/* Print binary representation starting from the leftmost '1' bit */
	while (bit_position >= 0)
	{
		if (n & (1UL << bit_position))
			_putchar('1');
		else
			_putchar('0');
		bit_position--;
	}
}
