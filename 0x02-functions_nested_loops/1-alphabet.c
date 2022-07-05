#include "main.h"

/**
 * print_alphabet - calling in the function using prototype
 * Description - its prints the alphabet in lowercase
 * followed by a newline
 *
 * Return:Alway 0 (Success)
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
