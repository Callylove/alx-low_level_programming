#include <stdio.h>
/**
 * main - prints the sum of all multiples of 3
 * or 5 below 1024 (excluded), followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	int j = 0;
	long int a = 0, b = 1, nxt;

	while (j < 50)
	{
		nxt = a + b;
		a = b;
		b = nxt;
		printf("%lu", nxt);

		if (j < 49)
		{
			printf(", ");
		}
		j++;
	}
	putchar('\n');
	return (0);
}
