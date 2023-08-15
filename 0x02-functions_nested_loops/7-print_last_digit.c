#include "main.h"
/**
 * print_last_digit - prints the last digit.
 * @n: digit to find the last number.
 * Return: The last digit.
 */
int print_last_digit(int n)
{
	int last;
	last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
