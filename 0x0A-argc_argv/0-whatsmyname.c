#include "main.h"
/**
 * main - prints its name
 * @argc: argument counter
 * @argv: array of pointer to strings
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i])
	}
	return (0);
}
