#include "main.h"

/**
 * print_number - prints any integer with putchar
 * @n: number to prints
 *
 * Return: nothing
 */
void print_number(int n)
{
	unsigned int x = n;

	if (n < 0)
	{
		_putchar('_');
		x = -x;
	}

	if (x / 10 > 0)
		print_number(x / 10);

	_putchar((x % 10) + '0');
}
