#include <stdio.h>

/**
 * main - put all numbers of base 16 in lowercasw
 *
 * Return: 0 Always
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		putchar ((i % 16) + '0');
	}

	for (j = 'a'; j < 'f'; j++)
	{
		putchar (j);
	}
	putchar ('\n');
	return (0);
}
