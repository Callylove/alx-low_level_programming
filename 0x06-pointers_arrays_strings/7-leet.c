#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: The string to encode
 *
 * Return: The encoded string
 */
char *leet(char *s)
{
	int a, b;
	char s1[] = "aeotl";
	char S1[] = "AEOTL";
	char s2[] = "43071";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; b < 5; b++)
		{
			if (s[a] == s1[b] || s[a] == S1[b])
			{
				s[a] = s2[b];
				break;
			}
		}
	}

	return (s);
}
