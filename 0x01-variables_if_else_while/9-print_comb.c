#include <stdio.h>

/**
 * main - print all possible combination of a single digit
 *
 * Return: 0 Always
 */

int main(void)
{
	int i = '0';

	for (i = 0; i <= 9; i++)
	{
		putchar (i);
		putchar (',');
	}
	putchar ('\n');
	return (0);
}
