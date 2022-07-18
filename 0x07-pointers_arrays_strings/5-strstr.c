#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack:longer string search
 * @needle: first occurence of the substring
 *
 * Return: a pointer begin of substrung or @NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + 1);
	}
	return (0);
}
