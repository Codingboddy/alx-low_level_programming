#include <stdio.h>

/**
 * main - Print alphabeth in lower case and upper case
 *
 * Return: 0 Always
 */

int main(void)
{
	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
	putchar (alp[i]);
	}
	putchar ('\n');
	return (0);
}
