#include <stdio.h>

/**
 * main - print all single digits of base 10 starting from 0 using putchar
 *
 * Return: 0 Always
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar((i % 10) + '0');
	}
	putchar('\n');
	return (0);
}
