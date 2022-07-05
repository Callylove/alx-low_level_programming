#include "main.h"

/**
 * parent_alphabet - calling in the function using prototype
 * Description - its prints the alphabet in lowercase
 * followed by a newline
 * putchar - putchar function
 *
 * Return:Alway 0 (Success)
 */

void parent_alphabet(void)
{
	char l;

	int putchar(int c);

	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}
	putchar('\n');
}
