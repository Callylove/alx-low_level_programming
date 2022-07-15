#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: The string to encode
 *
 * Return: The encoded string
 */
char *leet(char *s)
{
	int a = 0, b;
	char r[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (s[a])
	{
		for (b = 0; b <= 7; b++)
		{
			if (s[a] == r[b] || s[a] - 32 == r[b])
				s[a] = b + '0';
		}

		a++
	}

	return (s);
}
