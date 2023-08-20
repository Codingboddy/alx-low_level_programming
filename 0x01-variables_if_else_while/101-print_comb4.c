#include <stdio.h>

/**
 * main - print all possibel cobination of 3 digits
 *
 * Return: 0 Always
 */

int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 10; i++)
	{
	for (j = 11; j <= 20; j++)
	{
	for (k = 21; k <= 30; k++)
	{
		putchar(i);
		putchar(k);
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	}
	}
	return (0);
}
