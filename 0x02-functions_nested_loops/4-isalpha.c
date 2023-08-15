#include "main.h"
/**
 * _isalpha - tests whether a character is alpha
 * Return: 1 if it is a lowercase letter, 0 if it is not a lowercase letter.
 * * @c: character to test.
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
