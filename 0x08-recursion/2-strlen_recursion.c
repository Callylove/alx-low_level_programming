#include "main.h"
/**
 * _strlen_recursion - a function that prints the length of a string
 * @s: the pointer of char
 *
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	return (length);
}
