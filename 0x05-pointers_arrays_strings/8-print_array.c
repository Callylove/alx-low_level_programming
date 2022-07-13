#include "main.h"
#include <stdio.h>
/**
 * print_array - prints nth element of an array
 * @a: pointer to the elements
 * @n: times to print elements
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
