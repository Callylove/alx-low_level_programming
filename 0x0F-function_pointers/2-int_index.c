#include "function_pointers.h"

/**
 * int_index - returns the index of the first element
 * for which cmp function does not return 0
 * @array: the array
 * @size: the number of element in the array
 * @cmp: is a function to the pointer to be used to compare values
 *
 * Return: 0 or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
