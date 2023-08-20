#include <stdio.h>

/**
 * main - write a program that prints the different combinations of 2 digit
 *
 * Return: 0 Always
 */

int main(void)
{
	int i;

	for (i = 0; i <= 20; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
