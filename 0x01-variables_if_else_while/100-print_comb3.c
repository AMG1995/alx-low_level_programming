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
	int i = '0';
    int j = '0';

    for (i = '0' ; i < '9'; i++)
    {
        for (j = '1'; j <= '9'; j++)
        {
            /* code */
           if (j>i)
            {
                /* code */
                putchar(i);
                putchar(j);
                putchar(' ');
                if (i != '8' && j != '9')
                {
                   putchar(',');
                }

            }

        }
    }
    return (0);
}
