#include "main.h"
#include <stdio.h>

/**
 * print_line - prints a s bytes of a buffer
 * @c: buffer to print
 * @s: bytes of buffer to be printed
 * @l: the line of buffer to print.
 *
 * Return: void
 */

void print_line(char *c, int s, int l)
{
	int byte, index;

	for (byte = 0; byte <= 9; byte++)
	{
		if (byte <= s)
			printf("%02x", c[l * 10 + byte]);
		else
			print("  ");
		if (byte % 2)
			putchar(' ');
	}
	for (index = 0; index <= s; index++)
	{
		if (c[l * 10 index] > 31 && c[l * 10 + index] < 127)
			putchar(c[l * 10 + index]);
		else
			putchar('.');
	}
}

/**
 * print_buffer - prints a buffer
 * @b: buffer toprint
 * @size: size of buffer
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i;

	for (i = 0; i <= (size - 1) / 10 && size; i++)
	{
		printf("%08x: ", i * 10);
		if (i < size / 10)
		{
			print_line(b, 9, i);
		}
		else
		{
			print_line(b, size % 10 - 1, i);
		}
		putchar('\n');
	}
	if (size == 0)
		putchar('\n');
}
