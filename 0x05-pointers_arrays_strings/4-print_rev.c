#include "main.h"

/**
 * print_rev - prints reverse of a string
 * @s: the string
 *
 * Return: reversed string
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while (i > 0)
	{
		i--;
		_putchar(s[i]);
	}
	_putchar('\n');
}
