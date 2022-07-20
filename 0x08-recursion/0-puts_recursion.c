#include "main.h"
/**
 * _puts_recursion - a function thats prints a string
 *
 * @s: the char value
 *
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\0');
}
