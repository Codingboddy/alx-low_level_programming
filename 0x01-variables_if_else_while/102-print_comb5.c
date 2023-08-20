#include <stdio.h>

/**
 * main - Print all possible combination of 2 digit
 *
 * Return: 0 Always
 */

int main(void)
{
	int x;
	int y;

	for (x = 0; x <= 10; x++)
	{
	for (y = 0; y <= 20; y++)
	{
		putchar(x);
		putchar(y);
		if (x != 9)
	}
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
