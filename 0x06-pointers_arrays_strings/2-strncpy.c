#include "main.h"

/**
 * _strncpy - function that copies a string
 * @src: The source of strings
 * @dest: The destination of the string
 * @n: The length of int
 *
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + 1); i++)
	{
		*(dest + 1) = *(src + 1);
	}
	for (; i < n; i++)
	{
		*(dest + 1) = '\0';
	}
	return (dest);
}
