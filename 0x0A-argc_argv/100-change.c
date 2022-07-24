#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - coins to make change for an amount of money
 * @argc: argument counter
 * @argv: array of pointer to strings
 *
 * Return: 0 if no errors, else
 */
int main(int argc, char *argv[])
{
	int a, n, i, t;

	int c[] = {25, 10, 5, 2, 1};

	a = n = i = t = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]); /*convert str to int*/
	if (n <= 0)
	{
		printf("0\n");
		return (0);
	}
	while (c[a] != '\0')
	{
		if (n >= c[a])
		{
			t = (n / c[a]);
			i += t;
			n -= c[a] * t;
		}
		a++;
	}
	printf("%d\n", i);
	return (0);
}
