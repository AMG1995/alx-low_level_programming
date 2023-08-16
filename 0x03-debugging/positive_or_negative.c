#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 *positive_or_negative - Determine if a random number.
 *Return: 0 on success
 *@n : for number.
 */

void positive_or_negative(int n)
{
	int n;

	/* your code goes there */
	if (n < 0)
	{
		printf("%d is %s\n", n, "negative");
	}
	else if (n > 0)
	{
		printf("%d is %s\n", n, "positive");
	}
	else
	{
		printf("%d is %s\n", n, "zero");
	}
	return (0);

}
