#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * 0-positive_or_negative.c
 * Return: 0 Success
 */

int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        if (n > 5)
        {
                printf("%d is greater than 5\n", n);
        }
	else if (n == 0)
	{
		print f("and is 0", n);
	}
	else if (n < 6 > 0)
	{
		printf("%d is less than 6 and not 0", n);
	}
	return (0)
}
