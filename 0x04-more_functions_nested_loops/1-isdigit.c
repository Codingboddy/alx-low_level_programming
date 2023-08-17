#include "main.h"

/**
 * main - a function that checks for digit 0 to 9
 * @c: char to check
 * Return: 0 or 1
 */

int _isupper(int c)
{
        if (c >= '1' && c <= '9')
                return (1);
        else
                return (0);
