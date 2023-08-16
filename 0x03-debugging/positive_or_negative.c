#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 *positive_or_negative - Determine if a random number.
 *Return: 0 on success
 *@i : for number.
 */

void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is %s\n", i, "negative");
	}
	else if (i > 0)
	{
		printf("%d is %s\n", i, "positive");
	}
	else
	{
		printf("%d is %s\n", i, "zero");
	}
	return;

}
