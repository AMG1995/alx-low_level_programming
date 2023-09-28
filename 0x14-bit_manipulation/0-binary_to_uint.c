#include <stdio.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number, or 0 if there are invalid characters
 *         or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	for (int i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0); /* Invalid character, return 0 as required */

		result = result * 2 + (b[i] - '0');
	}

	return (result);
}

int main(void)
{
	const char *binaryStr1 = "1101"; /* Binary: 1101 (13 in decimal) */
	const char *binaryStr2 = "10102"; /* Invalid binary string */

	unsigned int result1 = binary_to_uint(binaryStr1);
	unsigned int result2 = binary_to_uint(binaryStr2);

	printf("Result 1: %u\n", result1); /* Expected result: 13 */
	printf("Result 2: %u\n", result2); /* Expected result: 0 (due to invalid characters) */

	return (0);
}
