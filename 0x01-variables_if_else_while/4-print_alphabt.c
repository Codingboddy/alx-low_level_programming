#include <stdio.h>

/**
 * main - print all letters in lowercase except q and e
 *
 * Return: 0 Always
 */

int main(void)
{
	char alp[24] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24; i++)
	{
		putchar (alp[i]);
	}
	putchar ('\n');
	return (0);
}
