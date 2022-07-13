#include "main.h"

/**
 * _strlen - length of the string
 * @s: the string
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int j;

	for (j = 0; s[j] != '\0'; j++)
		;
	return (j);
}
