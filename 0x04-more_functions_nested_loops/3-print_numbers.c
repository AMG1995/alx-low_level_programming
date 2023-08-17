#include "main.h"
/**
 * print_numbers - prints from 1-9
 */
void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		_putchar(i + '0');
		++i;
	}
	_putchar('\n');
}

