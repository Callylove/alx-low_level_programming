#include "main.h"
/**
 * _islower - check if a character is lowercase
 * @c: the character to be checked
 *
 * Return: 1 if character is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	return (1);
	else if (c >= 65 && c <= 90)
	return (0);
	else
	return (0);
}
