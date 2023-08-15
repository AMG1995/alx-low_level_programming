#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_alphabet_x10 - repeats
(*
 * Return: 0 on success
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 1; i <= 10; i++)
	{
		/* code */
		for (c = 'a'; i <= 'z'; c++)
		{
			/* code */
			_putchar(c);
		}
		_putchar('\n');
	}

}

