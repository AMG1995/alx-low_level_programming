#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determine if a random number is.
(*
 * Return: 0 on success
 */
int main(void)
{
    char i = '0';
    char j = '0';
    for (i = '0' ; i < '9'; i++)
    {
        for (j = '0'; j <= '9'; j++)
        {
            /* code */
            putchar(i);
            putchar(j);
	    if (i == '8' && j == '9')
	    {
		putchar('\n');
	    }
	    else
	    {
            putchar(' ');
            putchar(',');
	    }
        }
     }
     return (0);
}
