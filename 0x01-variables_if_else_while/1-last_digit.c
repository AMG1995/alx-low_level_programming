#include <stdlib.h>
#include <time.h>
/**
 * main - Determine if a random number is.
(*
 * Return: 0 on success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
    /* your code goes there */
	if (n % 10 > 5)
	{
	   printf("last digit of n is %d and is greater than 5", n);
	}
	else if (n % 10 == 0)
	{
	   printf("last digit of n is %d and is 0", n);
	}
	else if (n % 10 < 6 && n % 10 != 0)
	{
	   printf("last digit of n is %d and is less than 6 and not 0", n);
	}
	return (0);
}
