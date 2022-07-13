#include "main.h"

/**
 * puts2 - prints all characters string
 * @str: the string
 *
 */
void puts2(char *str)
{
	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}
	for (j = 0; j < 1; j = j + 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
