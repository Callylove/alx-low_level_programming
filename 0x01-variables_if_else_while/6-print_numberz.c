#include <stdio.h>

/**
 * main - printing single digits from 1-10
 * without using char
 * only using putchar
 *
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
		putchar((x % 10) + '0');

	putchar('\n');

	return (0);
}
