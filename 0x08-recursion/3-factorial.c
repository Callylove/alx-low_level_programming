#include "main.h"
/**
 * factorial - a function that prints factorial number
 * @n: lower than 0, the function to indicate the error
 *
 * Return: the value of factorial
 */
int factorial(int n)
{
	int fact = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	else
		fact *= factorial(n - 1);

	return (fact);
}
