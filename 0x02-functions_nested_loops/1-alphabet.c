#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *print_alphabet - prints the english alphabet from a-z.
 * Return: Nothing.
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		/* code */
		_putchar(c);

	}
	_putchar('\n');
}

