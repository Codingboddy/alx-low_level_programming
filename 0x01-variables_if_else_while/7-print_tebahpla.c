#include <stdio.h>

/**
 * main - print the lower case alphabeth in reverse
 *
 * Return: 0 Always
 */

int main(void)
{
	char alp[26] = "zyxwvutsrqponmlkjihgfedcba";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar (alp[i]);
	}
	putchar ('\n');
	return (0);
}
