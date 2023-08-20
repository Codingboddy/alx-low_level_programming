#include <stdio.h>

/**
 * main - print all possible combination of a single digit
 *
 * Return: 0 Always
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar (i);
		if (i != 8)

		putchar (',');
		putchar (' ');
	}
	putchar ('\n');
	return (0);
}
