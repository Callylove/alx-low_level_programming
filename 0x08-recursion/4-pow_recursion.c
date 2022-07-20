#include "main.h"
/**
 * _pow_recursion - a function that returns the value of x
 * raised to the power of y
 * @x: number increment
 * @y: if y is lower than 0, the function returns -1
 *
 * Return: 0
 */
int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	result += _pow_recursion(x, y - 1);

	return (result);
}
