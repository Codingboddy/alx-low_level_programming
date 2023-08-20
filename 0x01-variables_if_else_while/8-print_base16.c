#include <stdio.h>

/**
 * main - put all numbers of base 16 in lowercasw
 *
 * Return: 0 Always
 */

int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{
		putchar ((i % 16) + '0');
	}
	putchar ('\n');
	return (0);
}
